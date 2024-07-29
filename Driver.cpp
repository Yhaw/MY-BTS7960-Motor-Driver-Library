/* Library written by Sylvian Kimkpe on the 17/08/22 for BTS7960 Motor Driver*/


#include "Arduino.h"
#include "Driver.h"


    Motor::Motor(int pin1, int pin2, int pin3, int pin4, int pin5, int pin6){

        R_IS = pin1;
        R_EN = pin2;
        R_PWM = pin3;
        L_IS = pin4;
        L_EN = pin5;
        L_PWM = pin6;
        
      } 

    void Motor::pins_configure(){
      
       pinMode(R_IS, OUTPUT);
       pinMode(R_EN, OUTPUT);
       pinMode(R_PWM, OUTPUT);
       pinMode(L_IS, OUTPUT);
       pinMode(L_EN, OUTPUT);
       pinMode(L_PWM, OUTPUT);
       digitalWrite(R_IS, LOW);
       digitalWrite(L_IS, LOW);
       digitalWrite(R_EN, HIGH);
       digitalWrite(L_EN, HIGH);
       
      }


    void Motor::CW(int sped)//sped => 0 to 255
    {
      analogWrite(R_PWM, sped);
      analogWrite(L_PWM, 0);
      }

    void Motor::CCW(int sped){
      analogWrite(R_PWM, 0);
      analogWrite(L_PWM, sped);
      }
