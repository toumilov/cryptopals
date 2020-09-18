cmake_minimum_required(VERSION 2.8)

set(sources main.cpp)

set(APP_NAME challenge1)
add_executable(${APP_NAME} ${sources})
target_link_libraries(${APP_NAME} LINK_PUBLIC libcrypto)
add_dependencies(${APP_NAME} libcrypto)
