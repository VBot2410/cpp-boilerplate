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
  const double dt = 0.2;
  const double Error = Set_Point - Current_Velocity;
  const double Integral = Error * dt;
  const double Derivative = Error / dt;
  const double New_Velocity = _Kp * Error + _Ki * Integral + _Kd * Derivative;
  return New_Velocity;
}

/* Destructor*/

PID::~PID() {
}
