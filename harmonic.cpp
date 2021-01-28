#include <iostream>

float harmonic_mean(const float x1, const float x2) {
  return (2 * x1 * x2) / (x1 + x2);
}

int main() {
  std::cout << "Please enter a number: ";
  float float1 = 0.0;
  std::cin >> float1;
  std::cout << "Please enter another number: ";
  float float2 = 0.0;
  std::cin >> float2;
  const float result = harmonic_mean(float1, float2);
  std::cout << "The harmonic mean is: " << result << std::endl;
  return 0;
}
