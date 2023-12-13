#pragma once

#include "rendering/renderable2D.h"

namespace churn {
namespace graphics {

class Label : public Renderable2D
{
public:
	Label(std::string text, float x, float y, math::vec4 color);
	void submit(Renderer2D* renderer) const override;
 

public:
  //Variables
	std::string m_Text;
	math::vec3& m_LabelPosition;
	float m_X, m_Y;

};

} // namespace graphics
} // namespace churn
