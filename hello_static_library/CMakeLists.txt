cmake_minimum_required(
  VERSION
  3.20
)

project(hello_library)

add_library(
  ${PROJECT_NAME}
  STATIC
  src/hello_library.cpp
)

target_include_directories(
  ${PROJECT_NAME}
  PUBLIC
  ${PROJECT_SOURCE_DIR}/include
)

add_executable(
  hello_binary
  src/main.cpp
)

target_link_libraries(
  hello_binary
  PRIVATE
  ${PROJECT_NAME}
)
