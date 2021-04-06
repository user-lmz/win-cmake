cmake_minimum_required(VERSION 3.0.0)
project(C++ VERSION 0.1.0)

#inclide(CTest)
enable_testing()
aux_source_directory(class-example/time10 DIR_SRCS)
# include_directories("class-example/time01")

# SET(TEST_MATH
# ${DIR_SRCS}
# )
# set(TEST_CPP class-example/time01/usetime0.cpp)
# add_executable(exec ${TEST_CPP})
add_executable(exec ${DIR_SRCS})

# dubug 模式------------------这个非常重要，否则无法进入断点
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g")

# 这句有的话需要注释掉
# set(CMAKE_BUILD_TYPE Release) 

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
