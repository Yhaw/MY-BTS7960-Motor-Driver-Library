// The BTS7960 Motor Driver library can do all this work for you!, like controlling high current motors.
// https://github.com/Yhaw/MY-BTS7960-Motor-Driver-Library
//This library was written by Sylvian Kimkpe.

//Enjoy it!!


#include <Driver.h>

Motor motor(6,2,3,7,4,5); // motor(R_IS,R_EN,R_PWM,L_IS,L_EN,L_PWM)  Make sure R_PWN & L_PWM pins are connected to pwm pins on your board......

//Motor motor2() // Initialize new motor object.

void setup() {

  motor.pins_configure(); // configure and initialise all your connected pins......

}

void loop() {
 
  motor.CW(100); //motor.CW(speed) => Moves motor clockwise direction, Speed ranges from 0 to 255.....	

  //motor.CCW(100); //motor.CW(speed) => Moves motor Counter clockwise direction, Speed ranges from 0 to 255.....


}
