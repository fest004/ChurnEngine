#include "window.hpp"
#include <cstdint>

namespace churn {
namespace graphics {

// Callback functions
//
// Functions that we do not want to directly check every frame, but let
// opengl just tell us when it happens
void window_resize(GLFWwindow *window, int width, int height);
void key_callback(GLFWwindow *window, int key, int scancode, int action,
                  int mods);
void mouse_button_callback(GLFWwindow *window, int button, int action,
                           int mods);
void cursor_position_callback(GLFWwindow *window, double xpos, double ypos);

Window::Window(const char *title, int width, int height) {
  m_Title = title;
  m_Width = width;
  m_Height = height;
  if (!init()) {
    glfwTerminate();
  }

  for (int i = 0; i < MAX_KEYS; i++) {
    m_Keys[i] = false;
  }

  for (int i = 0; i < MAX_MOUSEBUTTONS; i++) {
    m_MouseButtons[i] = false;
  }
}

Window::~Window() { glfwTerminate(); }

bool Window::init() {
  // Initialise glfw and opengl, functions return true if successful and opens
  // window If failed, the window closes and error is printed
  if (!glfwInit()) {
    std::cout << "Failed to initialize GLFW!" << std::endl;
    return false;
  }
  m_Window = glfwCreateWindow(m_Width, m_Height, m_Title, NULL, NULL);
  if (!m_Window) {
    glfwTerminate();
    std::cout << "Failed to create GLFW window! " << std::endl;
    return false;
  }
  glfwMakeContextCurrent(m_Window);
  glfwSetWindowUserPointer(m_Window, this);
  glfwSetWindowSizeCallback(m_Window, window_resize);
  glfwSetKeyCallback(m_Window, key_callback);
  glfwSetMouseButtonCallback(m_Window, mouse_button_callback);
  glfwSetCursorPosCallback(m_Window, cursor_position_callback);

  // Starting glad to access opengl methods
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

bool Window::isKeyPressed(uint32_t keycode) const {
  if (keycode >= MAX_KEYS)
    return false;

  return m_Keys[keycode];
}

bool Window::isMouseButtonPressed(uint32_t button) const {
  if (button >= MAX_MOUSEBUTTONS)
    return false;

  return m_MouseButtons[button];
}

void Window::getMousePosition(double &x, double &y) const {
  x = m_MouseX;
  y = m_MouseY;
}

void const Window::clear() {
  glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
}

void window_resize(GLFWwindow *window, int width, int height) {

  glViewport(0, 0, width, height);
}

void key_callback(GLFWwindow *window, int key, int scancode, int action,
                  int mods) {
  Window *win = (Window *)glfwGetWindowUserPointer(window);
  // If key is not released, it means that it is actively being pressed;
  win->m_Keys[key] = action != GLFW_RELEASE;
}

void mouse_button_callback(GLFWwindow *window, int button, int action,
                           int mods) {
  Window *win = (Window *)glfwGetWindowUserPointer(window);
  win->m_MouseButtons[button] = action != GLFW_RELEASE;
}

void cursor_position_callback(GLFWwindow *window, double xpos, double ypos) {
  Window *win = (Window *)glfwGetWindowUserPointer(window);
  win->m_MouseX = xpos;
  win->m_MouseY = ypos;
}

} // namespace graphics
} // namespace churn
