//
//  FILE: lightning_led.ino
//  AUTHOR: Rob Tillaart
//  2nd Author: Adrian Sanabria-Diaz
//  DATE: 2022-05-03
//
//  PURPOSE: simulate lighning POC
//
//  Adrian: Added loop for multi LED support selected at random
//
#define BETWEEN 2579
#define DURATION 43
#define TIMES 7

const int myPWMArray [] = {3, 5, 6, 9, 10, 11};

unsigned long lastTime = 0;
int waitTime = 0;

void setup()
{
  Serial.begin(115200);
  Serial.println("\nStarting Up...");

  // Loop through PWM Pins in the myPWMArray
  for (int thisPin : myPWMArray) {
    pinMode(thisPin, OUTPUT);
  }
}

void loop()
{
  if (millis() - waitTime > lastTime)  // time for a new flash
  {
    // Adjust timing parameters
    lastTime += waitTime;
    waitTime = random(BETWEEN);

    // Loop through PWM Pins in the myPWMArray
    for (int thisPin : myPWMArray) {
      for (int i = 0; i < random(TIMES); i++)
      {
        Serial.println(thisPin);
        digitalWrite(thisPin, HIGH);
        delay(100 + random(DURATION));
        digitalWrite(thisPin, LOW);
        delay(10);
      }
    }
  }
  // do other stuff here
}
