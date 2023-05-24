#version 330 core

layout (location = 0) in vec4 position;
layout (location = 1) in vec4 color;

// Projection matrix to transform vertices to screen, defining the perspective
// or orthographic projection
uniform mat4 pr_matrix;
// View matrix defining the viewpoint of the screen, or the camera
uniform mat4 vw_matrix = mat4(1.0);
// Model matrix
uniform mat4 ml_matrix = mat4(1.0);

out DATA
{
    vec4 position;
    vec4 color;

} vs_out;

void main()
{
    // Calculates the position of the vertices based on the matrices
    gl_Position = pr_matrix * vw_matrix * ml_matrix * position;
    // Applies the model matrix to the position
    vs_out.position = ml_matrix * position;
    // Stores the vertex color in the vs_out.color
    vs_out.color = color;
}
