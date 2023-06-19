cmake_minimum_required(VERSION 3.12)
project(Churn)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_BUILD_TYPE Debug)

# Find required libraries
find_package(OpenGL REQUIRED)
find_package(glfw3 REQUIRED)
find_package(Freetype REQUIRED)

file(GLOB_RECURSE glfreetype libs/glfreetype/src/*.cpp libs/glfreetype/include/*.h)
file(GLOB_RECURSE freetype_gl libs/freetype-gl/*.c libs/freetype-gl/*.h)

# Add the path to the include directories
include_directories(
    ${OPENGL_INCLUDE_DIRS}
    ${GLFW_INCLUDE_DIRS}
    libs/glfreetype/include
    libs/freetype-gl
)

add_library(glfreetype_lib ${glfreetype})
add_library(freetype_gl_lib ${freetype_gl})

# Add your existing source files
set(SOURCES
    src/main.cpp
    libs/glad/glad.c
)

# Add your executable target
add_executable(Churn ${SOURCES})

target_compile_options(glfreetype_lib PUBLIC ${COMP_FLAGS})
target_compile_options(freetype_gl_lib PUBLIC ${COMP_FLAGS})

# Link required libraries to your executable
target_link_libraries(Churn PRIVATE
    ${OPENGL_LIBRARIES}
    glfw
    glfreetype_lib
    freetype_gl_lib
    freetype
    freeimage
    GLU
)









