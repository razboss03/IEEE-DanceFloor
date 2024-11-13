#include <FastLED.h>
#define NUM_LEDS 500
#define DATA_PIN 9
CRGB leds[NUM_LEDS];

void setup() { 
  FastLED.addLeds<NEOPIXEL, DATA_PIN>(leds, NUM_LEDS); 
  FastLED.setBrightness(100);
  }

void loop() {
  for (int i = 0; i <= NUM_LEDS; i++) {
  leds[i] = CRGB::Green;
  FastLED.show();
  delay(10);
  leds[i] = CRGB::Red;
  FastLED.show();
  delay(10);
  leds[i] = CRGB::Blue;
  FastLED.show();
  delay(10);
  }
	// leds[0] = CRGB::White; FastLED.show(); delay(30);
	// leds[0] = CRGB::Black; FastLED.show(); delay(30);
}