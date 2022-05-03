//
//  FILE: lightning.pde
//  AUTHOR: Rob Tillaart
//  2nd Author: Adrian Sanabria-Diaz
//  DATE: 2012-05-08
//
//  PURPOSE: Simulate Lightning effect on multiple LEDs
//  
//  Adrian: Added loop for multi LED support
//
#define BETWEEN 2579
#define DURATION 43 
#define TIMES 7

unsigned long lastTime = 0;
int waitTime = 0;

void setup()
{
  Serial.begin(115200);
  Serial.println("\nStarting Up...");
  
  // Loop through PWM Pins 9, 10, and 11
  for (int thisPin = 9; thisPin < 12; thisPin++) {
    pinMode(thisPin, OUTPUT); 
  }
}

void loop()
{
  if (millis() - waitTime > lastTime)  // time for a new flash
  {
    // adjust timing params
    lastTime += waitTime;
    waitTime = random(BETWEEN);
    
    // Loop through PWM Pins 9, 10, and 11
    for (int thisPin = 9; thisPin < 12; thisPin++) {
      for (int i=0; i< random(TIMES); i++)
        {
          //String spin = char(thisPin)
//          Serial.println("Lightning Detected! Pin " + thisPin + " Detected" );
          Serial.println(thisPin);
          //  + millis()
          digitalWrite(thisPin, HIGH);
          delay(20 + random(DURATION));
          digitalWrite(thisPin, LOW);
          delay(10);
        }
      }
  }
  // do other stuff here
}
