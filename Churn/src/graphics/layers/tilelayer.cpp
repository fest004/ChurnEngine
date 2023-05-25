#include "tilelayer.hpp"

namespace churn {
namespace graphics {


  //Subclass of layer.hpp, instantiates instance of layer
TileLayer::TileLayer(Shader *shader) 
: Layer(new BatchRenderer2D(), shader, math::mat4::orthographic(-16.0f, 16.0f, -9.0f, 9.0f, -1.0f, 1.0f))
{
}

TileLayer::~TileLayer() {}


} // namespace graphics
} // namespace churn
