#include "app.h"

int main(int argc, char **argv) {

  int a, b;

  std::cin >> a;
  std::cin >> b;

  /*
    std::string name;
    int count = 1;

    while (count < argc) {
      name += argv[count++];
    }

    name.erase(0, name.find_first_not_of("\t\n\r\f\v"));
    name.erase(name.find_last_not_of("\t\n\r\f\v") + 1);
  */

  std::cout << "Add integer values: " << mearlymath::add(a, b) << std::endl;
  return 0;
}
