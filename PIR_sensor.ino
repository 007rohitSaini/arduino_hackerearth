// C++ code
//
int pir = 0;

void setup()
{
  pinMode(2, INPUT);
  Serial.begin(9600);

  pinMode(3, OUTPUT);
}

void loop()
{
  pir = digitalRead(2);
  Serial.println(pir);
  delay(100); // Wait for 100 millisecond(s)
  if (pir == 1) {
    digitalWrite(3, HIGH);
  } else {
    digitalWrite(3, LOW);
  }
}
