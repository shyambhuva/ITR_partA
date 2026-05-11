#include <Braccio.h>
#include <Servo.h>

Servo base, shoulder, elbow, wrist_ver, wrist_rot, gripper;

void setup() {
    Braccio.begin();
}

void loop() {
    // Step 1: Home position
    Braccio.ServoMovement(20, 90, 90, 90, 90, 90, 73);
    delay(2000);

    // Step 2: Move above object (paper ball position)
    Braccio.ServoMovement(20, 90, 130, 60, 90, 90, 10);
    delay(1500);

    // Step 3: Lower to grasp
    Braccio.ServoMovement(20, 90, 150, 40, 90, 90, 10);
    delay(1000);

    // Step 4: Close gripper to grasp paper ball
    Braccio.ServoMovement(20, 90, 150, 40, 90, 90, 73);
    delay(1000);

    // Step 5: Lift object
    Braccio.ServoMovement(20, 90, 110, 70, 90, 90, 73);
    delay(1500);

    // Step 6: Move to handover position
    Braccio.ServoMovement(20, 45, 100, 80, 90, 90, 73);
    delay(2000);

    // Step 7: Hold here — wait for Arm 2 to grasp
    delay(4000);

    // Step 8: Open gripper to release
    Braccio.ServoMovement(20, 45, 100, 80, 90, 90, 10);
    delay(1500);

    // Step 9: Return home
    Braccio.ServoMovement(20, 90, 90, 90, 90, 90, 73);
    delay(2000);

    while(true); // Stop after one cycle
}void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}
