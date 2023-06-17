#include "label.hpp"
#include "rendering/renderable2D.h"

namespace churn {
namespace graphics {

Label::Label(std::string text, float x, float y, math::vec4 color)
: Renderable2D(), m_Text(text)
{
  m_Position = math::vec3(x, y, 0);
  m_Color = color;

}

void Label::submit(Renderer2D* renderer) const 
{
renderer->drawString(m_Text, m_Position.x, m_Position.y, m_Color);

}




} // namespace graphics
} //namespace churn
