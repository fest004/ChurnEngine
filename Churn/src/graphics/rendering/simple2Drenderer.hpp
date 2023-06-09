#pragma once

#include <deque>

#include "renderable2D.h"
#include "renderer2D.hpp"
#include "../sprites/staticSprite.hpp"

namespace churn {
namespace graphics {

class Simple2Drenderer : public Renderer2D {
public:
  // Methods
  void submit(const Renderable2D *renderable) override;
  void flush() override;

private:
  // Variables
  std::deque<const StaticSprite *> m_RenderQueue;
};

} // namespace graphics
} // namespace churn
