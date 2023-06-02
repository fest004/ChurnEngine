#include <glad/glad.h>

#include <GLFW/glfw3.h>

#include "shaders/shader.cpp"
#include "shaders/shader.h"
#include "graphics/window.cpp"
#include "graphics/window.hpp"
#include "math/math.hpp"
#include <iostream>
#include <math.h>

#include "graphics/buffers/buffer.cpp"
#include "graphics/buffers/buffer.hpp"
#include "graphics/buffers/indexbuffer.cpp"
#include "graphics/buffers/indexbuffer.hpp"
#include "graphics/buffers/vertexarray.cpp"
#include "graphics/buffers/vertexarray.hpp"

#include "graphics/rendering/Batch2DRenderer.cpp"
#include "graphics/rendering/Batch2DRenderer.hpp"
#include "graphics/rendering/renderable2D.h"
#include "graphics/rendering/renderer2D.hpp"
#include "graphics/rendering/simple2Drenderer.cpp"
#include "graphics/rendering/simple2Drenderer.hpp"

#include "graphics/sprites/sprite.cpp"
#include "graphics/sprites/sprite.hpp"
#include "graphics/sprites/staticSprite.cpp"
#include "graphics/sprites/staticSprite.hpp"



#include "graphics/layers/layers.cpp"
#include "graphics/layers/layers.hpp"

#include "graphics/layers/tilelayer.cpp"
#include "graphics/layers/tilelayer.hpp"

#include "graphics/layers/groups/group.cpp"
#include "graphics/layers/groups/group.hpp"

#include "utils/timer.hpp"


#define BATCH_RENDERER 1
#define TEST_50K_SPRITES 0

int main()
{
	using namespace churn;
	using namespace graphics;
	using namespace math;

	Window window("churn", 960, 540);
	// glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
	mat4 ortho = mat4::orthographic(0.0f, 16.0f, 0.0f, 9.0f, -1.0f, 1.0f);


  Shader* s = new Shader("../src/shaders/basic.vert", "../src/shaders/basic.frag");
  Shader* s2 = new Shader("../src/shaders/basic.vert", "../src/shaders/basic.frag");

	Shader& shader = *s;
	Shader& shader2 = *s2;

	shader.enable();
	shader2.enable();

	shader.setUniform2float("light_pos", vec2(4.0f, 1.5f));
	shader2.setUniform2float("light_pos", vec2(4.0f, 1.5f));

	TileLayer layer(&shader);

#if TEST_50K_SPRITES
	for (float y = -9.0f; y < 9.0f; y += 0.1)
	{
		for (float x = -16.0f; x < 16.0f; x += 0.1)
		{
			layer.add(new Sprite(x, y, 0.09f, 0.09f, maths::vec4(rand() % 1000 / 1000.0f, 0, 1, 1)));
		}
	}

#else

	Group* group = new Group(mat4::translation(math::vec3(-15.0f, 5.0f, 0.0f)));
	group->add(new Sprite(0, 0, 6, 3, math::vec4(1, 1, 1, 1)));

	Group* button = new Group(mat4::translation(vec3(0.5f, 0.5f, 0.0f)));
	button->add(new Sprite(0, 0, 5.0f, 2.0f, math::vec4(1, 0, 1, 1)));
	button->add(new Sprite(0.5f, 0.5f, 3.0f, 1.0f, math::vec4(0.2f, 0.3f, 0.8f, 1)));
	group->add(button);

	layer.add(group);

#endif

	TileLayer layer2(&shader2);

	layer2.add(new Sprite(-2, -2, 4, 4, math::vec4(1, 0, 1, 1)));
	Timer time;
	float timer = 0;
	unsigned int frames = 0;

	while (!window.closed())
	{
		window.clear();
		double x, y;
		window.getMousePosition(x, y);
		shader.enable();
		shader.setUniform2float("light_pos", vec2((float)(x * 32.0f / 960.0f - 16.0f), (float)(9.0f - y * 18.0f / 540.0f)));
		//shader.setUniform2float("light_pos", vec2((float)(x * 32.0f / 960.0f - 16.0f), (float)(9.0f - y * 18.0f / 540.0f)));
		//shader.setUniform2float("light_pos", vec2(-8, -3));
		shader2.enable();
		layer.render();
		layer2.render();
		window.update();

		frames++;
		if (time.elapsed() - timer > 1.0f)
		{
			timer += 1.0f;
			printf("%d fps\n", frames);
			frames = 0;
		}
	}
	
	return 0;
}












/*
int main()
{
	using namespace churn;
	using namespace graphics;
	using namespace math;

	Window window("Churn", 960, 540);
	// glClearColor(1.0f, 1.0f, 1.0f, 1.0f);

	mat4 ortho = mat4::orthographic(0.0f, 16.0f, 0.0f, 9.0f, -1.0f, 1.0f);

  Shader* s = new Shader("../src/shaders/basic.vert", "../src/shaders/basic.frag");
  Shader* s2 = new Shader("../src/shaders/basic.vert", "../src/shaders/basic.frag");

	Shader& shader = *s;
	Shader& shader2 = *s2;
	shader.enable();
	shader2.enable();
	shader.setUniform2float("light_pos", vec2(4.0f, 1.5f));
	shader2.setUniform2float("light_pos", vec2(4.0f, 1.5f));

	TileLayer layer(&shader);

#if TEST_50K_SPRITES
	for (float y = -9.0f; y < 9.0f; y += 0.1)
	{
		for (float x = -16.0f; x < 16.0f; x += 0.1)
		{
			layer.add(new Sprite(x, y, 0.09f, 0.09f, maths::vec4(rand() % 1000 / 1000.0f, 0, 1, 1)));
		}
	}
#else

  Group* group = new Group(mat4::translation(math::vec3(-15.0f, 5.0f, 0.0f)));
	group->add(new Sprite(0, 0, 6, 3, math::vec4(1, 1, 1, 1)));

	Group* button = new Group(mat4::translation(vec3(0.5f, 0.5f, 0.0f)));
	button->add(new Sprite(0, 0, 5.0f, 2.0f, math::vec4(1, 0, 1, 1)));
	button->add(new Sprite(0.5f, 0.5f, 3.0f, 1.0f, math::vec4(0.2f, 0.3f, 0.8f, 1)));
	group->add(button);

	layer.add(group);


#endif

	TileLayer layer2(&shader2);
	layer2.add(new Sprite(-2, -2, 4, 4, math::vec4(1, 0, 1, 1)));

	Timer time;
	float timer = 0;
	unsigned int frames = 0;

	while (!window.closed())
	{
		window.clear();
		double x, y;
		window.getMousePosition(x, y);
		shader.enable();
		shader.setUniform2float("light_pos", vec2((float)(x * 32.0f / 960.0f - 16.0f), (float)(9.0f - y * 18.0f / 540.0f)));
		//shader.setUniform2f("light_pos", vec2((float)(x * 32.0f / 960.0f - 16.0f), (float)(9.0f - y * 18.0f / 540.0f)));
		//shader.setUniform2f("light_pos", vec2(-8, -3));
		shader2.enable();

		layer.render();
	//	layer2.render();

		window.update();
		frames++;
		if (time.elapsed() - timer > 1.0f)
		{
			timer += 1.0f;
			printf("%d fps\n", frames);
			frames = 0;
		}
	}
	
	return 0;
}

*/
