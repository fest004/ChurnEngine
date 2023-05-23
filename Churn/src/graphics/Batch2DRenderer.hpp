#pragma once

#include <cstddef>
#include "buffers/indexbuffer.hpp"
#include "renderer2D.hpp"

namespace churn {
namespace graphics {

#define RENDERER_MAX_SPRITES 60000
#define RENDERER_VERTEX_SIZE sizeof(VertexData)
#define RENDERER_SPRITE_SIZE RENDERER_VERTEX_SIZE * 4
#define RENDERER_BUFFER_SIZE RENDERER_SPRITE_SIZE *RENDERER_MAX_SPRITES
#define RENDERER_INDICES_SIZE RENDERER_MAX_SPRITES * 6

#define SHADER_VERTEX_INDEX 0
#define SHADER_COLOR_INDEX 1

class BatchRenderer2D : public Renderer2D {
public:
  // Methods
  void begin();
  void submit(const Renderable2D *renderable) override;
  void flush() override;
  void end();
  BatchRenderer2D();
  ~BatchRenderer2D();

private:
  // Variables
  GLuint m_VAO;
  IndexBuffer *m_IBO;
  GLsizei m_IndexCount;
  GLuint m_VBO;
  VertexData *m_Buffer;

  void init();
};

} // namespace graphics
} // namespace churn
