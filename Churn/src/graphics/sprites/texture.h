#pragma once

#include <iostream>
#include "glad/glad.h"
#include <FreeImage.h>
#include "../../utils/imageload.h"

namespace churn {
namespace graphics {

class Texture 
{
  public:
    //Methods
    Texture(const std::string& path);
    ~Texture();


    GLuint load();
    void bind() const;
    void unbind() const;

    inline const unsigned int getWidth() const { return m_Width; }
    inline const unsigned int getHeight() const { return m_Height; }
    inline const GLuint getID() const { return m_TextureID; }

  private:
    //Variables
    std::string m_Path; //Storing path for debugging purposes
    GLuint m_TextureID;
    GLsizei m_Width, m_Height;







};

} // namespace graphics
} // namespace churn
