// #include "Freenove_WS2812_Lib_for_ESP32.h"
#include "Freenove_WS2812B_RGBLED_Controller.h"

#define LEDS_COUNT  500
#define LEDS_PIN	9
#define LEDS_PIN2	10
#define CHANNEL		0
#define CHANNEL2		1
#define onBoard 0

unsigned long time1, time2, time3 = 0;

// Freenove_ESP32_WS2812 strip, strip2;
//  Freenove_ESP32_WS2812 strip = Freenove_ESP32_WS2812(LEDS_COUNT, LEDS_PIN, CHANNEL);
//  Freenove_ESP32_WS2812 strip2 = Freenove_ESP32_WS2812(LEDS_COUNT, LEDS_PIN2, CHANNEL2);

  Freenove_WS2812B_Controller strip = Freenove_WS2812B_Controller(LEDS_COUNT, LEDS_PIN, CHANNEL);
 Freenove_WS2812B_Controller strip2 = Freenove_WS2812B_Controller(LEDS_COUNT, LEDS_PIN2, CHANNEL2);
void setup() {
  // Serial.begin(9600);
  // time1 = millis();

  // time2 = millis();
  strip.begin();
  strip2.begin();
  // time3 = millis();
  // pinMode(onBoard, OUTPUT);

  // Serial.print("Time to create LED strip objects: ");
  // Serial.print(time2 - time1);
  // Serial.println();
  // Serial.print("Time to initialize strips: ");
  // Serial.print(time3 - time2);
  // Serial.println();

}

void loop() {
  strip.setAllLedsColor(0xFF0000);
  strip2.setAllLedsColor(0x0000FF);
  strip.show();
  strip2.show();
  delay(500);
  strip2.setAllLedsColor(0xFFFFFF);
  strip.setAllLedsColor(0x00FF00);
  strip2.show();
  strip.show();
  delay(500);



  // for (int j = 0; j < 255; j += 2) {
  //   for (int i = 0; i < LEDS_COUNT; i++) {
  //     strip2.setLedColorData(i, strip2.Wheel((i * 256 / LEDS_COUNT + j) & 255));
  //   }
  //   strip2.show();
  //   delay(2);
  // } 
  // for (int i = 0; i <= LEDS_COUNT; i++) {
  //   strip.setLedColorData(i, 0, 255, 0);  // Set to red
  //   strip.show();
  //   delay(50);
  //   strip.setLedColorData(i, 0, 0, 0);    // Turn off
  // }
  // digitalWrite(onBoard,LOW);
  // delay(1000);
}


// #include "Freenove_WS2812_Lib_for_ESP32.h"

// #define LEDS_COUNT  100
// #define LEDS_PIN	6
// #define CHANNEL		0

// Freenove_ESP32_WS2812 strip = Freenove_ESP32_WS2812(LEDS_COUNT, LEDS_PIN, CHANNEL, TYPE_GRB);

// uint8_t m_color[5][3] = { {255, 0, 0}, {0, 255, 0}, {0, 0, 255}, {255, 255, 255}, {0, 0, 0} };
// int delayval = 1;

// void setup() {
// 	strip.begin();
// 	strip.setBrightness(10);	
// }
// void loop() {
// 	for (int j = 0; j < 5; j++) {
// 		for (int i = 0; i < LEDS_COUNT; i++) {
// 			strip.setLedColorData(i, m_color[j][0], m_color[j][1], m_color[j][2]);
// 			strip.show();
// 			delay(delayval);
// 		}
// 		delay(500);
// 	}
// }


/*
 * This ESP32 code is created by esp32io.com
 *
 * This ESP32 code is released in the public domain
 *
 * For more detail (instruction and wiring diagram), visit https://esp32io.com/tutorials/esp32-ws2812b-led-strip
 */

// #include <Adafruit_NeoPixel.h>

// #define PIN_WS2812B 15  // The ESP32 pin GPIO16 connected to WS2812B
// #define NUM_PIXELS 100   // The number of LEDs (pixels) on WS2812B LED strip

// Adafruit_NeoPixel ws2812b(NUM_PIXELS, PIN_WS2812B, NEO_GRB + NEO_KHZ800);

// void setup() {
//   ws2812b.begin();  // initialize WS2812B strip object (REQUIRED)
//   pinMode(onBoard, OUTPUT);
// }

// void loop() {
 
//   ws2812b.clear();  // set all pixel colors to 'off'. It only takes effect if pixels.show() is called

  

//   // turn pixels to green one-by-one with delay between each pixel
//   for (int pixel = 0; pixel < NUM_PIXELS; pixel++) {         // for each pixel
//      delay(500);
//      digitalWrite(onBoard, HIGH);
//      ws2812b.setPixelColor(pixel, ws2812b.Color(0, 255, 0));  // it only takes effect if pixels.show() is called
//     ws2812b.show();                                          // update to the WS2812B Led Strip

//     delay(500);
//     digitalWrite(onBoard, LOW);  // 500ms pause between each pixel
//   }

//   // // turn off all pixels for two seconds
//   // ws2812b.clear();
//   // ws2812b.show();  // update to the WS2812B Led Strip
//   // delay(2000);     // 2 seconds off time

//   // // turn on all pixels to red at the same time for two seconds
//   // for (int pixel = 0; pixel < NUM_PIXELS; pixel++) {         // for each pixel
//   //   ws2812b.setPixelColor(pixel, ws2812b.Color(255, 0, 0));  // it only takes effect if pixels.show() is called
//   // }
//   // ws2812b.show();  // update to the WS2812B Led Strip
//   // delay(1000);     // 1 second on time

//   // // turn off all pixels for one seconds
//   // ws2812b.clear();
//   // ws2812b.show();  // update to the WS2812B Led Strip
//   // delay(1000);     // 1 second off time
// }
