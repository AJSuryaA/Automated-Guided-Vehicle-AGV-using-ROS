/***************************************************************
   Motor driver function definitions - by Mohit Kumar Gupta
   *************************************************************/

#ifdef L298_MOTOR_DRIVER
  //below can be changed
  #define LEFT_MOTOR_ENABLE 12
  #define LEFT_MOTOR_FORWARD 9
  #define LEFT_MOTOR_BACKWARD 10
  #define RIGHT_MOTOR_FORWARD 5
  #define RIGHT_MOTOR_BACKWARD 6
  #define RIGHT_MOTOR_ENABLE 11
  
#endif

void initMotorController();
void setMotorSpeed(int i, int spd);
void setMotorSpeeds(int leftSpeed, int rightSpeed);
