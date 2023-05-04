#pragma once

#include <deque>

#include "renderable2D.h"
#include "renderer2D.hpp"

namespace churn {
namespace graphics {

class Simple2Drenderer : public Renderer2D {
public:
  // Methods
  void submit(const Renderable2D *renderable) override;
  void flush() override;

private:
  // Variables
  std::deque<const Renderable2D *> m_RenderQueue;
};

} // namespace graphics
} // namespace churn
