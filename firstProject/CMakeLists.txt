cmake_minimum_required(VERSION 3.13)

project(AddToSum)

add_executable(${PROJECT_NAME} main.cpp)

target_link_libraries(${PROJECT_NAME} mearlymath)

install(TARGETS ${PROJECT_NAME} DESTINATION bin)

