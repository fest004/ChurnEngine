#include "texture.h"


namespace churn {
namespace graphics {



  Texture::Texture(const std::string& path)
    : m_Path(path)
  {
    m_TextureID = load();

  }



  Texture::~Texture()
  {

  }

  GLuint Texture::load()
  {
    BYTE* pixels = load_image(m_Path.c_str(), &m_Width, &m_Height);

   GLuint result;
		glGenTextures(1, &result);
		glBindTexture(GL_TEXTURE_2D, result);
		glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
		glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
		glTexImage2D(GL_TEXTURE_2D, 0, GL_RGB, m_Width, m_Height, 0, GL_BGR, GL_UNSIGNED_BYTE, pixels); // 32 Bit textures
		// glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, m_Width, m_Height, 0, GL_BGRA, GL_UNSIGNED_BYTE, pixels); // 16 Bit textures
		glBindTexture(GL_TEXTURE_2D, 0);

    // delete[] pixels;
    

    return result;
  }


  void Texture::bind() const
  {
    glBindTexture(GL_TEXTURE_2D, m_TextureID);

  }


  void Texture::unbind() const
  {
    glBindTexture(GL_TEXTURE_2D, 0);
  }



}
} // namespace churn
