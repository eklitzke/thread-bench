// Copyright Evan Klitzke, 2012

#include <chrono>
#include <iostream>
#include <thread>

void DoNothing() {
}

int main(int argc, char **argv) {
  std::chrono::time_point<std::chrono::high_resolution_clock> start, end;
  start = std::chrono::high_resolution_clock::now();
  for (std::size_t i = 0; i < ITERATIONS; i++) {
    std::thread t(DoNothing);
    t.join();
  }
  end = std::chrono::high_resolution_clock::now();
  std::size_t total  = std::chrono::duration_cast<std::chrono::microseconds>(
      end - start).count();

  std::cout << "It took " << (total / ITERATIONS) <<
      " microseconds to start/stop thread" << std::endl;
  return 0;
}
