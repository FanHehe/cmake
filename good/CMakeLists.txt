cmake_minimum_required(VERSION 3.0)
project(good)

find_package(opencv REQUIRED)
IF(OPENCV_FOUND)
    MESSAGE("found opencv")
    MESSAGE("Includes: " ${Opencv_INCLUDE_DIRS})
ENDIF(OPENCV_FOUND)
add_executable(cv main.cpp)
target_link_libraries(cv ${OpenCV_LIBS})
