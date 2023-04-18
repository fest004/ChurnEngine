
#include <glad/glad.h>

#include <GLFW/glfw3.h>

#include "graphics/shader.cpp"
#include "graphics/shader.h"
#include "graphics/window.cpp"
#include "graphics/window.hpp"
#include "math/math.hpp"
#include <iostream>

// #include "math/math.hpp"

int main() {
  using namespace churn;
  using namespace graphics;
  using namespace math;

  Window window("Churn", 800, 600);
  glClearColor(0.2f, 0.3f, 0.8f, 1.0f);

  GLfloat vertices[] = {-0.5f, -0.5f, 0.0f,  -0.5f, 0.5f, 0.0f, 0.5f,
                        0.5f,  0.0f,  0.5f,  0.5f,  0.0f, 0.5f, -0.5f,
                        0.0f,  -0.5f, -0.5f, 0.0f

  };

  GLuint vbo;
  glGenBuffers(1, &vbo);
  glBindBuffer(GL_ARRAY_BUFFER, vbo);
  glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);
  glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 0, 0);
  glBindBuffer(GL_ARRAY_BUFFER, vbo);
  glEnableVertexAttribArray(0);

  Shader shader("../src/shaders/basic.vert", "../src/shaders/basic.frag");
  shader.enable();

  // Game loop
  while (!window.closed()) {

    window.clear();
    glDrawArrays(GL_TRIANGLES, 0, 6);

    // Everything between window.clear() and window.update() is testing features
    window.update();
  }

  return 0;
}
