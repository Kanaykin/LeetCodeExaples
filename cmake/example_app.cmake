function(MAKE_EXAMPLE_APP name)
    # set the project name
    set(PROJECT_NAME ${name})
    project(${PROJECT_NAME})

    message(STATUS "CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH}")

    set(PROJECT_SOURCE_DIR .)
    set(ROOT_DIR ..)

    message(STATUS "ROOT_DIR ${ROOT_DIR}")

    #include(group_files)
    file(GLOB_RECURSE SRC
        ${PROJECT_SOURCE_DIR}/*.h
        ${PROJECT_SOURCE_DIR}/*.cpp
    )

    #group_files()
    include_directories(${ROOT_DIR})

    add_executable(${PROJECT_NAME} ${SRC})
    #target_link_libraries(${PROJECT_NAME} ${LIBRARIES})
    
    set_property(TARGET ${PROJECT_NAME} PROPERTY CXX_STANDARD 20)

    #set_target_properties (${PROJECT_NAME} PROPERTIES
    #FOLDER examples)

    install (TARGETS ${PROJECT_NAME} RUNTIME DESTINATION ${CMAKE_BUILD_PATH}/bin/${CMAKE_BUILD_TYPE})
endfunction()