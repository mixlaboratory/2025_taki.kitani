#include <M5Core2.h>

void setup() {
  M5.begin();
  M5.Lcd.setTextSize(3);
  M5.Lcd.print("Hello World");  // M5Stackの画面に表示する
}

void loop() {
}