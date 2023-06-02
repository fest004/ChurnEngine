#pragma once

#include "../../rendering/renderable2D.h"

namespace churn {
namespace graphics {

class Group : public Renderable2D
{
  public:
    Group(const math::mat4 &transform);

    void submit(Renderer2D* renderer) const override;

    void add(Renderable2D* renderable);


  private:
    //Variables
    std::vector<Renderable2D*> m_Renderables;
    math::mat4 m_TransformationMatrix;
};


} // namespace graphics
} // namespace churn
