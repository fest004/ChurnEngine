#pragma once

#include "mat4.cpp"
#include "mat4.hpp"
#include "vec2.cpp"
#include "vec2.hpp"
#include "vec3.cpp"
#include "vec3.hpp"
#include "vec4.cpp"
#include "vec4.hpp"
#include <cmath>

namespace churn {
namespace math {

inline float toRadians(float degrees) { return degrees * (M_PI / 180.0f); }
} // namespace math
} // namespace churn
