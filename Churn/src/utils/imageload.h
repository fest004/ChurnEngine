#pragma once

#include "glad/glad.h"
#include <FreeImage.h>

namespace churn {
static BYTE* load_image(const char *path, GLsizei *width, GLsizei *height) {

  // PATH IS RELATIVE TO BUILD DESTINATION NOT SOURCE DESTINATION
  FREE_IMAGE_FORMAT fif = FIF_UNKNOWN;
  FIBITMAP *dib = nullptr;
  GLuint gl_texID;

  // Check the file signature and deduce its format
  fif = FreeImage_GetFileType(path, 0);

  // If still unknown, try to guess the file format from the file extension
  if (fif == FIF_UNKNOWN)
    fif = FreeImage_GetFIFFromFilename(path);

  // If still unknown, return failure
  if (fif == FIF_UNKNOWN)
    return nullptr;

  // Check that the plugin has reading capabilities and load the file
  if (FreeImage_FIFSupportsReading(fif))
    dib = FreeImage_Load(fif, path);

  // If the image failed to load, return failure
  if (!dib)
    return nullptr;

  // Retrieve the image data
  BYTE* result = FreeImage_GetBits(dib);


  // Get the image width and height
  *width = FreeImage_GetWidth(dib);
  *height = FreeImage_GetHeight(dib);

  return result;
}

} // namespace churn
