#pragma once

#include <vector>
#include "../../math/math.hpp"


namespace churn {
namespace graphics {


class Renderable2D;

	class Renderer2D
	{
	protected:
		//Methods
		Renderer2D()
		{
			m_TransformationStack.push_back(math::mat4::identity());
			m_TransformationBack = &m_TransformationStack.back();
		}


	public:
		//Methods
		
		void push(const math::mat4& matrix, bool force = false)
		{
			if (force)
				m_TransformationStack.push_back(matrix);
			else
				m_TransformationStack.push_back(m_TransformationStack.back() * matrix);

			m_TransformationBack = &m_TransformationStack.back();
		}


		void pop()
		{
			// TODO: Add to log!
			if (m_TransformationStack.size() > 1)
				m_TransformationStack.pop_back();
			m_TransformationBack = &m_TransformationStack.back();
		}
		virtual void begin() {}
		virtual void submit(const Renderable2D* renderable) = 0;
		virtual void end() {}
		virtual void flush() = 0;
		virtual void drawString(const std::string& text, const math::vec3& position, const math::vec4& color) {}

	protected:
		//Variables
		std::vector<math::mat4> m_TransformationStack;
		const math::mat4* m_TransformationBack;
	
};


} // namespace graphics
} // namespace churn
