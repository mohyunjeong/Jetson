#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x3F,16,2); 

void setup() {

  lcd.init();
  lcd.backlight();
  Serial.begin(9600);
  
}
void loop() {
  if(Serial.available()>0){

    while (Serial.available()>0){

      char c = Serial.read();

      if (c == '6') {

        lcd.scrollDisplayRight();

      } else if (c == '4') {

        lcd.scrollDisplayLeft();

      } else if (c == '2') {

        lcd.clear();
        lcd.setCursor(0, 1);
        lcd.print("Hello IoT!");

      } else if (c == '8') {

        lcd.clear();
        lcd.setCursor(0, 0);
        lcd.print("Hello IoT!");

      }
    }
  }
}
