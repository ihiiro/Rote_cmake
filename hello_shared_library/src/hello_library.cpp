#include <iostream>
#include <shared/hello_library.hpp>

void hello_library::print() {
  std::cout << "Hello, Shared library!" << std::endl;
}
