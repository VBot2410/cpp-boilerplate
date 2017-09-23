/**
 * @file Test_PID.cpp
 * @brief Unit Tests for the Implementation of PID Controller Class PID
 * @author Vaibhav Bhilare
 * @copyright 2017, Vaibhav Bhilare
 */

/* --Includes-- */
#include <gtest/gtest.h>
#include "../include/PID.h"

/**
 * @brief test for checking whether the values Kp,Ki,Kd are nonnegative.
 */
TEST(PID_Test, Non_Negative_Gains_Not_Allowed) {
  EXPECT_THROW(PID(-99, -99, -99), std::domain_error);
}

/**
 * @brief Test for checking whether the Expected_Velocity=0 for Current_Velocity=Set_Point
 */
TEST(Compute_Test, Set_Point_Equals_Current_Velocity_Output_0) {
  PID PID_Controller = PID(99.99, 99.99, 99.99);
  EXPECT_EQ(0, (PID_Controller.Compute(99.99, 99.99)));
}

/**
 * @brief Test for checking whether the Expected_Velocity>0
 *        when Set_Point>Current_velocity
 */
TEST(Compute_Test, Set_Point_Greater_Test_Output_Positive) {
  PID PID_Controller = PID(99.99, 99.99, 99.99);
  EXPECT_GT(PID_Controller.Compute(99.99, 20), 0);
}

/**
 * @brief Test for checking whether the Expected_Velocity<0
 *        when Set_Point<Current_velocity
 */
TEST(Compute_Test, Current_Velocity_Greater_Test_Output_Negative) {
  PID PID_Controller = PID(99.99, 99.99, 99.99);
  EXPECT_GT(0, PID_Controller.Compute(20, 99.99));
}
