void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(12, HIGH);
  delay(3000);
  digitalWrite(11, HIGH);
  delay(2000);
  digitalWrite(12, LOW);
  digitalWrite(11, LOW);
  digitalWrite(10, HIGH);
  delay(3000);
  digitalWrite(10, LOW);
  digitalWrite(11, HIGH);
  delay(3000);
  digitalWrite(12, LOW);
  delay(3000);
  digitalWrite(11, LOW);                   // wait for a second
}
