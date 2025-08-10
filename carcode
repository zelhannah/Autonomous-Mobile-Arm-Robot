#define ENA 2
#define IN1 3
#define IN2 4
#define IN3 5
#define IN4 7
#define ENB 6

const int motorSpeed = 150;

void setup() {
  pinMode(ENA, OUTPUT);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
  pinMode(ENB, OUTPUT);
  Serial.begin(9600);
}
void moveForward() {
  analogWrite(ENA, motorSpeed);
  analogWrite(ENB, motorSpeed);
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
}
void moveBackward() {
  analogWrite(ENA, motorSpeed);
  analogWrite(ENB, motorSpeed);
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
}

void turnLeft() {
  analogWrite(ENA, motorSpeed);
  analogWrite(ENB, motorSpeed);
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
  delay(500);
}

void turnRight() {
  analogWrite(ENA, motorSpeed);
  analogWrite(ENB, motorSpeed);
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
  delay(500);
}
void stopCar() {
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
}

void loop() {
  moveForward();
  delay(1000); 
  stopCar();
  delay(500);

  turnRight();
  stopCar();
  delay(500);

  moveForward();
  delay(2000); 
  stopCar();
  delay(500);

  turnLeft();
  stopCar();
  delay(500);
  moveForward();
  delay(900); 
  stopCar();
  delay(16000);

  // Move backward
  moveBackward();
  delay(1000); 
  stopCar();
  delay(500);

  turnLeft();
  stopCar();
  delay(500);

  moveBackward();
  delay(2000); 
  stopCar();
  delay(500);

  turnRight();
  stopCar();
  delay(500);

 moveBackward();
 delay(800); 
 stopCar();

 while (true);
}
