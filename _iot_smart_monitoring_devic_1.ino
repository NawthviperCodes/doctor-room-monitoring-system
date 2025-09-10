int redLED = 8;
int greenLED = 9;

void setup() {
  pinMode(redLED, OUTPUT);
  pinMode(greenLED, OUTPUT);
}

void loop() {
  // Doctor in office
  digitalWrite(redLED, HIGH);
  digitalWrite(greenLED, LOW);
  delay(5000);  // 5 seconds

  // Doctor in operation room
  digitalWrite(redLED, LOW);
  digitalWrite(greenLED, HIGH);
  delay(5000);  // 5 seconds
}
