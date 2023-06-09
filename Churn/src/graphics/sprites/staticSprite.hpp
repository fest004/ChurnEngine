#pragma once

#include "../rendering/renderable2D.h"
namespace churn {
namespace graphics {

class StaticSprite : public Renderable2D {
public:
  // Methods
  StaticSprite(float x, float y, float width, float height, const math::vec4 &color, Shader &shader);

  ~StaticSprite();

  inline const VertexArray *getVAO() const { return m_VertexArray; }
  inline const IndexBuffer *getIBO() const { return m_IndexBuffer; }

  inline Shader &getShader() const { return m_Shader; }

private:
  //Variables
  VertexArray *m_VertexArray;
  IndexBuffer *m_IndexBuffer;
  Shader &m_Shader;
};
} // namespace graphics
} // namespace churn
