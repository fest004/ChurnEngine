cmake_minimum_required(VERSION 3.12)

project(GameEngine)

find_package(OpenGL REQUIRED)

add_executable(GameEngine src/main.cpp libs/glad/glad.c libs/glad/glad.c)

target_link_libraries(GameEngine glfw)
