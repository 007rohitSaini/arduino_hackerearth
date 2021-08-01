// C++ code
//
#include <Servo.h>

int pos = 0;

Servo servo_9;

Servo servo_0;

Servo servo_8;

void setup()
{
  pinMode(A0, INPUT);
  Serial.begin(9600);

  servo_9.attach(9, 500, 2500);

  servo_0.attach(0);

  servo_8.attach(8, 500, 2500);

}

void loop()
{
  Serial.println(analogRead(A0));
  if (analogRead(A0) == 7) {
    if (servo_9.read() == 90 && servo_0.read() == 90) {
      servo_8.write(180);
      servo_9.write(180);
    } else {
      servo_8.write(90);
      servo_9.write(90);
    }
  }
  delay(10); // Delay a little bit to improve simulation performance
}