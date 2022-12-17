if(MSVC AND NOT(WINDOWS_STORE) AND NOT (PLATFORM_PSP2) AND NOT (PLATFORM_NX) AND NOT (PLATFORM_NX_ARM))

Message("Compiling for Windows!")

#Find libs
find_package(OpenGL REQUIRED)

find_package(Vulkan)
Message(STATUS ${Vulkan_INCLUDE_DIR})
include_directories(${Vulkan_INCLUDE_DIR})
include_directories(${EXTERN_LIB_PATH}/SDL/Include)

endif()