cmake_minimum_required(VERSION 3.13)

project(mearlymath)

add_library(${PROJECT_NAME} app.cpp)

set_target_properties(mearlymath
                       PROPERTIES PUBLIC_HEADER app.h)

install(TARGETS mearlymath DESTINATION lib
        PUBLIC_HEADER DESTINATION include)
