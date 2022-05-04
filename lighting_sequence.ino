//
//  FILE: light_sequence.ino
//  Author: Adrian Sanabria-Diaz
//  DATE: 2022-05-03
//
//  PURPOSE:  Create Sequencing Lights through a series of Pins.
//            Using PWM pins from a previous project which isn't necessary
//            unless you're needing to adjust the brightness
//  
//  Adrian: Added loop for multi LED support
//

const int myPWMArray [] = {3,5,6,9,10,11};

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
  { 
    // Loop through PWM Pins in the myPWMArray
    for (int thisPin : myPWMArray) {

      Serial.println(thisPin);
      //  + millis()
      digitalWrite(thisPin, HIGH);
      delay(25);
      digitalWrite(thisPin, LOW);
      delay(25);
      }
     delay(250);
  }
  // do other stuff here
}
