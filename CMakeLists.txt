cmake_minimum_required(VERSION 3.22)
project(ray_tracer)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -O0")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -O0")

find_package(TBB REQUIRED)


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

target_include_directories(ray_tracer PRIVATE src)

target_link_libraries(ray_tracer PRIVATE
    TBB::tbb
)
