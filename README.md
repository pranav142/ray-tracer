# Multi-Threaded Ray Tracer

A high-performance, multi-threaded ray tracer written in C++ that renders 3D scenes with high detail. This project leverages parallel processing to speed up the rendering of complex scenes, allowing you to explore the capabilities of ray tracing and generate stunning visuals.

![Sample Rendered Image](./images/example)

## Features
- **Multi-threading:** Efficiently utilizes multiple CPU cores to speed up rendering.
- **Depth of Focus:** Adds realistic blur effects for objects outside the camera’s focal range.
- **Camera Movement and Positioning:** Adjust camera settings to explore scenes from different angles and perspectives.
- **Support for Spheres and Planes:** Create scenes featuring geometric objects like spheres and planes.
- **Real-time Display:** The `run.sh` script launches the ray tracer, showing rendered images as they’re generated.

## Requirements
- **Linux** (Tested on distributions like Ubuntu and Fedora)
- **C++17 or later**
- **CMake** (for building the project)
- **libpthread** (POSIX threading library)

## Installation

1. **Clone the Repository:**
   ```bash
   git clone https://github.com/yourusername/multithreaded-ray-tracer.git
   cd multithreaded-ray-tracer
   ```

2. **Build the Project**  
   The `run.sh` script automates the build process and runs the ray tracer:
   
   ```bash
   ./run.sh
   ```

   This script will:
   - Create a `build` directory.
   - Use CMake to configure and build the project.
   - Run the ray tracer, displaying the output to the screen.

## Usage
Simply run the `run.sh` script. The rendered image will be displayed using linux display. 

```bash
./run.sh
```
