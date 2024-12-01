// Define motor driver pins
const int motorPin1 = 2;  // IN1 (Motor 1 - Left)
const int motorPin2 = 3;  // IN2 (Motor 1 - Left)
const int motorPin3 = 4;  // IN3 (Motor 2 - Right)
const int motorPin4 = 5;  // IN4 (Motor 2 - Right)

// Define pins for ultrasonic sensor
const int trigPin = 6;
const int echoPin = 7;

void setup() {
  // Set motor driver pins as OUTPUT
  pinMode(motorPin1, OUTPUT);
  pinMode(motorPin2, OUTPUT);
  pinMode(motorPin3, OUTPUT);
  pinMode(motorPin4, OUTPUT);

  // Set ultrasonic sensor pins
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  
  Serial.begin(9600);  // Initialize serial communication
}

void loop() {
  long distance = getDistance();
  
  if (distance < 20) {  // If obstacle detected within 20 cm
    stopMotors();
    delay(1000);
    moveBackward();
    delay(1000);
    turnRight();  // or left, depending on how you want to avoid the obstacle
  } else {
    moveForward();
  }
  
  delay(100);
}

// Function to get distance from ultrasonic sensor
long getDistance() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  
  long duration = pulseIn(echoPin, HIGH);
  long distance = (duration / 2) * 0.0344;  // Calculate distance in cm
  return distance;
}

// Function to move the robot forward
void moveForward() {
  digitalWrite(motorPin1, HIGH);  // Left motor forward
  digitalWrite(motorPin2, LOW);   
  digitalWrite(motorPin3, HIGH);  // Right motor forward
  digitalWrite(motorPin4, LOW);   
}

// Function to stop the motors
void stopMotors() {
  digitalWrite(motorPin1, LOW);
  digitalWrite(motorPin2, LOW);
  digitalWrite(motorPin3, LOW);
  digitalWrite(motorPin4, LOW);
}

// Function to move the robot backward
void moveBackward() {
  digitalWrite(motorPin1, LOW);   // Left motor backward
  digitalWrite(motorPin2, HIGH);  
  digitalWrite(motorPin3, LOW);   // Right motor backward
  digitalWrite(motorPin4, HIGH);  
}

// Function to turn the robot right
void turnRight() {
  digitalWrite(motorPin1, HIGH);  // Left motor forward
  digitalWrite(motorPin2, LOW);   
  digitalWrite(motorPin3, LOW);   // Right motor backward
  digitalWrite(motorPin4, HIGH);  
}
