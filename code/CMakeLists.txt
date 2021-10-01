# set minimum cmake version
cmake_minimum_required(VERSION 3.5 FATAL_ERROR)

# project name and language
project(proc-c-1 C)

set(BUILD_DIR "${CMAKE_BINARY_DIR}")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${BUILD_DIR}/../bin")

set(BINARY_DIR "${CMAKE_BINARY_DIR}")

# Source files list
set(SOURCE_FILES
    # Headers
    container.h
    transport.h
    plane.h
    ship.h
    train.h
    rnd.h
    test_generation.h
    file_read.h

    # Sources
    transport.c
    plane.c
    train.c
    ship.c
    container.c 
    main.c 
    rnd.c 
    test_generation.c
    file_read.c
        timer.h timer.c)

add_executable(proc-c-1 ${SOURCE_FILES})
