#pragma once

#include "../buffers/buffer.hpp"
#include "../buffers/indexbuffer.hpp"
#include "../buffers/vertexarray.hpp"

#include "../../math/math.hpp"
#include "../../shaders/shader.h"
#include "renderer2D.hpp"

namespace churn {
namespace graphics {

struct VertexData {
  math::vec3 vertex;
  // math::vec4 color;
  unsigned int color;
};

class Renderable2D {

public:
  // Methods
  Renderable2D(math::vec3 position, math::vec2 size, math::vec4 color)
      : m_Position(position), m_Size(size), m_Color(color) {}

  virtual ~Renderable2D() {}



  virtual void submit(Renderer2D* renderer) const
  {
    renderer->submit(this);
  }

public:
  // Methods
  inline const math::vec3 &getPosition() const { return m_Position; }
  inline const math::vec2 &getSize() const { return m_Size; }
  inline const math::vec4 &getColor() const {
    return m_Color;
    ;
  }

protected:
  //Methods
  Renderable2D() {}


protected:
  // Variables
  math::vec3 m_Position;
  math::vec2 m_Size;
  math::vec4 m_Color;
};
} // namespace graphics
} // namespace churn
