#include <Braccio.h>
#include <Servo.h>

Servo base;
Servo shoulder;
Servo elbow;
Servo wrist_rot;
Servo wrist_ver;
Servo gripper;

void setup()
{
  Braccio.begin();
  Serial.begin(9600);
  Serial.println("Braccio Pick and Place Started");
  Braccio.ServoMovement(20, 90, 90, 90, 90, 90, 10);
  delay(2000);
}

void loop()
{
  //  Move Near Object
  Braccio.ServoMovement(20, 90, 70, 50, 90, 90, 10);
  delay(1500);
  //  Lower Arm
  Braccio.ServoMovement(20, 90, 95, 40, 90, 90, 10);
  delay(1500);
  //  Close Gripper
  Braccio.ServoMovement(20, 90, 95, 40, 90, 90, 73);
  delay(1500);
  // Lift Object
  Braccio.ServoMovement(20, 90, 70, 50, 90, 90, 73);
  delay(1500);
  // Rotate to Destination
  Braccio.ServoMovement(20, 160, 70, 50, 90, 90, 73);
  delay(2000);
  //  Lower Object
  Braccio.ServoMovement(20, 160, 95, 40, 90, 90, 73);
  delay(1500);
  //Release Object
  Braccio.ServoMovement(20, 160, 95, 40, 90, 90, 10);
  delay(1500);
  //Move Arm Up
  Braccio.ServoMovement(20, 160, 70, 50, 90, 90, 10);
  delay(1500);
  // Return to Home Position
  Braccio.ServoMovement(20, 90, 90, 90, 90, 90, 10);
  delay(3000);
  while(1);
}
