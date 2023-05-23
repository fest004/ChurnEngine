#pragma once

// #include "../utils/fileutils.h"
#include <GLFW/glfw3.h>

#include "../math/math.hpp"

namespace churn {
namespace graphics {

class Shader {
public:
  // Methods
  Shader(const char *vertPath, const char *fragPath);
  ~Shader();

  void setUniform1float(const GLchar *name, float value);
  void setUniform2float(const GLchar *name, const math::vec2 &vector2);
  void setUniform3float(const GLchar *name, const math::vec3 &vector3);
  void setUniform4float(const GLchar *name, const math::vec4 &vector4);
  void setUniform1int(const GLchar *name, int value);
  void setUniformMat4(const GLchar *name, const math::mat4 &matrix);

  void enable() const;
  void disable() const;

private:
  // Methods
  GLuint load();
  GLint getUniformLocation(const GLchar *name);

public:
  // Variables
  // private:
  // Variables
  GLuint m_ShaderID;
  const char *m_VertPath;
  const char *m_FragPath;
};

} // namespace graphics
} // namespace churn
