#include "simple2Drenderer.hpp"

namespace churn {
namespace graphics {

void Simple2Drenderer::submit(const Renderable2D *renderable) {
  m_RenderQueue.push_back(renderable);
}

void Simple2Drenderer::flush() {
  while (!m_RenderQueue.empty()) {
    const Renderable2D *renderable = m_RenderQueue.front();
    renderable->getVAO()->bind();
    renderable->getIBO()->bind();

    renderable->getShader().setUniformMat4(
        "ml_matrix", math::mat4::translation(renderable->getPosition()));
    glDrawElements(GL_TRIANGLES, renderable->getIBO()->getCount(),
                   GL_UNSIGNED_SHORT, 0);

    renderable->getIBO()->unbind();
    renderable->getVAO()->unbind();

    m_RenderQueue.pop_front();
  }
}

} // namespace graphics
} // namespace churn
