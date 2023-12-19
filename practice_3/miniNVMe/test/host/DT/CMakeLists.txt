project(miniNVMe)
cmake_minimum_required(VERSION 3.13)

# 配置gcc编译参数
set(CMAKE_CXX_FLAGS "-std=c++11 ${CMAKE_CXX_FLAGS}")
set(CMAKE_CXX_FLAGS "-O0 -m64 -g -fPIC ${CMAKE_CXX_FLAGS}")

set(GOOGLETEST_VERSION 1.12.1)
set(LIBRARY_OUTPUT_PATH lib)

# 头文件包含的目录
set(TEST_DIR ${CMAKE_SOURCE_DIR})
set(THIRDPART_DIR ${CMAKE_SOURCE_DIR}/../../../thirdpart)
include_directories(
  ${THIRDPART_DIR}/gtest/googlemock/include
  ${THIRDPART_DIR}/gtest/googlemock/src
  ${THIRDPART_DIR}/gtest/googletest/include
  ${THIRDPART_DIR}/gtest/googletest/src
)

# 需要包含的编译子目录
add_subdirectory(${THIRDPART_DIR}/gtest/googlemock gtest_binary_dir)
add_subdirectory(${THIRDPART_DIR}/gtest/googletest gmock_binary_dir)

# 编译单元测试用例代码
add_executable(hosttest
  ${TEST_DIR}/main.cc
  # ${TEST_DIR}/
)
target_link_libraries(hosttest
  -pthread
  gtest
  gmock
)
