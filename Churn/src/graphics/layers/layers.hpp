#pragma once


#include "../rendering/renderer2D.hpp"
#include "../rendering/renderable2D.h"

namespace churn {
namespace graphics {

class Layer {

public:
  // Methods
  virtual ~Layer();
  virtual void add(Renderable2D* renderable);
  virtual void render();
protected:
  //Methods
  Layer(Renderer2D *renderer, Shader *shader, math::mat4 projectionMatrix);

protected:
  //Variables
  Renderer2D* m_Renderer;
  std::vector<Renderable2D*> m_Renderables;
  Shader* m_Shader;
  math::mat4 m_ProjectionMatrix;

};

} // namespace graphics
} // namespace churn
