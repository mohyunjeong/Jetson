// 적외선 센서 근처에 가면 선풍기가 돌게, 아니면 안돌게 만들어 보기!

void setup() {
  pinMode(8, INPUT);
  pinMode(9, OUTPUT); // 액츄에이터
  
  Serial.begin(9600);
}

void loop() {
  int val = digitalRead(8);

  Serial.println(val);

  if (val == 1) {
    // digitalWrite(9, 1); // 최대 세기로 켰다 껐다만 하겠다!
    analogWrite(9, 125); // 속도를 조금 줄여서 작동 시키겠다!
  } else {
    digitalWrite(9, 0);
  }
}
