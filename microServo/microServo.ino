#include <Servo.h>

// C++ code
//
Servo servo;
int pos =0;
void setup()
{
 servo.attach(8);
    servo.write(90);
}

void loop()
{}
