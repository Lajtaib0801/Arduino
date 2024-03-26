int ledPin = 4;
int buttonApin = 12; 
int buttonBpin = 8;

void setup()
{
  Serial.begin(9600);
	pinMode(ledPin, OUTPUT); 
	pinMode(buttonApin,  INPUT_PULLUP); 
	pinMode(buttonBpin,  INPUT_PULLUP);
}
void loop()
{
	if (digitalRead(buttonApin) == LOW)
	{
		digitalWrite(ledPin, HIGH);
      Serial.println("A led bekapcsolva");
	}
	if (digitalRead(buttonBpin) == LOW)
	{
		digitalWrite(ledPin, LOW);
      Serial.println("A led kikapcsolva");
	}
}