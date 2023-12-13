#pragma once

#include <ft2build.h>
#include <map>
#include FT_FREETYPE_H
#include "../math/math.hpp"
#include <glad/glad.h>
#include "../shaders/shader.h"

namespace churn {
namespace utils {

struct Character {
  unsigned int TextureID; // ID handle of the glyph texture
  math::vec2 Size;        // Size of glyph
  math::vec2 Bearing;     // Offset from baseline to left/top of glyph
  unsigned int Advance;   // Horizontal offset to advance to next glyph
};

class TextLoader {
  public:
    //Methods
  TextLoader();
  void RenderText(graphics::Shader &shader, std::string text, float x, float y, float scale, math::vec3 color);
  


private:
  // Variables
  FT_Library m_FT;
  unsigned int VAO, VBO;
  std::map<GLchar, Character> m_Characters;
};

} // namespace utils
} // namespace churn
