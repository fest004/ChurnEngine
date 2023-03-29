#pragma once

#include <glad/glad.h>

#include <GLFW/glfw3.h>
#include <iostream>

namespace churn {
namespace graphics {

class Window {
public:
  // Methods
  Window(const char *title, int w, int h);
  ~Window();

  const void update();
  const void clear();
  const bool closed();

  inline int getWidth() const { return m_Width; }
  inline int getHeight() const { return m_Height; }

private:
  // Methods;
  bool init();
  // static void windowResize(GLFWwindow *window, int width, int height);

private:
  // Variables
  const char *m_Title;
  int m_Width;
  int m_Height;
  GLFWwindow *m_Window;
  bool m_Closed;
};

} // namespace graphics
} // namespace churn
