// Copyright 2018 Hubert andre

#include <fstream>

void c05e09() {
  std::ofstream of("outputC05E09", std::ios::binary);
  int N = 1000;
  for (std::size_t i = 0; i < N; i++) {
    of << i + 1 << '\n';
  }
  of.close();
}
