
cmake_minimum_required(VERSION 3.12)


project(GameEngine)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_BUILD_TYPE Debug)

find_package(OpenGL REQUIRED)

set(SOURCES
  src/main.cpp
  libs/glad/glad.c
  )
  


add_executable(GameEngine ${SOURCES})

target_link_libraries(GameEngine glfw)
