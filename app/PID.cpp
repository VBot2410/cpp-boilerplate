/*
 * @file PID.cpp
 * @brief Class & member functions Definitions
 *
 * @author Vaibav Bhilare
 * @copyright 2017, Vaibhav Bhilare
 */

/* --Includes-- */
#include<iostream>
#include <stdexcept>
#include "PID.h"

/* Constructor */
/* Throw an error if Kp,Ki,Kd values are negative*/
PID::PID(const double &Kp, const double &Ki, const double &Kd) {
  _Kp = Kp;
  _Ki = Ki;
  _Kd = Kd;
}
/**
 * @brief Compute Function Definition
 * @param Set_Point Reference Value
 * @param Current_Velocity Current Velocity Value
 * @param dt Time step
 * @param Error Difference Between Reference Value and Current Velocity
 * @param Integral Integral Correction Factor
 * @param Derivative Derivative Correction Factor
 * @param New_Velocity The Controller Output
 * @return New_Velocity
 */
double PID::Compute(const double &Set_Point, const double &Current_Velocity) {
  return 99.99;
}

/* Destructor*/

PID::~PID() {
}
