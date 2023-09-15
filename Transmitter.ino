const int buttonPin = 2; // Define the pin where your button is connected
int buttonState = 0;     // Variable to store the button state

void setup() {
  Serial.begin(9600);    // Initialize serial communication
  pinMode(buttonPin, INPUT_PULLUP); // Set the button pin as input with internal pull-up resistor
}

void loop() {
  buttonState = digitalRead(buttonPin); // Read the button state

  if (buttonState == LOW){ // Button is pressed (LOW) when connected to the internal pull-up resistor
    Serial.println("ON");
  } else {
    Serial.println("OFF");
  }
  Serial.println("Hello World");
  delay(100); // Add a small delay to avoid rapid button state changes
}