
#include "glad/glad.h"

#include "../utils/fileutils.h"
#include "shader.h"
#include <iostream>
#include <vector>

namespace churn {
namespace graphics {

//
Shader::Shader(const char *vertPath, const char *fragPath) : m_VertPath(vertPath), m_FragPath(fragPath) {
  m_ShaderID = load();
}

Shader::~Shader() { glDeleteProgram(m_ShaderID); }

GLuint Shader::load() {
  // Creates basic vertex and fragment shader
  GLuint program = glCreateProgram();
  GLuint vertex = glCreateShader(GL_VERTEX_SHADER);
  GLuint fragment = glCreateShader(GL_FRAGMENT_SHADER);

  // Reads the frag and vert shader and makes it a c string for gl to use it
  std::string vertSourceString = FileUtils::read_file(m_VertPath);
  std::string fragSourceString = FileUtils::read_file(m_FragPath);

  const char *vertSource = vertSourceString.c_str();
  const char *fragSource = fragSourceString.c_str();

  //Compiles vertex shader, and gives error message if it fails

  glShaderSource(vertex, 1, &vertSource, NULL);
  glCompileShader(vertex);

  GLint vertexResult;
  glGetShaderiv(vertex, GL_COMPILE_STATUS, &vertexResult);
  if (!vertexResult) {
    GLint length;
    glGetShaderiv(vertex, GL_INFO_LOG_LENGTH, &length);
    std::vector<char> error(length);
    glGetShaderInfoLog(vertex, length, &length, &error[0]);
    std::cout << "Failed to compile vertex shader: " << &error[0] << std::endl;
    glDeleteShader(vertex);
    return 0;
  }


  //Compiles fragment shader, and gives error message if it fails

  glShaderSource(fragment, 1, &fragSource, NULL);
  glCompileShader(fragment);

  GLint fragmentResult;
  glGetShaderiv(fragment, GL_COMPILE_STATUS, &fragmentResult);
  if (!fragmentResult) {
    GLint length;
    glGetShaderiv(fragment, GL_INFO_LOG_LENGTH, &length);
    std::vector<char> error(length);
    glGetShaderInfoLog(fragment, length, &length, &error[0]);
    std::cout << "Failed to compile fragment shader: " << &error[0]
              << std::endl;
    glDeleteShader(fragment);
    return 0;
  }

  // If both shaders compile it attaches them to program, validates them and then deletes them from memory

  glAttachShader(program, vertex);
  glAttachShader(program, fragment);

  glLinkProgram(program);
  glValidateProgram(program);

  glDeleteShader(vertex);
  glDeleteShader(fragment);

  return program;
}


// Enable and disable shader


void Shader::enable() const { glUseProgram(m_ShaderID); }

void Shader::disable() const { glUseProgram(0); }

// Getters and setters for uniform, which is a shader variable that is shared
// between the GPU and CPU. It allows the CPU to pass data to the shader program
// that runs on the GPU.
//
// The GPU runs the shader program, but the CPU needs to be able to pass arguments
// to the shaders, which the uniform setters solve
//
// The data that is passed to the uniform are for example are matrices, like a transformation
// matrix to the vertex shader so all the vertices transform the same way

GLint Shader::getUniformLocation(const GLchar *name) {
  return glGetUniformLocation(m_ShaderID, name);
}

void Shader::setUniform1float(const GLchar *name, float value) {
  glUniform1f(getUniformLocation(name), value);
}


void Shader::setUniform2float(const GLchar *name, const math::vec2 &vector2) {
  glUniform2f(getUniformLocation(name), vector2.x, vector2.y);
}


void Shader::setUniform3float(const GLchar *name, const math::vec3 &vector3) {
  glUniform3f(getUniformLocation(name), vector3.x, vector3.y, vector3.z);
}


void Shader::setUniform4float(const GLchar *name, const math::vec4 &vector4) {
  glUniform4f(getUniformLocation(name), vector4.x, vector4.y, vector4.z, vector4.w);
}


void Shader::setUniform1int(const GLchar *name, int value) {
  glUniform1i(getUniformLocation(name), value);
}


void Shader::setUniformMat4(const GLchar *name, const math::mat4 &matrix) {
  glUniformMatrix4fv(getUniformLocation(name), 1, GL_FALSE, matrix.elements);
}


} // namespace graphics
} // namespace churn
