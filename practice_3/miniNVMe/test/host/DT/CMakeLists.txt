cmake_minimum_required(VERSION 3.13)
project(host_test)

# 配置gcc编译参数
set(CMAKE_CXX_FLAGS "-std=c++14 ${CMAKE_CXX_FLAGS}")
set(CMAKE_CXX_FLAGS "-O0 -m64 -g -fPIC ${CMAKE_CXX_FLAGS}")

set(GOOGLETEST_VERSION 1.12.1)
set(LIBRARY_OUTPUT_PATH lib)

#编译选项开关
option(BUILD_GMOCK "Builds the googlemock subproject" ON)
option(INSTALL_GTEST "Enable installation of googletest. (Projects embedding googletest may want to turn this OFF.)" ON)
# option(gtest_disable_pthreads "Disable uses of pthreads in gtest." ON)

# 头文件包含的目录
set(TEST_DIR ${CMAKE_SOURCE_DIR})
set(THIRDPART_DIR ${CMAKE_SOURCE_DIR}/../../../thirdpart)
include_directories(
  ${THIRDPART_DIR}/gtest/googlemock/include
  ${THIRDPART_DIR}/gtest/googlemock/src
  ${THIRDPART_DIR}/gtest/googletest/include
  ${THIRDPART_DIR}/gtest/googletest/src
)

# 需要包含的编译子目录，使用gmock会自动引用gtest
if(BUILD_GMOCK)
  add_subdirectory(${THIRDPART_DIR}/gtest/googlemock gmock_binary_dir)
else()
  add_subdirectory(${THIRDPART_DIR}/gtest/googletest gtest_binary_dir)
endif()

# 编译单元测试用例代码
add_executable(${PROJECT_NAME}
  ${TEST_DIR}/main.cc
  ${TEST_DIR}/testcase/testcase_1.cc
)

# 链接gtest和gmock
# gtest需要自己实现main，而gtest_main不用，仅此而已
find_package(Threads)
target_link_libraries(${PROJECT_NAME}
  ${CMAKE_THREAD_LIBS_INIT}
  gtest
  gmock
)
