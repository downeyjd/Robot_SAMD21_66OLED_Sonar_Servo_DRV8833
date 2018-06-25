#include <SFE_MicroOLED.h>
//#include <Servo.h>
#include <SPI.h>
#include <Wire.h>

#define OLED_DC    8
#define OLED_CS    10
#define OLED_RESET 9
//#define pwPin
//#define trigPin
MicroOLED display(OLED_RESET, OLED_DC, OLED_CS);
//Servo servo1;

//long pulse, cm, barHeight;
//int pos = 0;

void setup()   {
  SerialUSB.begin(9600);
  SerialUSB.println("And we're off!");
  /*pinMode(pwPin, INPUT);
    pinMode(trigPin, OUTPUT);
    servo1.attach(A1);*/
  display.begin();
  display.clear(PAGE);
  display.clear(ALL);
  display.rectFill(7, 5, 35, 5);
  display.display();
}


void loop() {
  /*display.clearDisplay();
    display.setCursor(0,0);

    // pulse the trigger pin, at least 10usec
    digitalWrite(trigPin, LOW);
    delayMicroseconds(2);
    digitalWrite(trigPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin, LOW);

    // pull in echo pulse, conv. usec travel time to cm
    pulse = pulseIn(pwPin, HIGH, 8890);
    if (pulse == 0) cm = 120;
    else cm = pulse / (2*29.1);
    SerialUSB.println(cm);

    //draw graph
    barHeight = map(cm, 0, 120, 0, display.height()-10);
    display.fillRect(0, display.height()-barHeight-10, display.width(), barHeight, WHITE);
    display.setCursor(0, display.height()-8);
    display.print(cm);
    display.print(" cm");
    display.display();
    for (pos = 0; pos <= 180; pos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    servo1.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
    }
    for (pos = 180; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
    servo1.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
    }*/
}
