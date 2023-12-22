const int tiltPin = D4; 

void setup() {
  Serial.begin(115200);
  pinMode(tiltPin, INPUT);
}

void loop() {
  int tiltValue = digitalRead(tiltPin);

  if (tiltValue == HIGH) {
    Serial.println("Tilt detected!");
  } else {
    Serial.println("Not tilted");
  }

  delay(500); 
}
