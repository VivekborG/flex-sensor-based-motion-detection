const int flexpin = A0; // Analog pin connected to the flex sensor

void setup() {
  pinMode(2, OUTPUT); // Red LED
  pinMode(3, OUTPUT); // Green LED
  Serial.begin(9600); // Start serial communication
}

void loop() {
  int flexposition = analogRead(flexpin); // Read flex sensor value
  Serial.println(flexposition); // Print value to serial monitor

  if (flexposition > 50) { // If bending is detected
    Serial.println("Bending Detected - LED ON");
    digitalWrite(2, HIGH); // Turn on Red LED
    digitalWrite(3, LOW);  // Turn off Green LED
  } 
  else {
    digitalWrite(2, LOW);  // Turn off Red LED
    digitalWrite(3, HIGH); // Turn on Green LED
  }
  delay(1000); // Wait for 1 second
}
