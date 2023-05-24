#pragma once

#include <glad/glad.h>
#include <vector>

#include "buffer.hpp"

namespace churn {
namespace graphics {

class VertexArray {
public:
  //Methods
  VertexArray();
  ~VertexArray();

  void addBuffer(Buffer *buffer, GLuint index);

  void bind() const;
  void unbind() const;

private:
  // Variables
  GLuint m_ArrayID;
  std::vector<Buffer *> m_Buffers;
};

} // namespace graphics
} // namespace churn
