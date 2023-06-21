#include "layers.hpp"

namespace churn {
namespace graphics {


//Adds possibility for adding layers, eg. photoshop layer with background and foreground

Layer::Layer(Renderer2D* renderer, Shader* shader, math::mat4 projectionMatrix)
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
		for (int i = 0; i < m_Renderables.size(); i++)
			delete m_Renderables[i];
	}


	//Adds a renderable to stream of renderables
	void Layer::add(Renderable2D* renderable)
	{
		m_Renderables.push_back(renderable);
	}


	void Layer::render()
	{
		m_Shader->enable();
		m_Renderer->begin();

		for (const Renderable2D* renderable : m_Renderables)
			renderable->submit(m_Renderer);
		
		m_Renderer->drawString("H", math::vec3(0, 0, 0), math::vec4(0, 0, 0, 0));


		m_Renderer->end();
		m_Renderer->flush();
	}

} // namespace graphics
} // namespace churn
