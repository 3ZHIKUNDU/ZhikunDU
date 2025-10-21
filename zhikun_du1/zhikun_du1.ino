// C++ code
//
void setup()
{
  pinMode(A0, INPUT);
  pinMode(8, OUTPUT);
}

void loop()
{
  if (analogRead(A0) > 400) {
    digitalWrite(8, HIGH);
  } else {
    digitalWrite(8, LOW);
  }
  delay(10); // Delay a little bit to improve simulation performance
}