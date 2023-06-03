#pragma once

#include "../../rendering/renderable2D.h"

namespace churn {
namespace graphics {

  class Group : public Renderable2D
	{
	private:
		std::vector<Renderable2D*> m_Renderables;
		math::mat4 m_TransformationMatrix;
	public:
		Group(const math::mat4& transform);
		void add(Renderable2D* renderable);
		void submit(Renderer2D* renderer) const override;
	};

} // namespace graphics
} // namespace churn
