#pragma once

#include <iostream>

namespace churn {
namespace math {

class Vec2 {
public:
  // Methods
  Vec2();
  Vec2(const float &x, const float &y);

  Vec2 &Add(Vec2 &other);
  Vec2 &Subtract(Vec2 &other);
  Vec2 &Multiply(Vec2 &other);
  Vec2 &Divide(Vec2 &other);

  friend Vec2 operator+(Vec2 left, const Vec2 &right);
  friend Vec2 operator-(Vec2 left, const Vec2 &right);
  friend Vec2 operator*(Vec2 left, const Vec2 &right);
  friend Vec2 operator/(Vec2 left, const Vec2 &right);

  Vec2 &operator+=(const Vec2 &other);
  Vec2 &operator-=(const Vec2 &other);
  Vec2 &operator*=(const Vec2 &other);
  Vec2 &operator/=(const Vec2 &other);

  bool operator==(const Vec2 &other);

  bool operator!=(const Vec2 &other);

  friend std::ostream &operator<<(std::ostream &stream, const Vec2 &vector);

public:
  // Variables
  float x;
  float y;

private:
  // Methods

private:
  // Variables
};
} // namespace math
} // namespace churn
