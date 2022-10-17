cmake_minimum_required(
  VERSION
  3.20
)

project(hello_headers)

add_executable(
  ${PROJECT_NAME}
  src/hello_headers.cpp
  src/main.cpp
)

target_include_directories(
  ${PROJECT_NAME}
  PRIVATE
  ${PROJECT_SOURCE_DIR}/include
)
