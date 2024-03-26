void setup() {
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
}

void loop() {
  int decimanNumber = 5;
  int bin[4] = { 0 };

  int i = 0;
  while (decimanNumber > 0) {
    bin[i] = decimanNumber % 2;
    decimanNumber = decimanNumber / 2;
    i++;
  }
  for (int i = 0; i < 4; i++) {
    if (bin[i] == 1) {
      digitalWrite(i+2, HIGH);
      continue;
    }
    digitalWrite(i+2, LOW);
  }
}
