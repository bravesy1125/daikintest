# CMakeList.txt : CMake project for daikintest_lib_src, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

project ("daikintest_lib_src")

# Add source to this project's executable.
#add_executable (daikintest_lib_src "daikintest_lib_src.cpp" "daikintest_lib_src.h")


# TODO: Add tests and install targets if needed.
#aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR} class_ALL_SRC)
# 遍历当前cmake下的所有*.c和*.cpp文件 输入到变量 class_ALL_SRC
# CMAKE_CURRENT_SOURCE_DIR 是当前的CMakeLists.txt的路径，如果存在疑问你可以打开下面的语句论证
# message(STATUS "CMAKE_CURRENT_SOURCE_DIR >>${CMAKE_CURRENT_SOURCE_DIR}")
 
add_library(${CMAKE_PROJECT_NAME} daikintest.cpp)
#引用当前所有c和cpp文件 生成一个 class.lib
#CMAKE_PROJECT_NAME 为cmake自带变量 获取当前project()设置的变量，主要作用于当前CMakeLists.txt文件


set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR})
