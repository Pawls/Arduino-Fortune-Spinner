#include <Wire.h>
#include <Stepper.h>
#include <LiquidCrystal.h>

//Pin definitions
const int button_pin = 12;
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
  pinMode(button_pin, INPUT);
  Serial.begin(9600);
  myStepper.setSpeed(13);
  lcd.begin(16, 2);
  lcd.print("Fortune Spinner");
  myStepper.step((spr/8)*8);
}

void loop() {
  if(digitalRead(button_pin) == HIGH && button_pressed == false){
    button_pressed = true;
    rand_spin = random(0,8);
    current_fortune += rand_spin;
    current_fortune %= 8;
    myStepper.step((spr/8)*rand_spin);
    displayFortune(current_fortune);
  }
}

void displayFortune(int roll){
  lcd.clear();
  tone(buzz_pin, 261, 100);
  delay(200);
  switch(roll){
    case 0:
      lcd.print("Be self-aware");
      lcd.setCursor(0,1);
      lcd.print("of your mistakes");
      break;
    case 1:
      lcd.print("It is not unwise");
      lcd.setCursor(0,1);
      lcd.print("to ask for help");
      break;
    case 2:
      lcd.print("Practice creates");
      lcd.setCursor(0,1);
      lcd.print("perfection");
      break;
    case 3:
      lcd.print("Knowledge will");
      lcd.setCursor(0,1);
      lcd.print("come with time");
      break;
    case 4:
      lcd.print("Give first in");
      lcd.setCursor(0,1);
      lcd.print("order to take");
      break;
    case 5:
      lcd.print("Good things can");
      lcd.setCursor(0,1);
      lcd.print("be unexpected");
      break;
    case 6:
      lcd.print("Love truth,");
      lcd.setCursor(0,1);
      lcd.print("but pardon error");
      break;
    case 7:
      lcd.print("Welcome changes");
      lcd.setCursor(0,1);
      lcd.print("in your life");
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
