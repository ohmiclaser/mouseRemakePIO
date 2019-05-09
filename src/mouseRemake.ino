#include <Arduino.h>
#include <Mouse.h> //import a librarie for the mouse clicking.
#include <Keyboard.h> //import a librarie for the Keyboard press's.

const byte key1Pin = (0); //used for keystrokes like 1,2 or 3.
const byte key2Pin = (1);
const byte key3Pin = (2);

const int volUpPin = (3);
const int volDownPIn = (4);

const byte leftClickPin = (5); //This pin is for clicking the left button.

const byte onPin = (6);

const int pinListKeys [3] = {key1Pin,key2Pin,key3Pin}; 
const int doListKeys [3] = {49,50,51};

const short int standerdRandomNumber = 0;
const short int standardMax = (78);
const short int standardMin =(55);

const short int fastRandomNumber = 0;
const short int fastMax = (55);
const short int fastMin =(33);

const short int slowRandomNumber = 0;
const short int slowMax = (78);
const short int slowMin =(85);


void setup() {
  // put your setup code here, to run once:
  Mouse.begin();
  pinMode(key1Pin, INPUT_PULLUP);
  pinMode(key2Pin, INPUT_PULLUP);
  pinMode(key3Pin, INPUT_PULLUP);
  pinMode(volUpPin, INPUT_PULLUP);
  pinMode(volDownPIn, INPUT_PULLUP);
  pinMode(onPin, INPUT_PULLUP);
  pinMode(leftClickPin, INPUT_PULLUP);
}


void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(leftClickPin) == LOW){
      Mouse.click();
      Serial.print("click");
      delay (standerdRandomNumber = random (standardMin, standardMax));
      Serial.println(standerdRandomNumber);
  }
  //This forloop is for Keyboard key.
  for(int i=0;i<3;i++){ //
    if(digitalRead(pinListKeys[i]) == LOW){
      Keyboard.press(doListKeys[i]);
    }
    else{
      Keyboard.release(doListKeys[i]);
    } 
  }
  if (digitalRead(volUpPin) == LOW){

  }
  if (digitalRead(volDownPIn) == LOW){

  }
  
}
//Too do

// add button for mouse centering.
// add vol mute with MEDIA_VOLUME_MUTE.
//MEDIA_VOLUME_UP
//MEDIA_VOLUME_DOWN
//add mouse to move to the midle of the screen on button press.