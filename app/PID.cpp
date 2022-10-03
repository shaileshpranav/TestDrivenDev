/**
 * @file PID.cpp
 * @author Shailesh Pranav Rajendran (spraj@umd.edu)
 * @brief This file defines the class and functions for the PID controller
 * @version 0.1
 * @date 2022-10-03
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "../include/PID.hpp"
/**
 * @brief Constructor to initialize with user defined values
 */
PID::PID(double _kp, double _ki, double _kd, double _dt) {
  double kp = _kp, ki = _ki, kd = _kd, dt = _dt;
  std::cout << "Values for kp = " << kp << " ki = " << ki << " kd = " << kd
            << " dt = " << dt << std::endl;
}

double PID::compute(double target) { return 100.0; }

/**
 * @brief Destructor fot PID class objects
 *
 */
PID::~PID() {}
