cmake_minimum_required(VERSION 3.10)

include(example_app)

cmake_language(CALL MAKE_EXAMPLE_APP InsertItem)

#COPY_ZSTD_DYLIBS(azcore_ecs "${CMAKE_CURRENT_BINARY_DIR}/$<CONFIG>/")
#COPY_CITYHASH_DYLIBS(azcore_ecs "${CMAKE_CURRENT_BINARY_DIR}/$<CONFIG>/")
