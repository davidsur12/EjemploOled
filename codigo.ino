#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include "image.h"
#define SCREEN_WIDTH 128 // OLED display width, in pixels
#define SCREEN_HEIGHT 32 

 #define OLED_RESET     -1 // Reset pin # (or -1 if sharing Arduino reset pin)
#define SCREEN_ADDRESS 0x3C ///< See datasheet for Address; 0x3D for 128x64, 0x3C for 128x32
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);
 
//pregunta (1).png , 128 x 32 
  
void setup() {
    if(!display.begin(SSD1306_SWITCHCAPVCC, SCREEN_ADDRESS)) {
    Serial.println(F("SSD1306 allocation failed"));
    for(;;); // Don't proceed, loop forever
  }

 
  display.display();
  delay(100); // Pause for 2 seconds
  // testanimate(Bitmap, LOGO_WIDTH2, LOGO_HEIGHT2); 
     display.clearDisplay();

  display.drawBitmap(0,0,Bitmap ,Width, Height ,1);
  //display.drawBitmap(0,0,epd_bitmap_arboles  ,30 , 30 ,1);
  
  
  display.display();
  delay(100);

}

void loop() {
  
}
