#include <iostream>
#include <string>

int main() {

  std::string a[] = {
      "George Washington",
      "Михаил Горбачёв",
  };
  for (int i = 0; i < 2; ++i) {
    std::cout << a[i] << "  - длина "<<a[i].length()<< "\n";
  }
}