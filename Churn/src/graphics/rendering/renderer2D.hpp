#pragma once

#include <glad/glad.h>

#include "../../math/math.hpp"
#include "renderable2D.h"

namespace churn {
namespace graphics {

class Renderer2D {
public:
  virtual void begin() {}
  virtual void submit(const Renderable2D *renderable) = 0;
  virtual void end() {}
  virtual void flush() = 0;
};

} // namespace graphics
} // namespace churn
