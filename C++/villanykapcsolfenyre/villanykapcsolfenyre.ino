#include <Adafruit_NeoPixel.h>
#define PIN 6
#define LED_DB 8

Adafruit_NeoPixel ledSor(LED_DB, PIN, NEO_GRB + NEO_KHZ800);
int potPin = 0;

// C++ code
//
void setup()
{
  ledSor.begin();
}

void loop()
{
	int reading = analogRead(potPin);
	int numLEDSLit = reading / 60; //1023/9/2
	if (numLEDSLit > 8) numLEDSLit = 8;
	ledSor.clear();
	for(int i=0; i<numLEDSLit; i++) {
		ledSor.setPixelColor(i, ledSor.Color(15, 15, 0));
	}
	ledSor.show();
	delay(500);
}