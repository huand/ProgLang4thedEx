// copyright 2018 hubert andre
#include <iostream>

void c03e06() {
  bool b;
  char c;
  int i;
  double d;
  std::string s;
  std::cout << "bool: ";
  std::cin >> b;
  std::cout << "char: ";
  std::cin >> c;
  std::cout << "int: ";
  std::cin >> i;
  std::cout << "double: ";
  std::cin >> d;
  std::cout << "string: ";
  std::cin >> s;

  std::cout << "###############\n";

  std::cout << "bool: " << b << std::endl
            << "char: " << c << std::endl
            << "int: " << i << std::endl
            << "double: " << d << std::endl
            << "string: " << s << std::endl;
}
