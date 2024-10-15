#include <FastLED.h>

#if !defined(FASTLED_RMT5) || !FASTLED_RMT5
#error "This example requires the FASTLED_RMT5 option to be enabled in your FastLED platform configuration."
#endif

#define DATA_PIN 9;

const int leds_per_panel = 100;
const int num_tiles = 2;
const int NUM_LEDS = num_tiles * leds_per_panel;

CRGB leds[NUM_LEDS];

#define RED    0xFF0000
#define GREEN  0x00FF00
#define BLUE   0x0000FF
#define YELLOW 0xFFFF00
#define PINK   0xFF1088
#define ORANGE 0xE05800
#define WHITE  0xFFFFFF

void setup() {
  Serial.begin(9600);
  Serial.println("Starting LED controlling");
  LEDS.addLeds<OCTOWS2811,GRB>(leds,NUM_LEDS/8);
  LEDS.brightness(60);
}

void loop() {
  // put your main code here, to run repeatedly:

}