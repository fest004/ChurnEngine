#include "indexbuffer.hpp"

namespace churn {
namespace graphics {

IndexBuffer::IndexBuffer(GLushort *data, GLsizei count) : m_Count(count) {


  // Generates buffer, applies buffer id and then binds buffer
  glGenBuffers(1, &m_bufferID);
  // Allocates and inits buffer data
  glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, m_bufferID);
  glBufferData(GL_ELEMENT_ARRAY_BUFFER, count * sizeof(GLushort), data, GL_STATIC_DRAW);
  //Unbinds buffer with '0'
  glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);
}

IndexBuffer::IndexBuffer(GLuint *data, GLsizei count) : m_Count(count) {

  //Same constructor just takes int GLuint over GLushort
  glGenBuffers(1, &m_bufferID);
  glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, m_bufferID);
  glBufferData(GL_ELEMENT_ARRAY_BUFFER, count * sizeof(GLushort), data, GL_STATIC_DRAW);
  glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);
}

IndexBuffer::~IndexBuffer() { glDeleteBuffers(1, &m_bufferID); }

void IndexBuffer::bind() const {
  glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, m_bufferID);
}

void IndexBuffer::unbind() const { glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0); }

} // namespace graphics
} // namespace churn
