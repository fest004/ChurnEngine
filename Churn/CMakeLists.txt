cmake_minimum_required(VERSION 3.12)
project(Churn)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_BUILD_TYPE Debug)

# Find required libraries
find_package(OpenGL REQUIRED)
find_package(glfw3 REQUIRED)
find_package(Freetype REQUIRED)

# Add the path to the include directories
include_directories(
    ${OPENGL_INCLUDE_DIRS}
    ${GLFW_INCLUDE_DIRS}
)

# Add your existing source files
set(SOURCES
    src/main.cpp
    libs/glad/glad.c
)

# Add your executable target
add_executable(Churn ${SOURCES})

# Link required libraries to your executable
target_link_libraries(Churn PRIVATE
    ${OPENGL_LIBRARIES}
    glfw
    freeimage
    freetype
)







# cmake_minimum_required(VERSION 3.12)
# project(Churn)
#
# set(CMAKE_CXX_STANDARD 11)
# set(CMAKE_BUILD_TYPE Debug)
#
# # Find required libraries
# find_package(OpenGL REQUIRED)
# find_package(glfw3 REQUIRED)
#
# # Add the path to the include directories
# include_directories(
#   ${OPENGL_INCLUDE_DIRS}
#   ${GLFW_INCLUDE_DIRS}
# )
#
# # Add your existing source files
# set(SOURCES
#   src/main.cpp
#   libs/glad/glad.c
# )
#
# #add_subdirectory()
#
# # Add your executable target
# add_executable(Churn ${SOURCES})
#
# # Link required libraries to your executable
# target_link_libraries(Churn PRIVATE ${OPENGL_LIBRARIES} glfw freeimage)
















