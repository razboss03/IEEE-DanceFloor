// #include <OctoWS2811.h>

// New library for LED stuff is here
// https://www.arduino.cc/reference/en/libraries/esp32-digital-rgb-led-drivers/
//

#include <FastCRC.h>
#include <ESP


const int led = LED_BUILTIN;
const int ledPerPanel = 100;
const int numTiles = 2;
const int numLeds = numTiles * ledPerPanel;
unsigned long time = 0;
bool count = false;


DMAMEM int displayMemory[numLeds * 6];

int drawingMemory[numLeds * 6];

const int config = WS2811_GRB | WS2811_800kHz;



OctoWS2811 leds(numLeds, displayMemory, drawingMemory, config);

#define ORANGE 0xE05800
#define WHITE  0xFFFFFF


void setup() {

  pinMode(led, OUTPUT);

  // put your setup code here, to run once:

  leds.begin();

  leds.show();

  Serial.begin(0);

  time = millis();
}



void loop() {

  if (millis() - time > 250) {
    time = millis();
    count = !count;
  }


  for (int i = 0, i < numLeds, i++) {
      if (i%2 == 0) {
        if ((i+count)%2s == 0) {
          leds.setPixel(i,ORANGE);
          leds.show();
        } else {
          leds.setPixel(i,WHITE);
          leds.show();
        }
        delayMicroseconds(wait);
      }
  }
}

