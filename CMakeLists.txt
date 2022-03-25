cmake_minimum_required(VERSION 3.1)

project(Hobbits)

include_directories(src
                    src/libs/engenie/include)

add_compile_options(-Wall -O2)

add_subdirectory(src/libs/engenie)

add_executable(${PROJECT_NAME} src/Main.cpp)

target_link_libraries(${PROJECT_NAME} Engenie)

file (COPY ${PROJECT_SOURCE_DIR}/Resources 
      DESTINATION ${CMAKE_BINARY_DIR})
