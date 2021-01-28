/**
  CS-102 Lab 01: Calculates the harmonic mean of two given numbers.
  @file harmonic.cpp
  @author Dave Perkins
  @date January 27, 2021
*/

#include <iostream>

/**
  Returns the area of a circle with the specified radius.
  @param x1 The user's first number.
  @param x2 The user's second number.
  @return The harmonic mean of the given numbers.
*/
float harmonic_mean(float user1, float user2);

// Controls operation of the program.
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

// Returns the harmonic mean of two given numbers.
float harmonic_mean(const float user1, const float user2) {
  return (2 * user1 * user2) / (user1 + user2);
}
