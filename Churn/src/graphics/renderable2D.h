#pragma once

#include "buffers/buffer.hpp"
#include "buffers/indexbuffer.hpp"
#include "buffers/vertexarray.hpp"

#include "../math/math.hpp"
#include "shader.h"

namespace churn {
namespace graphics {

class Renderable2D {

public:
  // Methods
  Renderable2D(math::vec3 position, math::vec2 size, math::vec4 color,
               Shader &shader)
      : m_Position(position), m_Size(size), m_Color(color), m_Shader(shader) {
    m_VertexArray = new VertexArray();

    GLfloat vertices[] = {0,      0,      0, 0,      size.y, 0,
                          size.x, size.y, 0, size.y, 0,      0};

    GLfloat colors[] = {color.x, color.y, color.z, color.w, color.x, color.y,
                        color.z, color.w, color.x, color.y, color.z, color.w,
                        color.x, color.y, color.z, color.w};

    m_VertexArray->addBuffer(new Buffer(vertices, 4 * 3, 3), 0);
    m_VertexArray->addBuffer(new Buffer(colors, 4 * 4, 4), 1);

    GLushort indices[] = {0, 1, 2, 2, 3, 0};
    m_IndexBuffer = new IndexBuffer(indices, 6);
  }

  virtual ~Renderable2D() {
    delete m_VertexArray;
    delete m_IndexBuffer;
  }

public:
  // Methods

  inline const VertexArray *getVAO() const { return m_VertexArray; }
  inline const IndexBuffer *getIBO() const { return m_IndexBuffer; }

  inline Shader &getShader() const { return m_Shader; }

  inline const math::vec3 &getPosition() const { return m_Position; }
  inline const math::vec2 &getSize() const { return m_Size; }
  inline const math::vec4 &getColor() const {
    return m_Color;
    ;
  }

protected:
  // Variables
  math::vec3 m_Position;
  math::vec2 m_Size;
  math::vec4 m_Color;

  VertexArray *m_VertexArray;
  // Buffer *m_VertexBuffer;
  // Buffer *m_ColorBuffer;
  IndexBuffer *m_IndexBuffer;

  Shader &m_Shader;
};
} // namespace graphics
} // namespace churn
