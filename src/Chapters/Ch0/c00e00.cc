// Copyright 2018 Hubert Andre

#include <iostream>
#include <vector>

void c00e00() {
  std::vector<int> v{1, 2, 3};

  try {
    std::cout << v.at(4) << std::endl;
  } catch (const std::exception& e) {
    std::cerr << e.what() << '\n';
  }
}
