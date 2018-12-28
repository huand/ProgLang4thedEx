// Copyright 2018 Hubert Andre

#include <fstream>
#include <iostream>

void c05e10() {
  std::string source = "outputC05E09";
  std::ifstream ifs(source, std::ios::binary);
  std::string s;
  while (std::getline(ifs, s)) {
    std::cout << s << '\n';
  }
}
