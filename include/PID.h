/*
 * @file PID.h
 *
 * @brief The class declaration of PID
 * builds the PID controller from given kp,Ki,Kd gains
 * Contains the Compute function which calculates the Expected Velocity
 *
 * @author: Vaibhav Bhilare
 * @copyright 2017, Vaibhav Bhilare
 * @param _Kp,_Ki,_Kd the gain values as private members of the class
 * @param Compute function calculates the Expected Velocity
 *
 */

#ifndef PID_H_
#define PID_H_

/**
 * @brief PID class Declaration
 * @param _Kp, _Ki, _Kd Private members gain values
 * @param contructor initializes the double type gain values
 */
class PID {
 private:
  /* Private Members*/
  double _Kp, _Ki, _Kd;
 public:
  /* Public Members*/
  /**
   * Construtor Declaration as a Public Member
   */
  PID(const double &Kp, const double &Ki, const double &Kd);
  /* Compute Function Declaration*/
  double Compute(const double &Set_Point, const double &Current_Velocity);
  /**
   * Destructor Declaration
   */
  ~PID();
};

#endif /* PID_H_ */
