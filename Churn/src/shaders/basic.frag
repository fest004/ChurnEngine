#version 330 core
layout (location = 0) out vec4 color;

// Uniforms being passed by the CPU to the shader program
// to be compiled by the GPU


uniform vec4 colour;
uniform vec2 light_pos;


//Input variables
in vec4 pos;
in DATA
{
  vec4 position;
  vec4 color;
} fs_in;

void main()
{
  // Calculates the intensity of the light based on the distance of the
  // source to the fragment, and then sets the color based on the input color
  // and the intensity of the lighting
  float intensity = 1.0f / length(fs_in.position.xy - light_pos);
  // color = colour * intensity;
  color = fs_in.color * intensity;
    
}
