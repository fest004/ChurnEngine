#include "buffer.hpp"

namespace churn {
namespace graphics {

Buffer::Buffer(GLfloat *data, GLsizei count, GLuint componentCount)
: m_ComponentCount(componentCount) 
{

  //Generates buffer ID and binds buffer
  glGenBuffers(1, &m_bufferID);
  glBindBuffer(GL_ARRAY_BUFFER, m_bufferID);
  //inits Buffer data storage and allocates it
  glBufferData(GL_ARRAY_BUFFER, count * sizeof(GLfloat), data, GL_STATIC_DRAW);
  // Finally unbinds buffer by calling it with '0'
  glBindBuffer(GL_ARRAY_BUFFER, 0);
}

Buffer::~Buffer() { glDeleteBuffers(1, &m_bufferID); }

void Buffer::bind() const { glBindBuffer(GL_ARRAY_BUFFER, m_bufferID); }

void Buffer::unbind() const { glBindBuffer(GL_ARRAY_BUFFER, 0); }

} // namespace graphics
} // namespace churn
