#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x3F, 16, 2); // 검색된 I2C 주소와 lcd의 열, 행

// const char data[] = "Hello World";
// const int textSize = sizeof(data) - 1; // 종결 문자기 때문에 -1 해줘야 함

void setup() {
  lcd.init(); // lcd 사용 시작

  lcd.backlight();

  Serial.begin(9600);

  // lcd.print(data);

  // lcd.setCursor(0, 0);

  // lcd.print("Hello World!");
}

void loop() {
  if (Serial.available()) { // 뭔가 받아 온게 있다면
    lcd.clear();
    
    while (Serial.available() > 0) {
      // lcd.setCursor(0, 0);
      char c = Serial.read();
      lcd.print(c); // lcd에 시리얼 통신 수신 결과 쓰기
    }
  }

  // for (int pos = 0; pos < textSize; pos++) {
  //   lcd.scrollDisplayLeft(); // lcd 왼쪽으로 스크롤 // scrollDisplayRight() -> 오른쪽

  //   delay(200); // 0.2초
  // }

  // lcd.setCursor(0, 1);
  // lcd.print(millis() / 1000); // 1초마다 초로 출력해보기!

  // // 1. 커서를 깜빡 거리기

  // lcd.setCursor(0, 0);

  // lcd.print("Cursor blink");

  // lcd.blink(); // 커서를 깜빡거리게 하는 함수

  // delay(2000); // 2초

  // // 2. 커서를 깜빡 거리지 않게 하기

  // lcd.clear(); // lcd 내용 지우기

  // lcd.noBlink(); // 커서를 깜빡거리지 않게 하는 함수

  // lcd.print("Cursor noblink");

  // delay(2000);

  // // 3. lcd 내용을 보이지 않게 하기

  // lcd.clear();

  // lcd.print("Display off");

  // delay(1000);

  // lcd.noDisplay(); // lcd display 보이지 않게 하는 함수

  // // 4. lcd 내용 보이게 하기

  // lcd.clear();

  // delay(2000);

  // lcd.print("Display on");

  // lcd.display();

  // delay(2000);

  // lcd.clear();
}
