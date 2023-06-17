#pragma once

#include "rendering/renderable2D.h"

namespace churn {
namespace graphics {

class Label : public Renderable2D
{
  public:
    //Methods
    Label(std::string text, float x, float y, math::vec4 color);
    void submit(Renderer2D* renderer) const override;




  private:
    //Variables
    std::string m_Text;


  
};

} // namespace graphics
} // namespace churn
