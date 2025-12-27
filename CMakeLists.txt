cmake_minimum_required(VERSION 3.28)
project(Tensor__)

include(FetchContent)
FetchContent_Declare(
        googletest
        URL https://github.com/google/googletest/archive/refs/heads/main.zip
)
FetchContent_MakeAvailable(googletest)

enable_testing()

add_executable(TensorTests tests/test_tensor.cpp Tensor.cpp)
target_link_libraries(TensorTests GTest::gtest_main)

include(GoogleTest)
gtest_discover_tests(TensorTests)

set(CMAKE_CXX_STANDARD 20)

add_executable(Tensor__ main.cpp Tensor.cpp)
