#include "layers.hpp"

namespace churn {
namespace graphics {



Layer::Layer(Renderer2D *renderer, Shader *shader, math::mat4 projectionMatrix)
: m_Renderer(renderer), m_Shader(shader), m_ProjectionMatrix(projectionMatrix)
{
  m_Shader->enable();
  m_Shader->setUniformMat4("pr_matrix", m_ProjectionMatrix);
  m_Shader->disable();

}

Layer::~Layer()
{
  delete m_Shader;
  delete m_Renderer;

  for (auto renderable : m_Renderables)
  {
    delete renderable;
  }

}

// Add renderable to layer to be drawn/rendered 
void Layer::add(Renderable2D *renderable) {
  m_Renderables.push_back(renderable);
}


  // Will eventually setup camera
void Layer::render()
{
  m_Shader->enable();

  m_Renderer->begin();

  // Submitting renderables
  for (const Renderable2D* renderable : m_Renderables)
  {
    m_Renderer->submit(renderable);
  }

  m_Renderer->end();
  m_Renderer->flush();

  // Deleting shader led to OpenGL Error 1282 and messed with mouse pos
  // m_Shader->disable();
}

} // namespace graphics
} // namespace churn
