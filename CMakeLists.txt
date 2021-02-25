cmake_minimum_required(VERSION 3.0.0)
project(C++ VERSION 0.1.0)

include(CTest)
enable_testing()
aux_source_directory(memory-model/model1 DIR_SRCS)
SET(TEST_MATH
${DIR_SRCS}
)
add_executable(exec ${TEST_MATH})

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
