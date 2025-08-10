#include <Servo.h>

Servo baseServo;
Servo shoulderServo;
Servo elbowServo;
Servo gripperServo;

#define BASE_SERVO_PIN 4
#define SHOULDER_SERVO_PIN 8
#define ELBOW_SERVO_PIN 9
#define GRIPPER_SERVO_PIN 13

void setup() {
  Serial.begin(9600);
  baseServo.attach(BASE_SERVO_PIN);
  shoulderServo.attach(SHOULDER_SERVO_PIN);
  elbowServo.attach(ELBOW_SERVO_PIN);
  gripperServo.attach(GRIPPER_SERVO_PIN);

  //initial position
  baseServo.write(90);
  shoulderServo.write(90);
  elbowServo.write(90);
  gripperServo.write(90);
}
void loop() {
  baseServo.write(180);
  delay(300);
  shoulderServo.write(180);
  delay(300);
  elbowServo.write(90);
  delay(300);
  
  // grab the object
  gripperServo.write(0);
  delay(300);
  
  // move back to the center
  shoulderServo.write(90);
  elbowServo.write(90);
  delay(300);
  
  // move to the right side
  baseServo.write(0);
  delay(1000);
  shoulderServo.write(180);
  delay(300);
  elbowServo.write(90);
  delay(300);
  // release the object
  gripperServo.write(10);
  delay(300);

  // move back to the center
  shoulderServo.write(90);
  elbowServo.write(90);
  delay(300);
  
  // return to the neutral position
  baseServo.write(90);
  shoulderServo.write(90);
  elbowServo.write(90);
  gripperServo.write(10);
  
  delay(5000);
}
