#ifndef Driver_h
#define Driver_h
#include "Arduino.h"

class Motor{

  private: 
    int R_IS;
    int R_EN;
    int R_PWM;
    int L_IS;
    int L_EN;
    int L_PWM;
    
  public:

     Motor(int pin1, int pin2, int pin3, int pin4, int pin5, int pin6);
     void pins_configure();
     void CW(int sped);
     void CCW(int sped);
  };

  #endif
