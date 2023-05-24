#include "staticSprite.hpp"

namespace churn {
namespace graphics {

// Simple staticsprite only takes position, size and color and renders it
StaticSprite::StaticSprite(float x, float y, float width, float height, const math::vec4 &color, Shader &shader)
: Renderable2D(math::vec3(x, y, 0), math::vec2(width, height), color), m_Shader(shader) {

//Creates new vertexArray to store vertex data about the sprite
  m_VertexArray = new VertexArray();

  // Stores data about the corners of the sprite, is a square btw
  GLfloat vertices[] = 
  {
    0,        0,       0, 
    0,     height,     0, 
    width, height,     0, 
    width,    0,       0
  };


  // Represents color of each vertex
  GLfloat colors[] = 
  {
    color.x, color.y, color.z, color.w, 
    color.x, color.y, color.z, color.w, 
    color.x, color.y, color.z, color.w, 
    color.x, color.y, color.z, color.w
    };
    

  // Then adds the data to a new buffers which will eventually be swapped to view
  m_VertexArray->addBuffer(new Buffer(vertices, 4 * 3, 3), 0); //Last argument '0' to specify it is position data
  m_VertexArray->addBuffer(new Buffer(colors, 4 * 4, 4), 1); //Last argument '1' to specify its color data

  //Specifies which order the indices get rendered, ending up as two triangles rendered together
  GLushort indices[] = {0, 1, 2, 2, 3, 0};
  m_IndexBuffer = new IndexBuffer(indices, 6);
}

StaticSprite::~StaticSprite() {
  delete m_IndexBuffer;
  delete m_IndexBuffer;
}

} // namespace graphics
} // namespace churn
