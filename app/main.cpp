/**
 * @file main.cpp
 * @brief Build a PID Controller and Calculate the expected velocity
 * @author Vaibhav Bhilare
 * @copyright 2017, Vaibhav Bhilare
 */

/** --Includes--*/
#include <iostream>
#include <PID.h>

/**
 * @brief main method
 * Uses a class PID to design a PID controller and Calculate the Expected Velocity
 * @param Kp, Ki, Kd gain values passed to the PID Class Constructor
 * @param Expected_Velocity The Value returned by Compute Function
 * @param Set_Point the Reference Output
 * @param Current_Velocity The Current Velocity
 * @return 0
 */
int main() {
  /**
   * Initialize the Kp,Ki,Kd by calling the PID class constructor
   */
  const double Kp = 1.1;
  const double Ki = 0.5;
  const double Kd = 0.05;
  PID Controller = PID(Kp, Ki, Kd);
  /**
   * Call the Compute function with (Set_Point, Current_Velocity)
   * Receive output in Expected_Velocity
   */
  const double Set_Point = 200;
  const double Current_Velocity = 20;
  const double Control = Controller.Compute(Set_Point,
                                                      Current_Velocity);
  std::cout << "New Velocity: " << (Control + Current_Velocity)
      << std::endl << "Control: " << (Expected_Velocity);
  return 0;
}
