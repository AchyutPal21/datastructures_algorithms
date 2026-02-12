#include <iostream>
#include <string>
#include <vector>
#include <memory>

int main(int argc, char const *argv[]) {
  {
    // Unique pointe
    std::unique_ptr<int> p1 {new int {100}};
    std::cout << *p1 << std::endl;
    *p1 = 2000;
    std::cout << *p1 << std::endl;
  }

  return 0;
}
