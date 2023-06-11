#pragma once

// #include "../utils/fileutils.h"
#include <GLFW/glfw3.h>

#include "../math/math.hpp"

namespace churn {
namespace graphics {

class Shader
	{
	private:
		const char* m_VertPath;
		const char* m_FragPath;
	public:
		GLuint m_ShaderID;
		Shader(const char* vertPath, const char* fragPath);
		~Shader();


		void setUniform1f(const GLchar* name, float value);
		void setUniform1fv(const GLchar* name, float* value, int count);
	  void setUniform1iv(const GLchar* name, int* value, int count);
		void setUniform1i(const GLchar* name, int value);
		void setUniform2f(const GLchar* name, const math::vec2& vector);
		void setUniform3f(const GLchar* name, const math::vec3& vector);
		void setUniform4f(const GLchar* name, const math::vec4& vector);
		void setUniformMat4(const GLchar* name, const math::mat4& matrix);

		void enable() const;
		void disable() const;
	private:
		GLuint load();
		GLint getUniformLocation(const GLchar* name);
	};


} // namespace graphics
} // namespace churn
