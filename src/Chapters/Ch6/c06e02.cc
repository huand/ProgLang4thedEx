// Copyright 2019 Hubert
#include <chrono>              //NOLINT
#include <condition_variable>  //NOLINT
#include <iostream>
#include <thread>  //NOLINT

void hello();
void world();

std::mutex mmutex;

std::condition_variable mcondhw;
std::condition_variable mcondwh;

void c06e02() {
  std::cout << "lets start the threads lol\n";
  auto start = std::chrono::high_resolution_clock::now();
  std::thread thHello{hello};
  std::thread thWorld{world};
  thHello.join();
  thWorld.join();
}

void hello() {
  std::chrono::milliseconds shorttime{5};
  std::chrono::seconds longtime{1};
  std::this_thread::sleep_for(shorttime);
  for (int i = 0; i < 10; i++) {
    std::unique_lock<std::mutex> lck(mmutex);
    std::cout << "Hello...";
    mcondhw.notify_one();
    mcondwh.wait(lck);
    std::this_thread::sleep_for(longtime);
  }
}

void world() {
  for (int i = 0; i < 10; i++) {
    std::unique_lock<std::mutex> lck{mmutex};
    mcondhw.wait(lck);
    std::cout << "world!\n";
    mcondwh.notify_one();
  }
}
