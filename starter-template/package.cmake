message(STATUS "Load ... package.cmake")

if(DEFINED VCPKG_CONFIG)
	include(${VCPKG_CONFIG})
endif()

find_package(Vulkan REQUIRED)
find_package(glfw3 REQUIRED)
find_package(glm REQUIRED)

message(STATUS "GLM included at ${GLM_INCLUDE_DIR}")
message(STATUS "Found GLFW3 in ${GLFW3_INCLUDE_DIR}")

# include directories
SET(PACKAGE_DIRECTORIES
	${GLFW3_INCLUDE_DIR}
	${GLM_INCLUDE_DIR}
)

# link libraries
SET(PACKAGE_LIBRARIES
	Vulkan::Vulkan
	glfw
	glm::glm
)