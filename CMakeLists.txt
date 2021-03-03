cmake_minimum_required(VERSION 3.0.0)
project(C++ VERSION 0.1.0)

include(CTest)
#set(CMAKE_BUILD_TYPE "Debug")
enable_testing()
aux_source_directory(memory-model/model2 DIR_SRCS)
#dubug 模式------------------这个非常重要，否则无法进入断点
set(CMAKE_CXX_FLAGS  "${CMAKE_CXX_FLAGS} -g")

SET(TEST_MATH
${DIR_SRCS}
)
add_executable(exec ${DIR_SRCS})

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
