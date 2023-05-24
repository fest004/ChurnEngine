#include "vertexarray.hpp"

namespace churn {
namespace graphics {

VertexArray::VertexArray() 
{ 
  // Generates glVertexArray and gives our private m_ArrayId an ID
  glGenVertexArrays(1, &m_ArrayID); 
}

VertexArray::~VertexArray() {
  for (int i = 0; i < m_Buffers.size(); i++) {
    delete m_Buffers[i];
  }

  glDeleteVertexArrays(1, &m_ArrayID);
}

void VertexArray::addBuffer(Buffer *buffer, GLuint index) {
  //Binds the Vertexarray itself and then the buffer
  bind();
  buffer->bind();


  glEnableVertexAttribArray(index);
  glVertexAttribPointer(index, buffer->getComponentCount(), GL_FLOAT, GL_FALSE, 0, 0); //Tells gl what kinda data it is given
                                                        //Datatype, normalise, stride, offset


  buffer->unbind();
  unbind();
}
void VertexArray::bind() const { glBindVertexArray(m_ArrayID); }
void VertexArray::unbind() const { glBindVertexArray(0); }

} // namespace graphics
} // namespace churn
