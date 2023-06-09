cmake_minimum_required(VERSION 3.12)
project(GameEngine)

set(CMAKE_CXX_STANDARD 11)
# set(CMAKE_BUILD_TYPE Debug)

# Find required libraries
find_package(OpenGL REQUIRED)
find_package(glfw3 REQUIRED)


# Add the path to the include directories
include_directories(
  ${OPENGL_INCLUDE_DIRS}
  ${GLFW_INCLUDE_DIRS}
)

# Add your existing source files and any other settings
set(SOURCES
  src/main.cpp
  libs/glad/glad.c
)

# Add your executable target
add_executable(GameEngine ${SOURCES})

# Link required libraries to your executable
target_link_libraries(GameEngine PRIVATE ${OPENGL_LIBRARIES} glfw freeimage)



















# cmake_minimum_required(VERSION 3.12)
#
#
# project(GameEngine)
#
# set(CMAKE_CXX_STANDARD 11)
# set(CMAKE_BUILD_TYPE Debug)
#
# find_package(OpenGL REQUIRED)
#
# set(SOURCES
#   src/main.cpp
#   libs/glad/glad.c
#   libs/stb/stb.cpp
#   )
#
# add_executable(GameEngine ${SOURCES})
#
# target_link_libraries(GameEngine glfw)

