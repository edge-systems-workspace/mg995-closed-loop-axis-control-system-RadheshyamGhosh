#include <Arduino.h>
Servo myServo;
void setup() {
    Serial.begin(9600);
    myServo.attach(9);
    Serial.println("Servo intiate");

}
