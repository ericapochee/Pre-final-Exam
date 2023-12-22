const int soundPin = D4; // Use any digital pin, e.g., D2

void setup() {
  Serial.begin(115200);
  
}

void loop() {
  int soundValue = digitalRead(soundPin);

  if (soundValue == HIGH) {
    Serial.println("Sound detected!");
  } else {
    Serial.println("Quiet");
  }

  delay(1000); // Adjust delay based on your requirements
}