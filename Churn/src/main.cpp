#include <FreeImage.h>

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


#include "graphics/sprites/texture.cpp"
#include "graphics/sprites/texture.h"

#include "utils/timer.hpp"




#define TEST_FREEIMAGE 0

#if !TEST_FREEIMAGE 

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
			printf("%d fps\n", frames);
			frames = 0;
		}
	}
	
	for (auto texture : textures)
		delete texture;
	return 0;


}
#else


int main()
{
	//PATH IS RELATIVE TO BUILD DESTINATION NOT SOURCE DESTINATION
const char* filename = "test.png";
FREE_IMAGE_FORMAT fif = FIF_UNKNOWN;
FIBITMAP* dib(0);
BYTE* bits(0);
unsigned int width(0), height(0);
GLuint gl_texID;

// Check the file signature and deduce its format
fif = FreeImage_GetFileType(filename, 0);

// If still unknown, try to guess the file format from the file extension
if (fif == FIF_UNKNOWN)
    fif = FreeImage_GetFIFFromFilename(filename);

// If still unknown, return failure
if (fif == FIF_UNKNOWN)
    return false;

// Check that the plugin has reading capabilities and load the file
if (FreeImage_FIFSupportsReading(fif))
    dib = FreeImage_Load(fif, filename);

// If the image failed to load, return failure
if (!dib)
    return false;

// Retrieve the image data
bits = FreeImage_GetBits(dib);
// Get the image width and height
width = FreeImage_GetWidth(dib);
height = FreeImage_GetHeight(dib);

// If any of the above failed (bits, width, height), return failure
if ((bits == 0) || (width == 0) || (height == 0))
    return false;

// Output the image width and height
std::cout << width << ", " << height << std::endl;


	// int width, height, channels;
	// unsigned char* imageData = stbi_load("test.png", &width, &height, &channels, STBI_rgb_alpha);
	// if (imageData == nullptr) {
	// 	std::cout << "Failed" << stbi_failure_reason() << std::endl;
	// }
	//
	// std::cout << width << ", " << height << std::endl;
	//
 //  return 0;
}

#endif
