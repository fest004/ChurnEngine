#pragma once

// #include "../utils/fileutils.h"
#include <GLFW/glfw3.h>

namespace churn {
namespace graphics {

class Shader {
public:
  // Methods
  Shader(const char *vertPath, const char *fragPath);
  ~Shader();

  void enable() const;
  void disable() const;

private:
  // Methods
  GLuint load();

public:
  // Variables
private:
  // Variables
  GLuint m_ShaderID;
  const char *m_VertPath;
  const char *m_FragPath;
};

} // namespace graphics
} // namespace churn
