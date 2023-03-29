#include "window.hpp"
#include <GLFW/glfw3.h>

namespace churn {
namespace graphics {

void windowResize(GLFWwindow *window, int width, int height);

Window::Window(const char *title, int width, int height) {
  m_Title = title;
  m_Width = width;
  m_Height = height;
  if (!init()) {
    glfwTerminate();
  }
}

Window::~Window() { glfwTerminate(); }

bool Window::init() {
  if (!glfwInit()) {
    std::cout << "Failed to initialize glfw!" << std::endl;
    return false;
  }
  m_Window = glfwCreateWindow(m_Width, m_Height, m_Title, NULL, NULL);
  if (!m_Window) {
    glfwTerminate();
    std::cout << "Failed to create GLFW window! " << std::endl;
    return false;
  }
  glfwMakeContextCurrent(m_Window);
  glfwSetWindowSizeCallback(m_Window, windowResize);

  if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress)) {
    std::cout << "Couldn't load openGL" << std::endl;
    glfwTerminate();
  }
  return true;
}

const bool Window::closed() { return glfwWindowShouldClose(m_Window) == 1; }

void const Window::update() {
  glfwPollEvents();
  glfwGetFramebufferSize(m_Window, &m_Width, &m_Height);
  glViewport(0, 0, m_Width, m_Height);
  glfwSwapBuffers(m_Window);
}

void const Window::clear() {
  glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
}

void windowResize(GLFWwindow *window, int width, int height) {

  glViewport(0, 0, width, height);
}

} // namespace graphics
} // namespace churn
