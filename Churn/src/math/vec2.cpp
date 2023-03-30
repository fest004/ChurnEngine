#include "vec2.hpp"

namespace churn {
namespace math {

Vec2::Vec2() {
  x = 0.0f;
  y = 0.0f;
}

Vec2::Vec2(const float &x, const float &y) {
  this->x = x;
  this->y = y;
}

/*
 * Starting a vector -
 * Vec2 vector(10.0f, 20.0f);
 *
 * Vector math -
 * vector.add(vec2(5.0f, 30.0f));
 */
Vec2 &Vec2::Add(Vec2 &other) {
  x += other.x;
  y += other.y;
  return *this;
}

Vec2 &Vec2::Subtract(Vec2 &other) {
  x -= other.x;
  y -= other.x;
  return *this;
}

Vec2 &Vec2::Multiply(Vec2 &other) {
  x *= other.x;
  y *= other.y;
  return *this;
}
Vec2 &Vec2::Divide(Vec2 &other) {
  x /= other.x;
  y /= other.y;
  return *this;
}

// Operator overloading
Vec2 operator+(Vec2 left, Vec2 &right) { return left.Add(right); }
Vec2 operator-(Vec2 left, Vec2 &right) { return left.Subtract(right); }
Vec2 operator*(Vec2 left, Vec2 &right) { return left.Multiply(right); }
Vec2 operator/(Vec2 left, Vec2 &right) { return left.Divide(right); }

Vec2 &Vec2::operator+=(const Vec2 &other) {
  *this = *this + other;
  return *this;
}

Vec2 &Vec2::operator-=(const Vec2 &other) {
  *this = *this - other;
  return *this;
}

Vec2 &Vec2::operator*=(const Vec2 &other) {
  *this = *this * other;
  return *this;
}

Vec2 &Vec2::operator/=(const Vec2 &other) {
  *this = *this / other;
  return *this;
}

bool Vec2::operator==(const Vec2 &other) {
  return x == other.x && y == other.y;
}

bool Vec2::operator!=(const Vec2 &other) {
  return x != other.x || y != other.y;
}

// Output stream overloading to easily print vector in format:
// Vec2(x, y)
std::ostream &operator<<(std::ostream &stream, const Vec2 &vector) {
  stream << "Vec2(" << vector.x << ", " << vector.y << ")";
  return stream;
}

} // namespace math
} // namespace churn
