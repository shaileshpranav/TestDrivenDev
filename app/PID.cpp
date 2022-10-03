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
#include <math.h>
/**
 * @brief Constructor to initialize with user defined values
 */
PID::PID(double _kp, double _ki, double _kd, double _dt) {
  PID::_dt = _dt; // updated by okritvik
  PID::_kd = _kd; // updated by okritvik
  PID::_ki = _ki; // updated by okritvik
  PID::_kp = _kp; // updated by okritvik
}

double PID::compute(double target) {
  std::cout << "PID VALUES: " << _kp << " " << _ki << " " << _kd << " " << _dt << "\n"; 
  double current_vel = 0;
  double error = 0;
  while (true) {
    // break;
    error = target - current_vel;
    current_vel += _kp*error + (_kd*error)/_dt + (_ki)*error;
    // std::cout << error << "\n";
    if (error < 1e-10) {
      std::cout << "FINAL VELOCITY: " << current_vel << "\n";
      return current_vel;
    }
  }

}

/**
 * @brief Destructor fot PID class objects
 *
 */
PID::~PID() {}
