#include <Arduino.h>

#define LEDPIN 12
#define BUTTONPIN 33

int stateButton;
int lastStateButton = 1;
int stateLed = 0;

void setup(){
  Serial.begin(9600);
  pinMode(LEDPIN, OUTPUT);
  pinMode(BUTTONPIN, INPUT);
  digitalWrite(LEDPIN, LOW);
}

void loop(){
  stateButton = digitalRead(BUTTONPIN);
  if (stateButton == 0 && lastStateButton == 1) {
    delay(50);
    stateButton = digitalRead(BUTTONPIN);
    if (stateButton == 0 && lastStateButton == 1) {
      stateLed = !stateLed;
      digitalWrite(LEDPIN, stateLed);
    }
  }
  lastStateButton = stateButton;
}