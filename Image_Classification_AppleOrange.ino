#include <Wire.h>
#include "DFRobot_RGBLCD1602.h"

const int switchPin = 4;
int prevState = HIGH;

DFRobot_RGBLCD1602 lcd(16,2);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  // USB connection between Arduino and computer
  // Starts the serial communication and sets the baud rate
  pinMode(switchPin, INPUT_PULLUP);   //Switch
  pinMode(7, OUTPUT);  //LED Apple
  pinMode(8, OUTPUT);  //LED Orange
  // pinMode(13, OUTPUT);
  
  lcd.init();
  lcd.setCursor(0,0);
  lcd.setRGB(255, 255, 255);
}

void loop() {
  // put your main code here, to run repeatedly:
  int state = digitalRead(switchPin);

  if (prevState == HIGH && state == LOW) {
    Serial.println("Switch ON");
    delay(200);
    
    while (Serial.available()==0) {}
    String cmd = Serial.readStringUntil('\n');
    cmd.trim();
    char label = cmd.charAt(0);
    float percent = cmd.substring(2).toFloat();


    digitalWrite(7, LOW);
    digitalWrite(8, LOW);
    if (label == 'A') {
      digitalWrite(7, HIGH);
      lcd.print("Pred class:");
      lcd.setCursor(0, 1);
      lcd.print("Apple ");
      lcd.print(percent);
      lcd.print("%");
    }
    else if (label == 'O') {
      digitalWrite(8, HIGH);
      lcd.print("Pred class:");
      lcd.setCursor(0, 1);
      lcd.print("Orange ");
      lcd.print(percent);
      lcd.print("%");
    }
  }
  else if (state == HIGH) {
    digitalWrite(7, LOW);
    digitalWrite(8, LOW);
    lcd.clear();
  }
  delay(500);
  prevState = state;
  // One-way: Python --> Arduino
  /*if (Serial.available()) {
    char cmd = Serial.read();
    if (cmd == 'A') {
      digitalWrite(7, HIGH);
      digitalWrite(8, LOW);
    }
    else if (cmd == 'O') {
      digitalWrite(8, HIGH);
      digitalWrite(7, LOW);
    }
  }*/
}
