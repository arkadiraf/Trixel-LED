///////////////////////////////////////////////////////////
// Trixel LED HexagonMCU atmgea32u4 - arkadiraf@gmail.com //
//    Strand test based on adafruit code - 11/04/2018    //
///////////////////////////////////////////////////////////
// Genuino Micro bootloader             //
// high_fuses=0xd8                      //
// low_fuses=0xff                       //
// extended_fuses=0xcb                  //
// caterina/Caterina-Genuino-Micro.hex  //
//////////////////////////////////////////

///////////////
// Libraries //
///////////////
#include "Adafruit_NeoPixel.h"
///////////////
// Variables //
///////////////
// neopixel LED Pin
#define STRIP_PIN_1 11
#define STRIP_PIN_2 2
#define STRIP_PIN_3 8
#define STRIP_PIN_4 5
#define STRIP_PIN_5 7

#define NUM_LEDS_1 4
#define NUM_LEDS_2 4
#define NUM_LEDS_3 10
#define NUM_LEDS_4 4
#define NUM_LEDS_5 4

uint8_t brightness=75;
// Parameter 1 = number of pixels in strip
// Parameter 2 = Arduino pin number (most are valid)
// Parameter 3 = pixel type flags, add together as needed:
//   NEO_KHZ800  800 KHz bitstream (most NeoPixel products w/WS2812 LEDs)
//   NEO_KHZ400  400 KHz (classic 'v1' (not v2) FLORA pixels, WS2811 drivers)
//   NEO_GRB     Pixels are wired for GRB bitstream (most NeoPixel products)
//   NEO_RGB     Pixels are wired for RGB bitstream (v1 FLORA pixels, not v2)
//   NEO_RGBW    Pixels are wired for RGBW bitstream (NeoPixel RGBW products)
Adafruit_NeoPixel strip_1 = Adafruit_NeoPixel(NUM_LEDS_1, STRIP_PIN_1, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel strip_2 = Adafruit_NeoPixel(NUM_LEDS_2, STRIP_PIN_2, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel strip_3 = Adafruit_NeoPixel(NUM_LEDS_3, STRIP_PIN_3, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel strip_4 = Adafruit_NeoPixel(NUM_LEDS_4, STRIP_PIN_4, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel strip_5 = Adafruit_NeoPixel(NUM_LEDS_5, STRIP_PIN_5, NEO_GRB + NEO_KHZ800);
void setup() {
  Serial.begin(57600); //This pipes to the serial monitor
  strip_1.begin();
  strip_1.show(); // Initialize all pixels to 'off'
  strip_2.begin();
  strip_2.show(); // Initialize all pixels to 'off'
  strip_3.begin();
  strip_3.show(); // Initialize all pixels to 'off'
  strip_4.begin();
  strip_4.show(); // Initialize all pixels to 'off'
  strip_5.begin();
  strip_5.show(); // Initialize all pixels to 'off'
}

void loop() {
  static int Status = 0;
  Serial.println("Hello world");  // Print "Hello World" to the Serial Monitor
  TXLED0; //TX LED is not tied to a normally controlled pin
  Status = !Status;
  Status == 1 ? TXLED1 : TXLED0;

//  // run Pixel effects
//  Status == 1 ? strip_1.setBrightness(255) : strip_1.setBrightness(255);
//  Status == 1 ? strip_2.setBrightness(255) : strip_2.setBrightness(255);
//  Status == 1 ? strip_3.setBrightness(255) : strip_3.setBrightness(255);
//  Status == 1 ? strip_4.setBrightness(255) : strip_4.setBrightness(255);
//  Status == 1 ? strip_5.setBrightness(255) : strip_5.setBrightness(255);
  strip_1.setBrightness(brightness);
  strip_2.setBrightness(brightness);
  strip_3.setBrightness(brightness);
  strip_4.setBrightness(brightness);
  strip_5.setBrightness(brightness);
  //Status==1 ? rainbow(20) : rainbow(2);
  //Status==1 ? rainbowCycle(20) : rainbowCycle(2);
  rainbowCycle(5);
}

// Adafruit NeoPixel Example functions //
// Fill the dots one after the other with a color
void colorWipe(uint32_t c, uint8_t wait) {
  for (uint16_t i = 0; i < strip_1.numPixels(); i++) {
    strip_1.setPixelColor(i, c);
    strip_1.show();
    delay(wait);
  }
}

void rainbow(uint8_t wait) {
  uint16_t i, j;

  for (j = 0; j < 256; j++) {
    for (i = 0; i < strip_1.numPixels(); i++) {
      strip_1.setPixelColor(i, Wheel((i + j) & 255));
    }
    strip_1.show();
    delay(wait);
  }
}

// Slightly different, this makes the rainbow equally distributed throughout
void rainbowCycle(uint8_t wait) {
  uint16_t i, j;

  for (j = 0; j < 256 * 5; j++) { // 5 cycles of all colors on wheel
    for (i = 0; i < strip_1.numPixels(); i++) {
      strip_1.setPixelColor(i, Wheel(((i * 256 / strip_1.numPixels()) + j) & 255));
    }
    for (i = 0; i < strip_2.numPixels(); i++) {
      strip_2.setPixelColor(i, Wheel(((i * 256 / strip_2.numPixels()) + j + 25) & 255));
    }
    for (i = 0; i < strip_3.numPixels(); i++) {
      strip_3.setPixelColor(i, Wheel(((i * 256 / strip_3.numPixels()) + j + 50) & 255));
    }
    for (i = 0; i < strip_4.numPixels(); i++) {
      strip_4.setPixelColor(i, Wheel(((i * 256 / strip_4.numPixels()) + j + 75) & 255));
    }
    for (i = 0; i < strip_5.numPixels(); i++) {
      strip_5.setPixelColor(i, Wheel(((i * 256 / strip_5.numPixels()) + j + 100) & 255));
    }
    strip_1.show();
    strip_2.show();
    strip_3.show();
    strip_4.show();
    strip_5.show();
    delay(wait);
  }
}

//Theatre-style crawling lights.
void theaterChase(uint32_t c, uint8_t wait) {
  for (int j = 0; j < 10; j++) { //do 10 cycles of chasing
    for (int q = 0; q < 3; q++) {
      for (uint16_t i = 0; i < strip_1.numPixels(); i = i + 3) {
        strip_1.setPixelColor(i + q, c);  //turn every third pixel on
      }
      strip_1.show();

      delay(wait);

      for (uint16_t i = 0; i < strip_1.numPixels(); i = i + 3) {
        strip_1.setPixelColor(i + q, 0);      //turn every third pixel off
      }
    }
  }
}

//Theatre-style crawling lights with rainbow effect
void theaterChaseRainbow(uint8_t wait) {
  for (int j = 0; j < 256; j++) {   // cycle all 256 colors in the wheel
    for (int q = 0; q < 3; q++) {
      for (uint16_t i = 0; i < strip_1.numPixels(); i = i + 3) {
        strip_1.setPixelColor(i + q, Wheel( (i + j) % 255)); //turn every third pixel on
      }
      strip_1.show();

      delay(wait);

      for (uint16_t i = 0; i < strip_1.numPixels(); i = i + 3) {
        strip_1.setPixelColor(i + q, 0);      //turn every third pixel off
      }
    }
  }
}

// Input a value 0 to 255 to get a color value.
// The colours are a transition r - g - b - back to r.
uint32_t Wheel(byte WheelPos) {
  WheelPos = 255 - WheelPos;
  if (WheelPos < 85) {
    return strip_1.Color(255 - WheelPos * 3, 0, WheelPos * 3);
  }
  if (WheelPos < 170) {
    WheelPos -= 85;
    return strip_1.Color(0, WheelPos * 3, 255 - WheelPos * 3);
  }
  WheelPos -= 170;
  return strip_1.Color(WheelPos * 3, 255 - WheelPos * 3, 0);
}
