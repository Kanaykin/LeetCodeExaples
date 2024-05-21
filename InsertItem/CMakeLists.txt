cmake_minimum_required(VERSION 3.10)

include(example_app)

cmake_language(CALL MAKE_EXAMPLE_APP InsertItem)

message(STATUS "!!!!!!!!!!!!!!!!!!!! ${CMAKE_CURRENT_BINARY_DIR} .. ${CMAKE_BUILD_TYPE}")
message(STATUS "!!!!!!!!!!!!!!!!!!!! ${CMAKE_BUILD_TYPE}")
message(STATUS "!!!!!!!!!!!!!!!!!!!! $<CONFIGURATION>")

#COPY_ZSTD_DYLIBS(azcore_ecs "${CMAKE_CURRENT_BINARY_DIR}/$<CONFIG>/")
#COPY_CITYHASH_DYLIBS(azcore_ecs "${CMAKE_CURRENT_BINARY_DIR}/$<CONFIG>/")
