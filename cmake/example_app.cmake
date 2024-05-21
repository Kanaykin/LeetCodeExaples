function(MAKE_EXAMPLE_APP proj_name)
    # message(STATUS "MAKE_EXAMPLE_APP=${include_modules}")
    # set the project name
    set(PROJECT_NAME ${proj_name})
    project(${PROJECT_NAME})

    message(STATUS "CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH}")

    set(PROJECT_SOURCE_DIR .)

    #include(group_files)
    file(GLOB_RECURSE SRC
        ${PROJECT_SOURCE_DIR}/*.h
        ${PROJECT_SOURCE_DIR}/*.cpp
    )

    #group_files()

    add_executable(${PROJECT_NAME} ${SRC})
    #target_link_libraries(${PROJECT_NAME} ${LIBRARIES})
    
    set_property(TARGET ${PROJECT_NAME} PROPERTY CXX_STANDARD 20)

    #set_target_properties (${PROJECT_NAME} PROPERTIES
    #FOLDER examples)

    install (TARGETS ${PROJECT_NAME} RUNTIME DESTINATION ${CMAKE_BUILD_PATH}/bin/${CMAKE_BUILD_TYPE})
endfunction()