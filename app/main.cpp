// Copyright 2022 Shailesh Pranav Rajendran
/**
 * @file main.cpp
 * @author Shailesh Pranav Rajendran (spraj@umd.edu)
 * @brief Main execution file
 * @version 0.1
 * @date 2022-10-03
 *
 * @copyright Copyright (c) 2022
 *
 */
#include <iostream>

#include "../include/PID.hpp"
/**
 * @brief Main function
 *
 * @return int: Execution status
 */

int main() {
  std::cout << "Welcome to PID CONTROL!\n";
  std::cout << "Enter the PID gains and Time Step:\n";
  double kp, ki, kd, dt, target;
  std::cout << "Kp: ";
  std::cin >> kp;
  std::cout << "Kd: ";
  std::cin >> kd;
  std::cout << "Ki: ";
  std::cin >> ki;
  std::cout << "dt: ";
  std::cin >> dt;
  // Create a PID object with user given values.
  PID pid(kp, ki, kd, dt);
  std::cout << "Target: ";
  std::cin >> target;
  // Call PID Controller.
  pid.compute(20);
  return 0;
}
