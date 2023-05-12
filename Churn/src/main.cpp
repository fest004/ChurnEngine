#include <glad/glad.h>

#include <GLFW/glfw3.h>

#include "graphics/shader.cpp"
#include "graphics/shader.h"
#include "graphics/window.cpp"
#include "graphics/window.hpp"
#include "math/math.hpp"
#include <iostream>

#include "graphics/buffers/buffer.cpp"
#include "graphics/buffers/buffer.hpp"
#include "graphics/buffers/indexbuffer.cpp"
#include "graphics/buffers/indexbuffer.hpp"
#include "graphics/buffers/vertexarray.cpp"
#include "graphics/buffers/vertexarray.hpp"

#include "graphics/Batch2DRenderer.cpp"
#include "graphics/Batch2DRenderer.hpp"
#include "graphics/renderable2D.h"
#include "graphics/renderer2D.hpp"
#include "graphics/simple2Drenderer.cpp"
#include "graphics/simple2Drenderer.hpp"

#include "graphics/sprite.cpp"
#include "graphics/sprite.hpp"
#include "graphics/staticSprite.cpp"
#include "graphics/staticSprite.hpp"

#define BATCH_RENDERER 1

int main() {
  using namespace churn;
  using namespace graphics;
  using namespace math;

  // @ @-11, 6 + 15, 7 @ @ int main()
  Window window("Sparky!", 960, 540);
  // glClearColor(1.0f, 1.0f, 1.0f, 1.0f);

#if 0
	GLfloat vertices[] = 
	{
		0, 0, 0,
		8, 0, 0,
		0, 3, 0,
		0, 3, 0,
		8, 3, 0,
		8, 0, 0
	};
	GLuint vbo;
	glGenBuffers(1, &vbo);
	glBindBuffer(GL_ARRAY_BUFFER, vbo);
	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);
	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 0, 0);
	glEnableVertexAttribArray(0);
#else
  GLfloat vertices[] = {0, 0, 0, 0, 3, 0, 8, 3, 0, 8, 0, 0};

  GLushort indices[] = {0, 1, 2, 2, 3, 0};

  GLfloat colorsA[] = {1, 0, 1, 1, 1, 0, 1, 1, 1,
                       0, 1, 1, 1, 0, 1, 1

  };

  GLfloat colorsB[] = {0.2f, 0.3f, 0.8f, 1,    0.2f, 0.3f, 0.8f, 1, 0.2f,
                       0.3f, 0.8f, 1,    0.2f, 0.3f, 0.8f, 1

  };

  VertexArray sprite1, sprite2;
  IndexBuffer ibo(indices, 6);

  sprite1.addBuffer(new Buffer(vertices, 4 * 3, 3), 0);
  sprite1.addBuffer(new Buffer(colorsA, 4 * 4, 4), 1);

  sprite2.addBuffer(new Buffer(vertices, 4 * 3, 3), 0);
  sprite2.addBuffer(new Buffer(colorsB, 4 * 4, 4), 1);

#endif

  mat4 ortho = mat4::orthographic(0.0f, 16.0f, 0.0f, 9.0f, -1.0f, 1.0f);

  Shader shader("../src/shaders/basic.vert", "../src/shaders/basic.frag");
  shader.enable();
  shader.setUniformMat4("pr_matrix", ortho);
  // shader.setUniformMat4("ml_matrix", mat4::translation(vec3(4, 3, 0)));

#if BATCH_RENDERER
  Sprite sprite(5, 5, 4, 4, math::vec4(2, 4, 5, 1));
  Sprite sprite3(7, 1, 4, 4, math::vec4(8, 4, 0, 1));

  BatchRenderer2D renderer;
#else

  Simple2Drenderer renderer;
  StaticSprite sprite(5, 5, 4, 4, math::vec4(2, 4, 5, 1), shader);
  StaticSprite sprite3(7, 1, 4, 4, math::vec4(8, 4, 0, 1), shader);

#endif

  shader.setUniform2float("light_pos", vec2(4.0f, 1.5f));
  shader.setUniform4float("colour", vec4(0.2f, 0.3f, 0.8f, 0.5f));

  while (!window.closed()) {
    window.clear();
    double x, y;
    window.getMousePosition(x, y);
    shader.setUniform2float(
        "light_pos",
        vec2((float)(x * 16.0f / 960.0f), (float)(9.0f - y * 9.0f / 540.0f)));

#if BATCH_RENDERER
    renderer.begin();
#endif
    renderer.submit(&sprite);
    renderer.submit(&sprite3);

#if BATCH_RENDERER
    renderer.end();
#endif
    renderer.flush();

    window.update();
  }
}
