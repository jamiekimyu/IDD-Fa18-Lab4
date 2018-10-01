/* Sweep
 by BARRAGAN <http://barraganstudio.com>
 This example code is in the public domain.

 modified 8 Nov 2013
 by Scott Fitzgerald
 http://www.arduino.cc/en/Tutorial/Sweep
*/

#include <Servo.h>
#include <Adafruit_Sensor.h>
#include "Adafruit_VCNL4010.h"


//IR
Adafruit_VCNL4010 vcnl;

Servo myservo;  // create servo object to control a servo
// twelve servo objects can be created on most boards

int pos = 0;    // variable to store the servo position
int sensorValue = analogRead(A0);

void setup() {
  Serial.begin(9600);
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object

  Serial.println("VCNL4010 test");

  if (! vcnl.begin()){
    Serial.println("Sensor not found :(");
    while (1);
  }
  Serial.println("Found VCNL4010");
}

void loop() {
  int sensorValue = analogRead(A0);
  int mapped_value = sensorValue % 180;
  Serial.println(mapped_value);

  //IR Sensor
  Serial.print("Ambient: "); Serial.println(vcnl.readAmbient());
  if (vcnl.readAmbient() < 10)
  {
    for (pos = 0; pos <= mapped_value; pos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
  for (pos = mapped_value; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
    delay(1000);
  } else if (vcnl.readAmbient() > 600) 
  {
    delay(3000);
  }

}
