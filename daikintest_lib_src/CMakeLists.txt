# CMakeList.txt : CMake project for daikintest_lib_src, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

project ("daikintest")

# Add source to this project's executable.
#add_executable (daikintest_lib_src "daikintest_lib_src.cpp" "daikintest_lib_src.h")

 
add_library(${CMAKE_PROJECT_NAME} daikintest.cpp)



set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR})
