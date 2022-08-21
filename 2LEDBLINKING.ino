
int yellow = 12;// connect Yellow LED to digital pin 12 of Arduino
int blue = 11;// connect Yellow LED to digital pin 11 of Arduino

void setup() {
  // initialize digital pins as an output.
  pinMode(yellow, OUTPUT);
  pinMode(blue, OUTPUT);
}

void loop() {
  digitalWrite(yellow, HIGH);
  digitalWrite(blue, LOW);
  delay(1000);
  digitalWrite(yellow, LOW);
  digitalWrite(blue, HIGH);
  delay(1000);
}
