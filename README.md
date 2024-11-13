# Multi-Threaded Ray Tracer

A high-performance, multi-threaded ray tracer written in C++ that renders 3D scenes with high detail. This project leverages parallel processing to speed up the rendering of complex scenes, allowing you to explore the capabilities of ray tracing and generate stunning visuals.

![Sample Rendered Image](./sample_render.png)

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
- **OpenGL** and **GLFW** (if using ImGui for display)

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
   - Run the ray tracer, displaying output to the console.

3. **Configure Scene Settings**  
   Modify `scene_config.h` (or equivalent file) to customize objects, materials, lighting, and camera settings in the scene.

## Usage
Simply run the `run.sh` script. The rendered image will be displayed using ImGui or saved to an output file (`output.ppm`) in the root directory. 

```bash
./run.sh
```

For direct execution without the script:
1. Navigate to the `build` directory:
   ```bash
   cd build
   ```
2. Run the compiled binary:
   ```bash
   ./ray_tracer
   ```

## Contributing
Contributions are welcome! Feel free to submit issues, feature requests, or pull requests.

## License
This project is licensed under the MIT License.
