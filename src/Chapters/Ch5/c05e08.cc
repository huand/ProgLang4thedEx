// Copyright 2018 Hubert Andre
#include <algorithm>
#include <iostream>
#include <vector>

template <class T>
void print_vector(T v) {
  std::for_each(v.begin(), v.end(), [](auto x) { std::cout << x << ", "; });
}

void c05e08() {
  std::vector<std::string> v{"Kant", "Plato", "Aristotle", "Kierkegard",
                             "Hume"};
  print_vector<std::vector<std::string>>(v);
  std::sort(v.begin(), v.end());
  std::cout << std::endl;
  print_vector<std::vector<std::string>>(v);
  std::cout << std::endl;
}
