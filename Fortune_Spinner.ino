#include <Stepper.h>

const int spr = 2048;

Stepper myStepper(spr, 8, 10, 9, 11);

int stepCount = 0;
bool active;

void setup() {
  Serial.begin(9600);
  myStepper.setSpeed(10);
}

void loop() {

  /*if(active == true){
    //myStepper.step(spr/8);
    active = false;
  }*/
  delay(500);
}

void serialEvent(){
  //myStepper.setSpeed(Serial.parseInt());
  myStepper.step(spr/8);
  //active = true;
  while(Serial.available()){
    Serial.read();
  }
}