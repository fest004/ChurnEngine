#pragma once


#include "../buffers/buffer.hpp"
#include "../buffers/indexbuffer.hpp"
#include "../buffers/vertexarray.hpp"

#include "renderer2D.hpp"
#include "../sprites/texture.h"

#include "../../math/math.hpp"
#include "../../shaders/shader.h"


namespace churn {
namespace graphics {


// Create a renderable asset and attach all data needed to be able to render
struct VertexData
	{
		math::vec3 vertex;
		math::vec2 uv; // Texture coordinate
		// unsigned int textureID;
		float textureID;
		unsigned int color;
	};
	class Renderable2D
	{
	protected:
		// Shapes need position, size and color
		math::vec3 m_Position;
		math::vec2 m_Size;
		math::vec4 m_Color;
		std::vector<math::vec2> m_UV;
		Texture* m_Texture;
	protected:
		Renderable2D() : m_Texture(nullptr)
		{ 
			setUVDefaults();
		}
	public:
		// Instantiate renderable and add data
		Renderable2D(math::vec3 position, math::vec2 size, math::vec4 color)
			: m_Position(position), m_Size(size), m_Color(color), m_Texture(nullptr)
		{ 
			setUVDefaults();
		}

		virtual ~Renderable2D() {}

		virtual void submit(Renderer2D* renderer) const
		{
			renderer->submit(this);
		}

		inline const math::vec3& getPosition() const { return m_Position; }
		inline const math::vec2& getSize() const { return m_Size; }
		inline const math::vec4& getColor() const { return m_Color; }
		inline const std::vector<math::vec2>& getUV() const { return m_UV; }
		inline const GLuint getTID() const { return m_Texture ? m_Texture->getID() : 0; }


		inline const GLuint getTextureID() const { return m_Texture == nullptr ? 0 : m_Texture->getID(); }
	private:
		void setUVDefaults()
		{
			m_UV.push_back(math::vec2(0, 0));
			m_UV.push_back(math::vec2(0, 1));
			m_UV.push_back(math::vec2(1, 1));
			m_UV.push_back(math::vec2(1, 0));
		}
};

} // namespace graphics
} // namespace churn
