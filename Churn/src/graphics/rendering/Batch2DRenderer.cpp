#include "Batch2DRenderer.hpp"

namespace churn {
namespace graphics {


BatchRenderer2D::BatchRenderer2D()
	{
		init();
	}

	BatchRenderer2D::~BatchRenderer2D()
	{
		delete m_IBO;
		glDeleteBuffers(1, &m_VBO);
	}

	void BatchRenderer2D::init()
	{
		glGenVertexArrays(1, &m_VAO);
		glGenBuffers(1, &m_VBO);

		glBindVertexArray(m_VAO);
		glBindBuffer(GL_ARRAY_BUFFER, m_VBO);
		glBufferData(GL_ARRAY_BUFFER, RENDERER_BUFFER_SIZE, NULL, GL_DYNAMIC_DRAW);

		glEnableVertexAttribArray(SHADER_VERTEX_INDEX);
		glEnableVertexAttribArray(SHADER_UV_INDEX);
		glEnableVertexAttribArray(SHADER_TID_INDEX);
		glEnableVertexAttribArray(SHADER_COLOR_INDEX);

		glVertexAttribPointer(SHADER_VERTEX_INDEX, 3, GL_FLOAT, GL_FALSE, RENDERER_VERTEX_SIZE, (const GLvoid*)0);
		glVertexAttribPointer(SHADER_UV_INDEX, 2, GL_FLOAT, GL_FALSE, RENDERER_VERTEX_SIZE, (const GLvoid*)(offsetof(VertexData, VertexData::uv)));
		glVertexAttribPointer(SHADER_TID_INDEX, 1, GL_FLOAT, GL_FALSE, RENDERER_VERTEX_SIZE, (const GLvoid*)(offsetof(VertexData, VertexData::textureID)));
		glVertexAttribPointer(SHADER_COLOR_INDEX, 4, GL_UNSIGNED_BYTE, GL_TRUE, RENDERER_VERTEX_SIZE, (const GLvoid*)(offsetof(VertexData, VertexData::color)));

		glBindBuffer(GL_ARRAY_BUFFER, 0);

		GLuint* indices = new GLuint[RENDERER_INDICES_SIZE];

		int offset = 0;
		for (int i = 0; i < RENDERER_INDICES_SIZE; i += 6)
		{
			indices[  i  ] = offset + 0;
			indices[i + 1] = offset + 1;
			indices[i + 2] = offset + 2;

			indices[i + 3] = offset + 2;
			indices[i + 4] = offset + 3;
			indices[i + 5] = offset + 0;

			offset += 4;
		}

		m_IBO = new IndexBuffer(indices, RENDERER_INDICES_SIZE);

		glBindVertexArray(0);
	}

	void BatchRenderer2D::begin()
	{
		glBindBuffer(GL_ARRAY_BUFFER, m_VBO);
		m_Buffer = (VertexData*)glMapBuffer(GL_ARRAY_BUFFER, GL_WRITE_ONLY);
	}

		// Submit renderable (sprite, texture... )
	void BatchRenderer2D::submit(const Renderable2D* renderable)
	{
		const math::vec3& position = renderable->getPosition();
		const math::vec2& size = renderable->getSize();
		const math::vec4& color = renderable->getColor();
		const std::vector<math::vec2>& uv = renderable->getUV();
		const GLuint textureID = renderable->getTextureID();

		unsigned c = 0;

		// If there are textures to render render them
		float textureSlot = 0.0f;
		if (textureID > 0) {
			float textureSlot = 0.0f;
			bool found = false;

			for (int i = 0; m_TextureSlots.size(); i++) {
				if (m_TextureSlots[i] == textureID) {
					textureSlot = (float)i;
					found = true;
					break;
				}
			}

			if (!found) {

				if (m_TextureSlots.size() >= 32)
					end();
				flush();
				begin();
				{
					m_TextureSlots.push_back(textureID);
					textureSlot = (float)m_TextureSlots.size() - 1;

				}
			}


		} else {
			// Else enable possibility to render filled shapes

		int r = color.x * 255.0f;
		int g = color.y * 255.0f;
		int b = color.z * 255.0f;
		int a = color.w * 255.0f;

		unsigned int c = a << 24 | b << 16 | g << 8 | r;
		}

		m_Buffer->vertex = *m_TransformationBack * position;
		m_Buffer->uv = uv[0];
		m_Buffer->textureID= textureSlot;
		m_Buffer->color = c;
		m_Buffer++;

		m_Buffer->vertex = *m_TransformationBack * math::vec3(position.x, position.y + size.y, position.z);
		m_Buffer->uv = uv[1];
		m_Buffer->textureID= textureSlot;
		m_Buffer->color = c;
		m_Buffer++;

		m_Buffer->vertex = *m_TransformationBack * math::vec3(position.x + size.x, position.y + size.y, position.z);
		m_Buffer->uv = uv[2];
		m_Buffer->textureID= textureSlot;
		m_Buffer->color = c;
		m_Buffer++;

		m_Buffer->vertex = *m_TransformationBack * math::vec3(position.x + size.x, position.y, position.z);
		m_Buffer->uv = uv[3];
		m_Buffer->textureID= textureSlot;
		m_Buffer->color = c;
		m_Buffer++;

		m_IndexCount += 6;
	}

	void BatchRenderer2D::end()
	{
		glUnmapBuffer(GL_ARRAY_BUFFER);
		glBindBuffer(GL_ARRAY_BUFFER, 0);
	}

	void BatchRenderer2D::flush()
	{
		for (int i = 0; i < m_TextureSlots.size(); i++) {
			glActiveTexture(GL_TEXTURE0 + i);
			glBindTexture(GL_TEXTURE_2D, m_TextureSlots[i]);

		}


		glBindVertexArray(m_VAO);
		m_IBO->bind();

		glDrawElements(GL_TRIANGLES, m_IndexCount, GL_UNSIGNED_INT, NULL);

		m_IBO->unbind();
		glBindVertexArray(0);

		m_IndexCount = 0;
	}


} // namespace graphics
} // namespace churn
