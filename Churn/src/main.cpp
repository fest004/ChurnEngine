
#include <glad/glad.h>

#include <GLFW/glfw3.h>
#include <iostream>

#include "graphics/window.cpp"
#include "math/math.hpp"

int main() {
  using namespace churn;
  using namespace graphics;
  using namespace math;

  Window window("Churn", 800, 600);
  glClearColor(0.2f, 0.3f, 0.8f, 1.0f);

  Vec2 vector(1.0f, 2.0f);

  // Game loop
  while (!window.closed()) {

    std::cout << vector << std::endl;

    window.clear();

    // Everything between window.clear() and window.update() is testing features
    glBegin(GL_TRIANGLES);
    glVertex2f(-0.5f, -0.5f);
    glVertex2f(0.0f, 0.5f);
    glVertex2f(0.5f, -0.5f);
    glEnd();
    window.update();
  }

  return 0;
}
