#include <TM1637Display.h> // 라이브러리 불러오기

#define CLK 3 // 상수
#define DIO 2

TM1637Display display(CLK, DIO); // display화

void setup() {
  display.setBrightness(0x0f); // 세그먼트 디스플레이 밝기 설정 -> 최대 밝기(0x0f)
}

void loop() {
  int sensorValue = analogRead(A0);

  float voltage = sensorValue / 1024.0 * 5.0;
  int temp = (voltage - 0.5) * 100;

  display.showNumberDec(temp);

  // display.showNumberDec(sensorValue);

  // int number = 1234; // 12:34

  // display.showNumberDecEx(number, 0x40, true, 4, 0);
  
  // delay(1000);
}
