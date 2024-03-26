String msg = "How many blinks do you want:";
int blingTime = 500;
int redPin = 12;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(redPin, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(msg);
  while (Serial.available() == 0) {
    delay(500);
  }
  int numBlinks = Serial.parseInt();
  for (int j = 1; j<=numBlinks; j++) {
    digitalWrite(redPin, HIGH);
    delay(blingTime);
    digitalWrite(redPin, LOW);
    delay(blingTime);
  }
}
