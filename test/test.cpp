// Copyright 2022 Shailesh Pranav Rajendran
/**
 * @file test.cpp
 * @author Shailesh Pranav Rajendran (spraj@umd.edu)
 * @brief Unit tests for the PID controller program
 * @version 0.1
 * @date 2022-10-03
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <gtest/gtest.h>

#include "../include/PID.hpp"

/**
 * @brief Class initialized with inputs for testing
 *
 */
PID pid(1, 5, 10, 1);

/**
 * @brief Test to check implementation of the formula
 *
 */
TEST(PIDtest, corr_result) { ASSERT_EQ(pid.compute(25), 25); }

/**
 * @brief Test to check output for a really large input
 *
 */
TEST(PIDtest, upper_bound) { ASSERT_LT(pid.compute(10000), 2500); }

/**
 * @brief Test to check output for a really small input
 *
 */
TEST(PIDtest, lower_bound) { ASSERT_LT(pid.compute(-500), -250); }
