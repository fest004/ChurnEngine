#pragma once

#include <cstddef>
#include "renderable2D.h"
#include "renderer2D.hpp"
#include "../buffers/indexbuffer.hpp"

#include "../../../libs/freetype-gl/freetype-gl.h"
#include "../../../libs/glfreetype/include/glfreetype/TextRenderer.hpp"



namespace churn {
namespace graphics {

#define RENDERER_MAX_SPRITES 150000 
#define RENDERER_VERTEX_SIZE sizeof(VertexData)
#define RENDERER_SPRITE_SIZE RENDERER_VERTEX_SIZE * 4
#define RENDERER_BUFFER_SIZE RENDERER_SPRITE_SIZE *RENDERER_MAX_SPRITES
#define RENDERER_INDICES_SIZE RENDERER_MAX_SPRITES * 6

#define SHADER_VERTEX_INDEX 0
#define SHADER_UV_INDEX 1
#define SHADER_TID_INDEX 2 //TextureID
#define SHADER_COLOR_INDEX 3

class BatchRenderer2D : public Renderer2D {
public:
  // Methods
  void begin() override;
  void submit(const Renderable2D *renderable) override;
  void flush() override;
  void end() override;
	void drawString(const std::string& text, const math::vec3& position, const math::vec4& color) override;
  BatchRenderer2D();
  ~BatchRenderer2D();

private:
  // Variables
  GLuint m_VAO;
  IndexBuffer *m_IBO;
  GLsizei m_IndexCount;
  GLuint m_VBO;
  VertexData *m_Buffer;

  std::vector<GLuint> m_TextureSlots;

  ftgl::texture_atlas_t* m_FTTexAtlas;
  ftgl::texture_font_t* m_FTFont;

  glfreetype::font_data m_Font;

  void init();
};

} // namespace graphics
} // namespace churn
