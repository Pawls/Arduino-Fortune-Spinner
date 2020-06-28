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
}

void loop() {
  //Serial.println(digitalRead(buzz_pin));
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
      lcd.print("ROLLED FORTUNE 1");
      lcd.setCursor(0,1);
      lcd.print("2ND LINE 16 CHAR");
      break;
    case 1:
      lcd.print("ROLLED FORTUNE 2");
      lcd.setCursor(0,1);
      lcd.print("2ND LINE 16 CHAR");
      break;
    case 2:
      lcd.print("ROLLED FORTUNE 3");
      lcd.setCursor(0,1);
      lcd.print("2ND LINE 16 CHAR");
      break;
    case 3:
      lcd.print("ROLLED FORTUNE 4");
      lcd.setCursor(0,1);
      lcd.print("2ND LINE 16 CHAR");
      break;
    case 4:
      lcd.print("ROLLED FORTUNE 5");
      lcd.setCursor(0,1);
      lcd.print("2ND LINE 16 CHAR");
      break;
    case 5:
      lcd.print("ROLLED FORTUNE 6");
      lcd.setCursor(0,1);
      lcd.print("2ND LINE 16 CHAR");
      break;
    case 6:
      lcd.print("ROLLED FORTUNE 7");
      lcd.setCursor(0,1);
      lcd.print("2ND LINE 16 CHAR");
      break;
    case 7:
      lcd.print("ROLLED FORTUNE 8");
      lcd.setCursor(0,1);
      lcd.print("2ND LINE 16 CHAR");
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
