cmake_minimum_required(VERSION 3.16.3)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -O0")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -O0")

project(ray_tracer)

find_package(OpenGL REQUIRED)

find_package(glfw3 REQUIRED)

find_package(TBB REQUIRED)

target_include_directories(src libs/imgui libs/imgui/backends libs/GLAD/glad libs/GLAD/KHR)

add_executable ( ray_tracer 
    src/main.cpp 
    src/vec.cpp 
    src/sphere.cpp
    src/image.cpp
    src/display.cpp
    src/camera.cpp
    src/ray.cpp
    src/interval.cpp
    src/hittable.cpp
    src/world.cpp
    src/plane.cpp
    src/material.cpp
    src/renderer.cpp
)

set(IMGUI_SOURCES
    libs/imgui/imgui.cpp
    libs/imgui/imgui_demo.cpp
    libs/imgui/imgui_draw.cpp
    libs/imgui/imgui_widgets.cpp
    libs/imgui/imgui_tables.cpp
)

add_library(imgui STATIC ${IMGUI_SOURCES})

set(IMGUI_BACKEND_SOURCES
   libs/imgui/backends/imgui_impl_glfw.cpp
   libs/imgui/backends/imgui_impl_opengl3.cpp
)

add_library(imgui_backend STATIC ${IMGUI_BACKEND_SOURCES})

set(GLAD_SOURCES
    libs/GLAD/glad.c
)

add_library(glad STATIC ${GLAD_SOURCES})

target_link_libraries(ray_tracer PRIVATE
    TBB::tbb
)
