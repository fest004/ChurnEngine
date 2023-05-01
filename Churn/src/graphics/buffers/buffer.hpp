#pragma once

#include <glad/glad.h>

namespace churn {
namespace graphics {

class Buffer {
public:
  // Methods
  Buffer(GLfloat *data, GLsizei count, GLuint componentCount);

  void bind() const;
  void unbind() const;

  inline GLuint getComponentCount() const { return m_ComponentCount; }

private:
  // Variables
  GLuint m_bufferID;
  GLuint m_ComponentCount;
};

} // namespace graphics
} // namespace churn
