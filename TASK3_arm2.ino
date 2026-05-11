#include <Braccio.h>
#include <Servo.h>

Servo base, shoulder, elbow, wrist_ver, wrist_rot, gripper;

void setup() {
    Braccio.begin();
}

void loop() {
    // Step 1: Home position
    Braccio.ServoMovement(20, 90, 90, 90, 90, 90, 10);
    delay(2000);

    // Step 2: Wait for Arm 1 to reach handover point
    delay(7000);

    // Step 3: Move above handover position
    Braccio.ServoMovement(20, 135, 100, 80, 90, 90, 10);
    delay(1500);

    // Step 4: Align gripper at handover point
    Braccio.ServoMovement(20, 135, 110, 70, 90, 90, 10);
    delay(1000);

    // Step 5: Close gripper to grasp object
    Braccio.ServoMovement(20, 135, 110, 70, 90, 90, 73);
    delay(1500);

    // Step 6: Lift object
    Braccio.ServoMovement(20, 135, 90, 90, 90, 90, 73);
    delay(1500);

    // Step 7: Move to destination Point B
    Braccio.ServoMovement(20, 180, 130, 60, 90, 90, 73);
    delay(2000);

    // Step 8: Lower to place
    Braccio.ServoMovement(20, 180, 150, 40, 90, 90, 73);
    delay(1000);

    // Step 9: Open gripper to release
    Braccio.ServoMovement(20, 180, 150, 40, 90, 90, 10);
    delay(1000);

    // Step 10: Return home
    Braccio.ServoMovement(20, 90, 90, 90, 90, 90, 10);
    delay(2000);

    while(true); // Stop after one cycle
}
