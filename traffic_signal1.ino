// C++ code
//
int yellow = 11;
int green = 9;
void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
  digitalWrite(LED_BUILTIN, HIGH);
  delay(10000); // Wait for 1000 millisecond(s)
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  {
  digitalWrite(yellow, HIGH);
  delay(5000);
  digitalWrite(yellow, LOW);
  delay(1000);
  }
  {
    digitalWrite(green, HIGH);
    delay(10000);
    digitalWrite(green, LOW);
    delay(1000);
  }
}