
cmake_minimum_required(VERSION 3.12)

project(GameEngine)

find_package(OpenGL REQUIRED)

set(SOURCES
  src/main.cpp
  libs/glad/glad.c
  )
  


add_executable(GameEngine ${SOURCES})

target_link_libraries(GameEngine glfw)
