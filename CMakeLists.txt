cmake_minimum_required(VERSION 3.16)

project(IESLBubble_project)

file(GLOB_RECURSE sources scr/main/*.cpp scr/main/*.h)

add_executable(IESLBubble ${sources})

target_include_directories(IESLBubble PUBLIC include/)

#find_package(Boost 1.90.0 COMPONENTS filesystem system REQUIRED)

target_link_libraries(IESLBubble PUBLIC
  ${Boost_LIBRARIES}
  # here you can add any library dependencies
)

set(CPACK_PACKAGE_NAME "IESLBubble")
set(CPACK_PACKAGE_VERSION "1.0.0")

# We don't want to split our program up into several incomplete pieces.
set(CPACK_MONOLITHIC_INSTALL 1)

# This must be last
include(CPack)
