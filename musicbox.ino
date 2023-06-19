#include <Adafruit_CircuitPlayground.h>

// we light one pixel at a time, this is our counter
uint8_t pixeln = 0;
int capSensorPins[] = {3,2,0,1,6,9,10};
int numCapSensors = 7;
int ledForCap[] = {0,1,3,4,6,8,9};
// {  3,  2,  0,  1, 6,  9, 10}
// { A4, A5, A6, A7, A1, A2, A3}
// 3 -> A4, 2 -> A5, 0
int lightValue;


void setup() {
  Serial.begin(9600);
  Serial.println("Circuit Playground test!");

  CircuitPlayground.begin();
  CircuitPlayground.speaker.enable(true);
}

void loop() {
  // turn off speaker when not in use
  //CircuitPlayground.speaker.enable(false);

  lightValue = CircuitPlayground.lightSensor();
  Serial.print("Light Sensor: ");
  Serial.println(lightValue);

if (lightValue>50){
//If the light value is more than 50, turn on the music box
       
       for ( int neopixel = 0; neopixel < 10; neopixel++ )
  {
    // turn all neopixels to purple
    CircuitPlayground.setPixelColor(neopixel, 55,   0,   128);
  }

  //Play a tune
  //play Bb4
  CircuitPlayground.playTone(233, 100);
  delay(400);
  //play Bb4
  CircuitPlayground.playTone(233, 100);
  delay(400);
  //play Bb4
  CircuitPlayground.playTone(233, 100);
  delay(400);
  //play Bb4
  CircuitPlayground.playTone(233, 100);
  delay(450);
  //play Bb3
  CircuitPlayground.playTone(233, 100);
  delay(350);
  //play D4
  CircuitPlayground.playTone(293.66, 100);
  delay(300);
  // play F4
  CircuitPlayground.playTone(349.23, 100);
  delay(300);
  // play F4
  CircuitPlayground.playTone(349.23, 100);
  delay(300);
  // play Eb4
  CircuitPlayground.playTone(311, 100);
  delay(300);
  //play D4
  CircuitPlayground.playTone(293.66, 100);
  delay(300);
  //play C4
  CircuitPlayground.playTone(261.63, 100);
  delay(300);
   //play C4
  CircuitPlayground.playTone(261.63, 100);
  delay(300);
  //play Bb3
  CircuitPlayground.playTone(233, 100);
  delay(400);

  //play Bb3
  CircuitPlayground.playTone(233, 100);
  delay(350);
  //play D4
  CircuitPlayground.playTone(293.66, 100);
  delay(300);
  // play F4
  CircuitPlayground.playTone(349.23, 100);
  delay(300);
  // play F4
  CircuitPlayground.playTone(349.23, 100);
  delay(300);
  // play Eb4
  CircuitPlayground.playTone(311, 100);
  delay(300);
  //play D4
  CircuitPlayground.playTone(293.66, 100);
  delay(300);
  // play Eb4
  CircuitPlayground.playTone(311, 100);
  delay(300);
  //play D4
  CircuitPlayground.playTone(293.66, 100);
  delay(400);

  //play Bb3
  CircuitPlayground.playTone(233, 100);
  delay(350);
  //play D4
  CircuitPlayground.playTone(293.66, 100);
  delay(300);
  // play F4
  CircuitPlayground.playTone(349.23, 100);
  delay(300);
  // play F4
  CircuitPlayground.playTone(349.23, 100);
  delay(300);
  // play Eb4
  CircuitPlayground.playTone(311, 100);
  delay(300);
  //play D4
  CircuitPlayground.playTone(293.66, 100);
  delay(300);
  //play C4
  CircuitPlayground.playTone(261.63, 100);
  delay(300);
   //play C4
  CircuitPlayground.playTone(261.63, 100);
  delay(300);

  //play Bb3
  CircuitPlayground.playTone(233, 100);
  delay(300);
  //play Bb3
  CircuitPlayground.playTone(233, 100);
  delay(350);
  //play D4
  CircuitPlayground.playTone(293.66, 100);
  delay(300);
  // play F4
  CircuitPlayground.playTone(349.23, 100);
  delay(300);
  // play F4
  CircuitPlayground.playTone(349.23, 100);
  delay(300);
  // play Eb4
  CircuitPlayground.playTone(311, 100);
  delay(300);
  //play D4
  CircuitPlayground.playTone(293.66, 100);
  delay(300);
  // play Eb4
  CircuitPlayground.playTone(311, 100);
  delay(300);
  //play D4
  CircuitPlayground.playTone(293.66, 100);
  delay(400);


  //play Bb3
  CircuitPlayground.playTone(233, 100);
  delay(300);
  //play Bb3
  CircuitPlayground.playTone(233, 100);
  delay(300);
  //play Bb3
  CircuitPlayground.playTone(233, 100);
  delay(300);
  //play G3
  CircuitPlayground.playTone(196, 100);
  delay(300);
  //play Bb3
  CircuitPlayground.playTone(233, 100);
  delay(350);
  //play Bb3
  CircuitPlayground.playTone(233, 100);
  delay(300);
  //play G3
  CircuitPlayground.playTone(196, 100);
  delay(300);
   //play Bb3
  CircuitPlayground.playTone(233, 100);
  delay(300);
  //play G3
  CircuitPlayground.playTone(196, 100);
  delay(400);


  //play D4
  CircuitPlayground.playTone(293.66, 100);
  delay(300);
  //play C4
  CircuitPlayground.playTone(261.63, 100);
  delay(350);
  //play Bb3
  CircuitPlayground.playTone(233, 100);
  delay(300);
  //play D4
  CircuitPlayground.playTone(293.66, 100);
  delay(300);
  //play C4
  CircuitPlayground.playTone(261.63, 100);
  delay(350);
   //play Bb3
  CircuitPlayground.playTone(233, 100);
  delay(300);
   //play Bb3
  CircuitPlayground.playTone(233, 100);
  delay(300);

  
delay(1000);
delay(5000);
  

    delay(10);

  //If the board is touched, change the color of neopixels and plays another tune
  for ( int i = 0; i < numCapSensors; i++ )
  {
    Serial.print("Capsense #");
    Serial.print(capSensorPins[i]);
    Serial.print(": ");
    Serial.println(CircuitPlayground.readCap(capSensorPins[i]));
    if(CircuitPlayground.readCap(capSensorPins[i])  > 300){
      // for every neopixel starting at 0 up to (but not including 10)
            for ( int neopixel = 0; neopixel < 10; neopixel++ )
            {
              
              //turn the neopixels to pink
              CircuitPlayground.setPixelColor(neopixel, 194,   2,   130);
            }
  
  //Plays Für Elise
  // play e4
  delay(600);
  CircuitPlayground.playTone(329.63, 100);
  delay(350);
  // play d4# 
  CircuitPlayground.playTone(311.13, 100);
  delay(350);
  // play e4
  CircuitPlayground.playTone(329.63, 100);
  delay(350);
  // play d4# 
  CircuitPlayground.playTone( 311.13, 100);
  delay(350);
  // play e4
  CircuitPlayground.playTone(329.63, 100);
  delay(350);
  // play b3
  CircuitPlayground.playTone( 246.94, 100);
  delay(400);
  // play d4
  CircuitPlayground.playTone(293.66, 100);
  delay(400);
  // play c4
  CircuitPlayground.playTone(261.63, 100);
  delay(400);
  // play a3
  CircuitPlayground.playTone(220, 100);
  delay(1000);
  // play d3
  CircuitPlayground.playTone(146.83,100);
  delay(350);
  //play f3
  CircuitPlayground.playTone(174.61, 100);
  delay(400);
  //play a3
  CircuitPlayground.playTone(220, 100);
  delay(400);
  // play b3
  CircuitPlayground.playTone(246.94, 100);
  delay(1000);
  // play f3
  CircuitPlayground.playTone(174.61, 100);
  delay(400);
  // play a3#
  CircuitPlayground.playTone(233.08, 100);
  delay(400);
  // play b3
  CircuitPlayground.playTone(246.94, 100);
  delay(400);
  // play c4
  CircuitPlayground.playTone(261.63, 100);
  delay(1000);
  delay(300);
  // play e4
  CircuitPlayground.playTone(329.63, 100);
  delay(400);
  // play d4#
  CircuitPlayground.playTone(311.13, 100);
  delay(400);
  // play e4
  CircuitPlayground.playTone(329.63, 100);
  delay(400);
  // play d4#
  CircuitPlayground.playTone(311.13, 100);
  delay(400);
  // play e4
 CircuitPlayground.playTone(329.63, 100);
  delay(400);
  // play b3
  CircuitPlayground.playTone( 246.94, 100);
  delay(400);
  // play d4
 CircuitPlayground.playTone(293.66, 100);
  delay(400);
  // play c4
   CircuitPlayground.playTone(261.63, 100);
  delay(400);
  // play a3
  CircuitPlayground.playTone(220, 100);
  delay(1000);
  // play d3
   CircuitPlayground.playTone(146.83,100);
  delay(400);
  // play f3
   CircuitPlayground.playTone(174.61, 100);
  delay(400);
  // play a3
  CircuitPlayground.playTone(220, 100);
  delay(400);
  // play b3
  CircuitPlayground.playTone( 246.94, 100);
  delay(1000);
  // play f3
   CircuitPlayground.playTone(174.61, 100);
  delay(400);
  // play c4
   CircuitPlayground.playTone(261.63, 100);
  delay(400);
  // play b3
 CircuitPlayground.playTone( 246.94, 100);
  delay(400);
  // play a3
  CircuitPlayground.playTone(220, 100);
  delay(1000);
  // play b3
  CircuitPlayground.playTone( 246.94, 100);
  delay(400);
   // play c4
   CircuitPlayground.playTone(261.63, 100);
  delay(400);
  // play d4
    CircuitPlayground.playTone(293.66, 100);
  delay(400);
  // play e4
 CircuitPlayground.playTone(329.63, 100);
  delay(1000);
  // play g3
  CircuitPlayground.playTone(196, 100);
  delay(400);
  // play f4
  CircuitPlayground.playTone(349.23, 100);
  delay(400);
  //play e4
  CircuitPlayground.playTone(329.63, 100);
  delay(400);
  // play d4
   CircuitPlayground.playTone(293.66, 100);
  delay(1000);
  // play e3
  CircuitPlayground.playTone(164.81,100);
  delay(400);
  // play e4
  CircuitPlayground.playTone(329.63, 100);
  delay(400);
  // play d4
    CircuitPlayground.playTone(293.66, 100);
  delay(400);
  // play c4
   CircuitPlayground.playTone(261.63, 100);
  delay(1000);
  // play d3
   CircuitPlayground.playTone(146.83,100);
  delay(400);
    // play d4
    CircuitPlayground.playTone(293.66, 100);
  delay(400);
  // play c4
   CircuitPlayground.playTone(261.63, 100);
  delay(400);
  // play b3
 CircuitPlayground.playTone( 246.94, 100);
  delay(1000);
  delay(400);
  // play e4
 CircuitPlayground.playTone(329.63, 100);
  delay(400);
  // play d4# 
  CircuitPlayground.playTone(311.13, 100);
  delay(350);
  // play e4
 CircuitPlayground.playTone(329.63, 100);
  delay(350);
  // play d4# 
  CircuitPlayground.playTone(311.13, 100);
  delay(350);
  // play e4
  CircuitPlayground.playTone(329.63, 100);
  delay(350);
  // play b3
  CircuitPlayground.playTone( 246.94, 100);
  delay(400);
  // play d4
    CircuitPlayground.playTone(293.66, 100);
  delay(400);
  // play c4
   CircuitPlayground.playTone(261.63, 100);
  delay(400);
  // play a3
  CircuitPlayground.playTone(220, 100);
  delay(1000);
  // play d3
  CircuitPlayground.playTone(146.83,100);
  delay(350);
  //play f3
   CircuitPlayground.playTone(174.61, 100);
  delay(400);
  //play a3
  CircuitPlayground.playTone(220, 100);
  delay(400);
  // play b3
  CircuitPlayground.playTone( 246.94, 100);
  delay(1000);
  // play f3
   CircuitPlayground.playTone(174.61, 100);
  delay(400);
  // play a3
  CircuitPlayground.playTone(220, 100);
  delay(400);
  // play b3
  CircuitPlayground.playTone( 246.94, 100);
  delay(400);
  // play c4
   CircuitPlayground.playTone(261.63, 100);
  delay(1000);
  delay(300);
  // play e4
  CircuitPlayground.playTone(329.63, 100);
  delay(400);
  // play d4#
  CircuitPlayground.playTone(311.13, 100);
  delay(400);
  // play e4
 CircuitPlayground.playTone(329.63, 100);
  delay(400);
  // play d4#
  CircuitPlayground.playTone(311.13, 100);
  delay(400);
  // play e4
 CircuitPlayground.playTone(329.63, 100);
  delay(400);
  // play b3
  CircuitPlayground.playTone( 246.94, 100);
  delay(400);
  // play d4
   CircuitPlayground.playTone(293.66, 100);
  delay(400);
  // play c4
   CircuitPlayground.playTone(261.63, 100);
  delay(400);
  // play a3
 CircuitPlayground.playTone(220, 100);
  delay(1000);
  // play d3
  CircuitPlayground.playTone(146.83,100);
  delay(400);
  // play f3
   CircuitPlayground.playTone(174.61, 100);
  delay(400);
  // play a3
  CircuitPlayground.playTone(220, 100);
  delay(400);
  // play b3
  CircuitPlayground.playTone( 246.94, 100);
  delay(1000);
  // play f3
  CircuitPlayground.playTone(174.61, 100);
  delay(400);
  // play c4
   CircuitPlayground.playTone(261.63, 100);
  delay(400);
  // play b3
  CircuitPlayground.playTone( 246.94, 100);
  delay(400);
  // play a3
  CircuitPlayground.playTone(220, 100);
  delay(1000);
  
  delay(5000);
            
  }}

 //Check for light value again, and turn off sounds if the light value is less than 50
 if(lightValue < 50){
  for ( int neopixel = 0; neopixel < 10; neopixel++ )
  {
    // turn the Neopixel off by specifying:
    // no red, no green and no blue
    CircuitPlayground.setPixelColor(neopixel, 0,   0,   0);
  }
 }
 
}
//Turn off both lights and sound when light value is less than 50
else{
   for ( int neopixel = 0; neopixel < 10; neopixel++ )
  {
    
    //Turn off neopixels
    CircuitPlayground.setPixelColor(neopixel, 0,   0,   0);
  }
  
}
}

 
