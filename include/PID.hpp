/**
 * @file PID.hpp
 * @author Shailesh Pranav Rajendran (spraj@umd.edu)
 * @brief Header file for the PID controller class
 * @version 0.1
 * @date 2022-10-03
 *
 * @copyright Copyright (c) 2022
 *
 */

#ifndef INCLUDE_PID_HPP_
#define INCLUDE_PID_HPP_

#include <iostream>

class PID {
 private:
  double _kp = 1.0, _ki = 1.0, _kd = 1.0;
  double _dt = 0.1;

 public:
  /**
   * @brief Constructor to initialize with default values
   *
   */
  PID(){};

  /**
   * @brief Constructor to initialize with user defined values
   *
   * @param kp: user provided proportional constant
   * @param ki: user provided integral constant
   * @param kd: user provided derivative constant
   * @param dt: user provided sampling time
   */
  PID(double kp, double ki, double kd, double dt);

  /**
   * @brief Method to compute to the feedback to be provided to the system
   *      based on the current state and the target state
   *
   * @param target: Target state to be achieved by the system
   * @return double: Value of feedback to be provided to the system
   */
  double compute(double target);

  /**
   * @brief Destructor fot PID class object
   *
   */
  virtual ~PID();
};

#endif  // INCLUDE_PID_HPP_
