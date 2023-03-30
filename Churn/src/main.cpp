
#include <glad/glad.h>

#include <GLFW/glfw3.h>
#include <iostream>

#include "graphics/window.cpp"

int main() {
  using namespace churn;
  using namespace graphics;

  Window window("Churn", 800, 600);
  glClearColor(0.2f, 0.3f, 0.8f, 1.0f);

  // Game loop
  while (!window.closed()) {

    // std::cout << window.getWidth() << "," << window.getHeight() << std::endl;

    window.clear();

    // Everything between window.clear() and window.update() is testing features

    double x, y;
    window.getMousePosition(x, y);
    std::cout << x << ", " << y << std::endl;

    if (window.isKeyPressed(GLFW_KEY_A)) {
      std::cout << "A is getting pressed" << std::endl;
    }

    if (window.isMouseButtonPressed(GLFW_MOUSE_BUTTON_LEFT)) {
      std::cout << "MB1 is getting pressed" << std::endl;
    }
    glBegin(GL_TRIANGLES);
    glVertex2f(-0.5f, -0.5f);
    glVertex2f(0.0f, 0.5f);
    glVertex2f(0.5f, -0.5f);
    glEnd();
    window.update();
  }

  return 0;
}
