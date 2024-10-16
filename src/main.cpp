#include "image.h"

#include "camera.h"
#include "display.h"
#include "material.h"
#include "renderer.h"
#include "sphere.h"
#include "world.h"
#include <algorithm>
#include <memory>

#include "imgui.h"
#include "imgui_impl_glfw.h"
#include "imgui_impl_opengl3.h"
#include <GLFW/glfw3.h>

static World create_example_world() {
  std::shared_ptr<Material> red_lambertian =
      std::make_shared<Lambertian>(Vec3(0.7, 0.1, 0.1));
  std::shared_ptr<Material> white_mirror =
      std::make_shared<Metal>(Vec3(0.7, 0.7, 0.7), 0.01);
  std::shared_ptr<Material> white_lambertian =
      std::make_shared<Lambertian>(Vec3(0.7, 0.7, 0.7));
  std::shared_ptr<Material> glass = std::make_shared<Dielectric>(1.33, 0);

  World world;
  world.add(
      std::make_shared<Sphere>(Vec3(0, -100.5, -1), 100, white_lambertian));

  world.add(std::make_shared<Sphere>(Vec3(0, 0, -1.2), 0.5, red_lambertian));
  world.add(std::make_shared<Sphere>(Vec3(-1, 0, -1), 0.5, white_mirror));
  world.add(std::make_shared<Sphere>(Vec3(1, 0, -1), 0.5, glass));
  return world;
}

int main() {
  const double aspect_ratio = 16.0 / 9.0;
  const size_t image_height = 500;
  const double vertical_fov_deg = 90;
  const double focal_length = 1;
  const int samples_per_pixel = 1;
  const int max_depth = 10;

  Vec3 camera_origin(-1, 1, 1.0);
  double camera_pitch_deg = -20;
  double camera_yaw_deg = 30;

  Orientation orientation{camera_pitch_deg, camera_yaw_deg, 0};
  Camera camera(camera_origin, orientation, vertical_fov_deg, focal_length,
                aspect_ratio);

  RayTracer ray_tracer(samples_per_pixel, max_depth);
  World world = create_example_world();
  Image image = ray_tracer.render(camera, world, image_height);
  GLuint my_image_texture;
  // ppm_draw_image(image);

  //  if (!glfwInit()) {
  //    return 1;
  //  }
  //  const char *glsl_version = "#version 130";
  //  glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
  //  glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 0);
  //
  //  GLFWwindow *window = glfwCreateWindow(
  //      1280, 720, "Dear ImGui GLFW+OpenGL3 example", nullptr, nullptr);
  //  if (window == nullptr)
  //    return 1;
  //  glfwMakeContextCurrent(window);
  //  glfwSwapInterval(1); // Enable vsync
  //
  //  IMGUI_CHECKVERSION();
  //  ImGui::CreateContext();
  //  ImGuiIO &io = ImGui::GetIO();
  //  (void)io;
  //  io.ConfigFlags |=
  //      ImGuiConfigFlags_NavEnableKeyboard; // EnableKeyboard Controls
  //  io.ConfigFlags |=
  //      ImGuiConfigFlags_NavEnableGamepad; // Enable Gamepad Controls
  //
  //  ImGui::StyleColorsDark();
  //  ImGui_ImplGlfw_InitForOpenGL(window, true);
  //  ImGui_ImplOpenGL3_Init(glsl_version);
  //
  //  bool show_demo_window = true;
  //  bool show_another_window = false;
  //  bool show_my_window = false;
  //  ImVec4 clear_color = ImVec4(1.0f, 1.0f, 1.0f, 1.00f);
  //
  //  while (!glfwWindowShouldClose(window)) {
  //    glfwPollEvents();
  //    if (glfwGetWindowAttrib(window, GLFW_ICONIFIED) != 0) {
  //      ImGui_ImplGlfw_Sleep(10);
  //      continue;
  //    }
  //
  //    ImGui_ImplOpenGL3_NewFrame();
  //    ImGui_ImplGlfw_NewFrame();
  //    ImGui::NewFrame();
  //
  //    if (show_demo_window)
  //      ImGui::ShowDemoWindow(&show_demo_window);
  //
  //    {
  //      static float f = 0.0f;
  //      static int counter = 0;
  //
  //      ImGui::Begin("Hello, world!"); // Create a window called "Hello,
  //      world!"
  //                                     // and append into it.
  //
  //      ImGui::Text("This is some useful text."); // Display some text (you
  //      can
  //                                                // use a format strings too)
  //      ImGui::Checkbox(
  //          "Demo Window",
  //          &show_demo_window); // Edit bools storing our window open/close
  //          state
  //      ImGui::Checkbox("Another Window", &show_another_window);
  //
  //      ImGui::SliderFloat("float", &f, 0.0f,
  //                         1.0f); // Edit 1 float using a slider from 0.0f
  //                         to 1.0f
  //      ImGui::ColorEdit3(
  //          "clear color",
  //          (float *)&clear_color); // Edit 3 floats representing a color
  //
  //      if (ImGui::Button("Button")) // Buttons return true when clicked (most
  //                                   // widgets return true when
  //                                   edited/activated)
  //        counter++;
  //      ImGui::SameLine();
  //      ImGui::Text("counter = %d", counter);
  // i
  //      ImGui::Text("Application average %.3f ms/frame (%.1f FPS)",
  //                  1000.0f / io.Framerate, io.Framerate);
  //      ImGui::End();
  //    }
  //
  //    // 3. Show another simple window.
  //    if (show_another_window) {
  //      ImGui::Begin(
  //          "Another Window",
  //          &show_another_window); // Pass a pointer to our bool variable (the
  //                                 // window will have a closing button that
  //                                 will
  //                                 // clear the bool when clicked)
  //      ImGui::Text("Hello from another window!");
  //      if (ImGui::Button("Open another window"))
  //        show_my_window = true;
  //
  //      if (ImGui::Button("Close Me"))
  //        show_another_window = false;
  //      ImGui::End();
  //    }
  //
  //    if (show_my_window) {
  //      ImGui::Begin("Image Window", &show_my_window);
  //
  //      ImGui::Text("Size = %d, %d", image.width(), image.height());
  //      ImGui::Image((ImTextureID)(intptr_t)my_image_texture,
  //                   ImVec2(my_image_width, my_image_height));
  //      //  if (ImGui::Button("Close my window")) {
  //      //    show_my_window = false;
  //      //  }
  //
  //      ImGui::End();
  //    }
  //
  //    // Rendering
  //    ImGui::Render();
  //    int display_w, display_h;
  //    glfwGetFramebufferSize(window, &display_w, &display_h);
  //    glViewport(0, 0, display_w, display_h);
  //    glClearColor(clear_color.x * clear_color.w, clear_color.y *
  //    clear_color.w,
  //                 clear_color.z * clear_color.w, clear_color.w);
  //    glClear(GL_COLOR_BUFFER_BIT);
  //    ImGui_ImplOpenGL3_RenderDrawData(ImGui::GetDrawData());
  //
  //    glfwSwapBuffers(window);
  //    std::cout << "hello";
  //  }
  //
  //  // Cleanup
  //  ImGui_ImplOpenGL3_Shutdown();
  //  ImGui_ImplGlfw_Shutdown();
  //  ImGui::DestroyContext();
  //
  //  glfwDestroyWindow(window);
  //  glfwTerminate();
  //
  //  return 0;
}
