message(STATUS "Load ... package.cmake")

if(DEFINED VCPKG_CONFIG)
	include(${VCPKG_CONFIG})
endif()

#find_package( CONFIG REQUIRED)

# include directories
SET(PACKAGE_DIRECTORIES
)

# link libraries
SET(PACKAGE_LIBRARIES
)