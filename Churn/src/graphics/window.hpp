#pragma once

#include <cstdint>
#include <glad/glad.h>

#include <GLFW/glfw3.h>
#include <iostream>

namespace churn {
namespace graphics {

#define MAX_KEYS 1024
#define MAX_MOUSEBUTTONS 32

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

  bool isKeyPressed(uint32_t keycode) const;
  bool isMouseButtonPressed(uint32_t mouseButton) const;

  // TODO Return Vec2 when Vec2 class is made
  void getMousePosition(double &x, double &y) const;

public:
  // Variables

private:
  // Methods;
  bool init();

  friend void key_callback(GLFWwindow *window, int key, int scancode,
                           int action, int mods);
  friend void mouse_button_callback(GLFWwindow *window, int button, int action,
                                    int mods);
  friend void cursor_position_callback(GLFWwindow *window, double xpos,
                                       double ypos);

private:
  // Variables
  const char *m_Title;
  int m_Width;
  int m_Height;
  GLFWwindow *m_Window;
  bool m_Closed;

  bool m_Keys[MAX_KEYS];
  bool m_MouseButtons[MAX_MOUSEBUTTONS];
  double m_MouseX;
  double m_MouseY;
};

} // namespace graphics
} // namespace churn
