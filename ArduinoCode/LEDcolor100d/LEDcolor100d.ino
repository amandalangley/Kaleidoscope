#include <Adafruit_NeoPixel.h>
#define PIN 6
#define LED_COUNT 80

Adafruit_NeoPixel strip = Adafruit_NeoPixel(LED_COUNT, PIN, NEO_GRB + NEO_KHZ800);
void setup() {
Serial.begin(9600); 
strip.begin(); 
strip.show(); 
}
void loop() {
while (Serial.available() > 0) {
int note = Serial.parseInt();
int noteoff = note - 100;
if (Serial.read() == '\n') {
if (note == 1) {
   colorWipe(strip.Color(0, 3, 1), 0); // First
  }
}
if (note == 44) {strip.setPixelColor(30, 189, 31, 0); strip.show();} 
if (note == 45) {strip.setPixelColor(31, 193, 131, 0); strip.show();} 
if (note == 46) {strip.setPixelColor(32, 168, 197, 0); strip.show();} 
if (note == 47) {strip.setPixelColor(33, 68, 201, 0); strip.show();}
if (note == 48) {strip.setPixelColor(34, 0, 205, 32); strip.show();} 
if (note == 49) {strip.setPixelColor(35, 0, 211, 142); strip.show();} 
if (note == 50) {strip.setPixelColor(36, 0, 185, 215); strip.show();}
if (note == 51) {strip.setPixelColor(37, 0, 80, 219); strip.show();} 
if (note == 52) {strip.setPixelColor(38, 33, 0, 233); strip.show();} 
if (note == 53) {strip.setPixelColor(39, 151, 0, 227, 100); strip.show();} 
if (note == 54) {strip.setPixelColor(40, 231, 0, 195, 100); strip.show();}
if (note == 55) {strip.setPixelColor(41, 235, 0, 83, 100); strip.show();} 
if (note == 56) {strip.setPixelColor(42, 239, 39, 0, 100); strip.show();} 
if (note == 57) {colorWipe(strip.Color(245, 167, 0, 100), 0); strip.show();} 
if (note == 58) {strip.setPixelColor(43, 206, 249, 0, 100); strip.show();} 
if (note == 59) {strip.setPixelColor(44, 85, 253, 0, 100); strip.show();} 
if (note == 60) {strip.setPixelColor(45, 2, 255, 42, 100); strip.show();} 
if (note == 61) {strip.setPixelColor(46, 6, 255, 173, 100); strip.show();}
if (note == 62) {strip.setPixelColor(47, 10, 215, 255, 100); strip.show();}
if (note == 63) {strip.setPixelColor(63, 14, 97, 255, 100); strip.show();} 
if (note == 64) {colorWipe(strip.Color(53, 18, 255, 100), 0); strip.show();} 
if (note == 65) {strip.setPixelColor(65, 172, 24, 255, 100); strip.show();}
if (note == 66) {strip.setPixelColor(66, 255, 28, 220, 100); strip.show();} 
if (note == 67) {strip.setPixelColor(67, 255, 32, 110, 100); strip.show();}
if (note == 68) {strip.setPixelColor(68, 255, 72, 36,100); strip.show();}
if (note == 69) {strip.setPixelColor(69, 255, 186, 40, 100); strip.show();} 
if (note == 70) {colorWipe(strip.Color(219, 255, 44, 100), 0); strip.show();} 
if (note == 71) {strip.setPixelColor(71, 118, 255, 48); strip.show();}
if (note == 72) {strip.setPixelColor(72, 52, 255, 84); strip.show();} 
if (note == 73) {strip.setPixelColor(73, 58, 255, 190); strip.show();} 
if (note == 74) {strip.setPixelColor(74, 62, 223, 255); strip.show();} 
if (note == 75) {strip.setPixelColor(75, 66, 131, 255); strip.show();} 
if (note == 76) {strip.setPixelColor(76, 97, 70, 255); strip.show();} 
if (note == 77) {strip.setPixelColor(77, 194, 74, 255); strip.show();}
if (note == 78) {strip.setPixelColor(78, 255, 78, 227); strip.show();} 
if (note == 79) {strip.setPixelColor(79, 255, 82, 143); strip.show();} 
if (note == 80) {strip.setPixelColor(80, 255, 114, 86); strip.show();}
if (note == 81) {strip.setPixelColor(81, 255, 203, 92); strip.show();}

if (note == 100) {strip.setPixelColor(100, 184, 172, 255); strip.show();} if (note > 100) {strip.setPixelColor(noteoff, 0, 0, 0); strip.show();}

}
}
void colorWipe(uint32_t color, int wait) {
  for(int i=30; i<70; i++) { // For each pixel in strip...
    strip.setPixelColor(i, color);         //  Set pixel's color (in RAM)
    strip.show();                          //  Update strip to match
    delay(wait);                           //  Pause for a moment
}
}
