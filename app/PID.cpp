/**
 * @file PID.cpp
 * @author Shailesh Pranav Rajendran (spraj@umd.edu)
 * @author Kumara Ritvik Oruganti(okritvik@umd.edu)
 * @brief This file defines the class and functions for the PID controller
 * @version 0.1
 * @date 2022-10-03
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "../include/PID.hpp"

PID::PID(double _kp, double _ki, double _kd, double _dt) {
  // Updated the previous constructor
  PID::_dt = _dt;
  PID::_kd = _kd;
  PID::_ki = _ki;
  PID::_kp = _kp;
}

double PID::compute(double target) {
  double current_vel = 0;
  while (true) {
    // Calculating the error
    double error = target - current_vel;
    // Updating the Current Velocity
    current_vel += _kp * error + (_kd * error) / _dt + (_ki)*error * _dt;
    // std::cout << error << "\n";

    // Rounding off the error to 10^-10 decimal
    if (error < 1e-10) {
      std::cout << "FINAL VELOCITY: " << current_vel << "\n";
      return current_vel;
    }
  }
}

PID::~PID() {}
