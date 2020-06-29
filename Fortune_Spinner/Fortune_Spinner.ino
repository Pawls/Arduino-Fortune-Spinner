#include <Wire.h>
#include <Stepper.h>
#include <LiquidCrystal.h>
#include "Notes.h"
//#include "pitches.h"
#include <Adafruit_INA219.h>

Adafruit_INA219 ina219;

//Pin definitions
const int buzz_pin = 13;

//initialize LCD
LiquidCrystal lcd(7,6,2,3,4,5);

//initialize Stepper Motor
const int spr = 2048; // Stepper motor steps per revolution
Stepper myStepper(spr, 8, 10, 9, 11);

bool button_pressed = false;
int rand_spin;
int current_fortune = 0;

void setup() {
  pinMode(buzz_pin, OUTPUT);
  Serial.begin(115200);
  myStepper.setSpeed(13);
  lcd.begin(16, 2);
  lcd.print("Fortune Spinner");
  myStepper.step((spr/8)*8);

  //initialize the INA219 current sensor
  if (! ina219.begin()) {
    Serial.println("Failed to find INA219 chip");
    while (1) { delay(10); }
  }
  
}

void loop() {
  float current_mA = 0;
  current_mA = ina219.getCurrent_mA();
  
  if(current_mA > 315.0 && button_pressed == false){
    tone(buzz_pin, 261, 100);
    delay(100);
    button_pressed = true;
    rand_spin = random(1,9);
    current_fortune += rand_spin;
    current_fortune %= 8;
    myStepper.step((spr/8)*rand_spin);
    displayFortune(current_fortune);
  }
}

void displayFortune(int roll){
  lcd.clear();
  delay(200);
  switch(roll){
    case 0:
      lcd.print("Be self-aware");
      lcd.setCursor(0,1);
      lcd.print("of your mistakes");
      fortune1(buzz_pin);
      break;
    case 1:
      lcd.print("It is not unwise");
      lcd.setCursor(0,1);
      lcd.print("to ask for help");
      fortune2(buzz_pin);
      break;
    case 2:
      lcd.print("Practice creates");
      lcd.setCursor(0,1);
      lcd.print("perfection");
      fortune3(buzz_pin);
      break;
    case 3:
      lcd.print("Knowledge will");
      lcd.setCursor(0,1);
      lcd.print("come with time");
      fortune4(buzz_pin);      
      break;
    case 4:
      lcd.print("Give first in");
      lcd.setCursor(0,1);
      lcd.print("order to take");
      fortune5(buzz_pin);      
      break;
    case 5:
      lcd.print("Good things can");
      lcd.setCursor(0,1);
      lcd.print("be unexpected");
      fortune6(buzz_pin);      
      break;
    case 6:
      lcd.print("Love truth,");
      lcd.setCursor(0,1);
      lcd.print("but pardon error");
      fortune7(buzz_pin);      
      break;
    case 7:
      lcd.print("Welcome changes");
      lcd.setCursor(0,1); 
      lcd.print("in your life");
      fortune8(buzz_pin);      
      break;
  }
  delay(1000);
  button_pressed = false;
}

void serialEvent(){
  myStepper.step(spr/8);
  while(Serial.available()){
    Serial.read();
  }
}
