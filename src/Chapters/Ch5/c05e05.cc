// Copyright Hubert Andre
#include <iostream>

void c05e05() {
  std::cout << "enter name: ";
  std::string name;
  std::getline(std::cin, name);
  std::cout << "enter age: ";
  int age;
  std::cin >> age;
  std::cout << "name: " << name << " age: " << age << std::endl;
}
