cmake_minimum_required(VERSION 3.16.3)

project(ray_tracer)

include_directories(src)

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
)

