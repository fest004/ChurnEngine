#define GLFW_INCLUDE_NONE
#include <ft2build.h>
#include FT_FREETYPE_H


#include <FreeImage.h>

#include <glad/glad.h>

#include <GLFW/glfw3.h>

#include "utils/textload.cpp"
#include "utils/textload.h"



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

#include "graphics/label.cpp"
#include "graphics/label.hpp"


#include "graphics/layers/layers.cpp"
#include "graphics/layers/layers.hpp"

#include "graphics/layers/tilelayer.cpp"
#include "graphics/layers/tilelayer.hpp"

#include "graphics/layers/groups/group.cpp"
#include "graphics/layers/groups/group.hpp"


#include "graphics/sprites/texture.cpp"
#include "graphics/sprites/texture.h"

#include "utils/timer.hpp"


int main()
{
	using namespace churn;
	using namespace graphics;
	using namespace math;


	Window window("churn", 960, 540);
	// glClearColor(0.5f, 1.0f, 0.6f, 0.3f);
	



mat4 ortho = mat4::orthographic(0.0f, 16.0f, 0.0f, 9.0f, -1.0f, 1.0f);

	Shader* s = new Shader("../src/shaders/basic.vert", "../src/shaders/basic.frag");
	Shader& shader = *s;
	shader.enable();
	shader.setUniform2f("light_pos", vec2(4.0f, 1.5f));

	TileLayer layer(&shader);

	utils::TextLoader tx;

	tx.RenderText(*s, "Test", 20, 20, 1, math::vec3(1, 1, 1));


	Texture* textures[]  = 
	{
		new Texture("imgs/ta.png"),
		new Texture("imgs/tb.png"),
		new Texture("imgs/tc.png")
	};

	for (float y = -9.0f; y < 9.0f; y++)
	{
		for (float x = -16.0f; x < 16.0f; x++)
		{
//			layer.add(new Sprite(x, y, 0.9f, 0.9f, math::vec4(rand() % 1000 / 1000.0f, 0, 1, 1)));
			layer.add(new Sprite(x, y, 0.9f, 0.9f, textures[rand() % 3]));
		}
	}

	Group* g = new Group(math::mat4::translation(math::vec3(-15.8f, 7.0f, 0.0f)));
	Label* fps = new Label("", 0.4f, 0.4f, math::vec4(1, 1, 1, 1));
	g->add(new Sprite(0, 0, 5, 1.5f, math::vec4(0.3f, 0.3f, 0.3f, 0.9f)));
	g->add(fps);

	layer.add(g);

	


	GLint texIDs[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

	shader.enable();
	shader.setUniform1iv("textures", texIDs, 10);
	shader.setUniformMat4("pr_matrix", math::mat4::orthographic(-16.0f, 16.0f, -9.0f, 9.0f, -1.0f, 1.0f));

	Timer time;
	float timer = 0;
	unsigned int frames = 0;
	while (!window.closed())
	{
		window.clear();
    double x, y;
		window.getMousePosition(x, y);
		shader.setUniform2f("light_pos", vec2((float)(x * 32.0f / 960.0f - 16.0f), (float)(9.0f - y * 18.0f / 540.0f)));
		layer.render();


		window.update();
		frames++;
		if (time.elapsed() - timer > 1.0f)
		{
			timer += 1.0f;
			fps->m_Text = std::to_string(frames) + "fps";
			printf("%d fps\n", frames);
			frames = 0;
		}
	}
	
	for (auto texture : textures)
		delete texture;
	return 0;


}
