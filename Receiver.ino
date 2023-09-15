const int motorPin = 9; // Define the digital pin where the motor is connected

void setup() {
  Serial.begin(9600); // Initialize serial communication
  pinMode(motorPin, OUTPUT); // Set the motor pin as an output
}

void loop() {
  if (Serial.available() > 0) {
    String command = Serial.readString(); // Read the serial input as a string

    if (command == "ON") {
      digitalWrite(motorPin, HIGH); // Turn the motor on
      Serial.println("Motor is ON");
    } else if (command == "OFF") {
      digitalWrite(motorPin, LOW); // Turn the motor off
      Serial.println("Motor is OFF");
    }
  }
}
