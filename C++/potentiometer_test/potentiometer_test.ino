int myVoltPin = A2;
int readVal;
float V2;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  readVal = analogRead(myVoltPin);
  V2 = (5. / 1023) * readVal;
  if (V2 >= 4.0) {
    digitalWrite(5, HIGH);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
  }
  else if (V2 < 4.0 && V2 > 2.0) {
    digitalWrite(4, HIGH);
    digitalWrite(3, LOW);
    digitalWrite(5, LOW);
  }
  else {
    digitalWrite(3, HIGH);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
  }
  
  Serial.print("Potentiometer Voltage is: ");
  Serial.println(V2);
  delay(250);
}
