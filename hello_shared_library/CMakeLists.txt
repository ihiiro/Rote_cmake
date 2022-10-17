cmake_minimum_required(
  VERSION
  3.20
)

project(hello_library)

add_library(
  hello_library
  SHARED
  src/hello_library.cpp
)

add_library(
  hello::library
  ALIAS
  ${PROJECT_NAME}
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
  hello::library
)
