// Copyright 2018 Hubert Andre
#include <algorithm>
#include <iostream>
#include <vector>
template <class T>
void print_vector(T v) {
  std::for_each(v.begin(), v.end(), [](auto x) { std::cout << x << ", "; });
}

void c05e07() {
  std::vector<int> v{5, 9, -1, 200, 0};
  print_vector<std::vector<int>>(v);
  std::sort(v.begin(), v.end());
  std::cout << std::endl;
  print_vector<std::vector<int>>(v);
  std::cout << std::endl;
}
