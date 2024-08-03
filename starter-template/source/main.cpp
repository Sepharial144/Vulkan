#include "logger/logger.hpp"

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

#define GLM_FORCE_RADIANS
#define GLM_FORCE_DEPTH_ZERO_TO_ONE
#include <glm/glm.hpp>
#include <glm/vec4.hpp>
#include <iostream>


int main(int argc, char* argv[])
{
	if (glfwInit() == GLFW_FALSE)
	{
		logger::error("Error while init GLFW!");
	}

	glfwDefaultWindowHints();
	glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);

	// compatible with linux systems
	glfwWindowHint(GLFW_VISIBLE, GL_TRUE);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);		           // A context can be created with OpenGL 3.x version
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 2);		           // A context can be created with at least with OpenGL 3.2 version
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE); // Use the core profile of OpenGL, which inlcudes only the most modern and forward-compatible features of the specified OpenGL version
	glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);		   // Sets a hint GLFW to enable forward compability for the OpenGL context -- forward compatibility means that OpenGL context will not support any deprecated features 

	GLFWwindow* window = glfwCreateWindow(800, 600, "Vulkan application", nullptr, nullptr);

	uint32_t extensionCount = 0;
	vkEnumerateInstanceExtensionProperties(nullptr, &extensionCount, nullptr);


	std::cout << extensionCount << "Vulkan Hello!" << std::endl;

	glm::mat4 matrix;
	glm::vec4 vec;
	auto test = matrix * vec;

	while (!glfwWindowShouldClose(window))
	{
		glfwPollEvents();
	}

	glfwDestroyWindow(window);
	glfwTerminate();

	return EXIT_SUCCESS;
}