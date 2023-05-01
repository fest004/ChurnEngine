#include "indexbuffer.hpp"

namespace churn {
namespace graphics {

IndexBuffer::IndexBuffer(GLushort *data, GLsizei count) : m_Count(count) {

  glGenBuffers(1, &m_bufferID);
  glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, m_bufferID);
  glBufferData(GL_ELEMENT_ARRAY_BUFFER, count * sizeof(GLushort), data,
               GL_STATIC_DRAW);
  glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);
}

void IndexBuffer::bind() const {
  glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, m_bufferID);
}

void IndexBuffer::unbind() const { glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0); }

} // namespace graphics
} // namespace churn
