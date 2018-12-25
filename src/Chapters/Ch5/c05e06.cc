// Copyright 2018 Hubert Andre
#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>

class Crowd {
 private:
  std::vector<std::pair<std::string, int>> data;

 public:
  friend std::ostream& operator<<(std::ostream&, Crowd&);
  friend std::istream& operator>>(std::istream&, Crowd&);
};
std::ostream& operator<<(std::ostream& os, Crowd& c) {
  std::for_each(c.data.begin(), c.data.end(), [&](auto x) {
    os << "name: " << x.first << ", age: " << x.second << std::endl;
  });
}
std::istream& operator>>(std::istream& is, Crowd& c) {
  std::cout << "enter name: ";
  std::string s;
  is >> s;
  std::cout << "enter age: ";
  int i;
  is >> i;
  c.data.push_back(std::pair<std::string, int>{s, i});
}
void c05e06() {
  Crowd c;
  std::cin >> c;
  std::cin >> c;
  std::cout << c;
}
