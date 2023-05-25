#include <glad/glad.h>

#include <GLFW/glfw3.h>

#include "shaders/shader.cpp"
#include "shaders/shader.h"
#include "graphics/window.cpp"
#include "graphics/window.hpp"
#include "math/math.hpp"
#include <iostream>
#include <math.h>

#include "graphics/buffers/buffer.cpp"
#include "graphics/buffers/buffer.hpp"
#include "graphics/buffers/indexbuffer.cpp"
#include "graphics/buffers/indexbuffer.hpp"
#include "graphics/buffers/vertexarray.cpp"
#include "graphics/buffers/vertexarray.hpp"

#include "graphics/rendering/Batch2DRenderer.cpp"
#include "graphics/rendering/Batch2DRenderer.hpp"
#include "graphics/rendering/renderable2D.h"
#include "graphics/rendering/renderer2D.hpp"
#include "graphics/rendering/simple2Drenderer.cpp"
#include "graphics/rendering/simple2Drenderer.hpp"

#include "graphics/sprites/sprite.cpp"
#include "graphics/sprites/sprite.hpp"
#include "graphics/sprites/staticSprite.cpp"
#include "graphics/sprites/staticSprite.hpp"



#include "graphics/layers/layers.cpp"
#include "graphics/layers/layers.hpp"

#include "graphics/layers/tilelayer.cpp"
#include "graphics/layers/tilelayer.hpp"

#include "utils/timer.hpp"


int main() {
  using namespace churn;
  using namespace graphics;
  using namespace math;

  Window window("Churn!", 960, 540);
  // glClearColor(1.0f, 1.0f, 1.0f, 1.0f);

  mat4 ortho = mat4::orthographic(0.0f, 16.0f, 0.0f, 9.0f, -1.0f, 1.0f);

  Shader* s = new Shader("../src/shaders/basic.vert", "../src/shaders/basic.frag");
  Shader* s2 = new Shader("../src/shaders/basic.vert", "../src/shaders/basic.frag");

  Shader& shader = *s;
  Shader& shader2 = *s2;

  shader.enable();
  shader2.enable();

  shader.setUniform2float("light_pos", vec2(4.0f, 1.5f));
  shader2.setUniform2float("light_pos", vec2(4.0f, 1.5f));

  TileLayer tileLayer(&shader);

  for (float y = -9.0f; y < 9.0f; y += 0.1f) {
    for (float x = -16.0f; x < 16.0f; x += 0.1f) {
      tileLayer.add(new Sprite(x, y, 0.09f, 0.09f, math::vec4(rand() % 1000 / 1000.0f, 0, 0.8f, 1.0f)));
    }
  }


  TileLayer tileLayer2(&shader2);
  tileLayer2.add(new Sprite(-2, -2, 4, 4, math::vec4(1, 0, 1, 1)));


  //Fps Counter
  Timer time;
  float timer = 0;
  unsigned int frames = 0;
  
    

  while (!window.closed()) {
    window.clear();
    double x, y;
    window.getMousePosition(x, y);
    shader.enable();
    shader.setUniform2float("light_pos", vec2(-8, 3));
    shader2.enable();
    shader.setUniform2float("light_pos", vec2((float)(x * 32.0f / 960.0f - 16.0f), (float)(9.0f - y * 18.0f / 540.0f)));

    tileLayer.render();
    tileLayer2.render();

    window.update();

    //FPS Counter
    frames++;
    if (time.elapsed() - timer > 1.0f)
    {
      timer += 1.0f;
      printf("%d fps\n", frames);
      frames = 0;
    }
  }
}
