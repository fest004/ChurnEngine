#pragma once

#include "../rendering/renderable2D.h"

namespace churn {
namespace graphics {

class Sprite : public Renderable2D {
public:
  Sprite(float x, float y, float width, float height, const math::vec4 &color);


  Sprite(float x, float y, float width, float height, Texture* texture);
};

} // namespace graphics
} // namespace churn
