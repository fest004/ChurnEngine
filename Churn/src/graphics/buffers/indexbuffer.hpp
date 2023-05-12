#pragma once

#include <glad/glad.h>

namespace churn {
namespace graphics {

class IndexBuffer {
public:
  // Methods
  IndexBuffer(GLushort *data, GLsizei count);
  IndexBuffer(GLuint *data, GLsizei count);
  ~IndexBuffer();

  void bind() const;
  void unbind() const;

  inline GLuint getCount() const { return m_Count; }

private:
  // Variables
  GLuint m_bufferID;
  GLuint m_Count;
};

} // namespace graphics
} // namespace churn
