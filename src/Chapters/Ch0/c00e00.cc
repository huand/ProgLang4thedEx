// Copyright 2018 Hubert Andre

#include <iostream>

void c00e00() {
  int x[]{1, 100, 1000, 1111, 666, 69};

  for (auto& i : x) {
    std::cout << i << " ";
  }
  std::cout << std::endl;
}
