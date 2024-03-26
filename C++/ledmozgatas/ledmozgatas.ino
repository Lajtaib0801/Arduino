#include <Adafruit_NeoPixel.h>
#define PIN 6
#define LED_DB 8

Adafruit_NeoPixel ledSor(LED_DB, PIN, NEO_GRB + NEO_KHZ800);
int potPin = 0;
void setup() {
  ledSor.begin();
}

void loop() {
  int reading = analogRead(potPin);
  ledSor.clear();
  int numLEDSLit = reading / 114;
  if (numLEDSLit == 0) {
    ledSor.setPixelColor(0, ledSor.Color(0, 150, 0));

  }
  for (int i = 0; i < numLEDSLit; i++) {
    ledSor.clear();
      ledSor.setPixelColor(i, ledSor.Color(0, 150, 0));

  }
  ledSor.show();
  delay(500);
}
