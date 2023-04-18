/*
#pragma once

#include "fileutils.h"
#include <cstring>
#include <string>

namespace churn {

std::string read_file(const char *filepath) {
  // C way of reading files for speed;
  // String args are r = read t = txt over fexample binary file
  // Basically read only this txt file
  FILE *file = fopen(filepath, "rt");
  fseek(file, 0, SEEK_END);
  unsigned long length = ftell(file);
  char *data = new char[length + 1];
  memset(data, 0, length + 1);
  fseek(file, 0, SEEK_SET);
  fread(data, 1, length, file);
  fclose(file);

  std::string result(data);
  delete[] data;
  return result;
}

} // namespace churn
  //
  */
