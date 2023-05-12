#include "simple2Drenderer.hpp"
#include "staticSprite.hpp"

namespace churn {
namespace graphics {

void Simple2Drenderer::submit(const Renderable2D *renderable) {
  m_RenderQueue.push_back((StaticSprite *)renderable);
}

void Simple2Drenderer::flush() {
  while (!m_RenderQueue.empty()) {
    const StaticSprite *sprite = m_RenderQueue.front();
    sprite->getVAO()->bind();
    sprite->getIBO()->bind();

    sprite->getShader().setUniformMat4(
        "ml_matrix", math::mat4::translation(sprite->getPosition()));
    glDrawElements(GL_TRIANGLES, sprite->getIBO()->getCount(),
                   GL_UNSIGNED_SHORT, 0);

    sprite->getIBO()->unbind();
    sprite->getVAO()->unbind();

    m_RenderQueue.pop_front();
  }
}

} // namespace graphics
} // namespace churn
