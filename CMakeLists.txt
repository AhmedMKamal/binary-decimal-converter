cmake_minimum_required (VERSION 3.10)

project (Binary_Decimal_Converter)

set(CMAKE_CXX_STANDARD 11)

include_directories("${PROJECT_SOURCE_DIR}/include")

add_executable(
  main
  "${PROJECT_SOURCE_DIR}/src/main.cc"
  "${PROJECT_SOURCE_DIR}/src/binary-to-decimal.cc"
  "${PROJECT_SOURCE_DIR}/src/decimal-to-binary.cc"
)

add_executable(
  test_1
  "${PROJECT_SOURCE_DIR}/test/binary-to-decimal.test.cc"
  "${PROJECT_SOURCE_DIR}/src/binary-to-decimal.cc"
)

add_executable(
  test_2
  "${PROJECT_SOURCE_DIR}/test/decimal-to-binary.test.cc"
  "${PROJECT_SOURCE_DIR}/src/decimal-to-binary.cc"
)
