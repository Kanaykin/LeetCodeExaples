cmake_minimum_required(VERSION 3.12)

project(LeetCodeExaples)

set (CMAKE_MODULE_PATH "${CMAKE_MODULE_PATH};${CMAKE_CURRENT_SOURCE_DIR}/cmake")
set (CMAKE_ROOT_PATH "${CMAKE_CURRENT_SOURCE_DIR}")
set (CMAKE_BUILD_PATH "${CMAKE_ROOT_PATH}/build")

set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++20")

add_subdirectory (AddTwoNumbers)
add_subdirectory (CoroutineCpp)
add_subdirectory (InsertItem)
add_subdirectory (SubstrWithoutRepeating)