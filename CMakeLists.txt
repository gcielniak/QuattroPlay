cmake_minimum_required(VERSION 3.0)
project(QuattroPlay C)

find_package(SDL2 REQUIRED)

file(GLOB SOURCES src/*.c src/**/*.c)

include_directories(${SDL2_INCLUDE_DIRS})

add_executable(${CMAKE_PROJECT_NAME} ${SOURCES})
target_link_libraries(${CMAKE_PROJECT_NAME} ${SDL2_LIBRARIES} m)

