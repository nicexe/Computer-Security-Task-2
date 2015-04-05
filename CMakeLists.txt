cmake_minimum_required(VERSION 2.8.4)
project(Task_2)

FIND_PACKAGE(FLTK REQUIRED)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cxx main.h)
add_executable(Task_2 ${SOURCE_FILES})

target_link_libraries(Task_2 PRIVATE ${FLTK_LIBRARIES} ${CMAKE_DL_LIBS})
target_include_directories(Task_2 PRIVATE ${FLTK_INCLUDE_DIR})