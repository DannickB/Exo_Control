#include <Arduino.h>
#include <Servo.h>
#include <MegunoLink.h>
#include "motorControl.h"
#include "test.h"
#include "touchScreen.h"

SoftwareSerial nextion(2, 3);

#define IN1  4
#define IN2 3
#define EN 2
#define CT A11
#define neutral 0
#define auto 1
#define manuel 2

Screen ecran;

void setup() {
  
  Serial.begin(9600);
  nexInit();  
  
  pinMode(31 , INPUT_PULLUP);

  pinMode(34 , INPUT_PULLUP);

  pinMode(EN , OUTPUT);

  pinMode(IN1 , OUTPUT);

  pinMode(IN2 , OUTPUT);

  pinMode(CT, INPUT);
Serial.println("Ini motor exo----------");

}

void loop() 
{
    ecran.nextLoop();
}