// Motor driver pin mapping
const int EN1 = 9;   // L293D pin 1 (Motor 1 enable)
const int EN2 = 10;  // L293D pin 9 (Motor 2 enable)
const int IN1 = 2;   // L293D pin 2
const int IN2 = 3;   // L293D pin 7
const int IN3 = 4;   // L293D pin 10
const int IN4 = 5;   // L293D pin 15

void setup() {
  // Set all pins as outputs
  pinMode(EN1, OUTPUT);
  pinMode(EN2, OUTPUT);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);

  // Enable both motors at full speed
  digitalWrite(EN1, HIGH);
  digitalWrite(EN2, HIGH);
}

void loop() {
  // FORWARD
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
  delay(1500);

  // STOP
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
  delay(500);

  // REVERSE
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
  delay(1500);

  // STOP
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
  delay(500);
}
