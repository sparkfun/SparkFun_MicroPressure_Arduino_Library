/*
  Basic test of the Qwiic MicroPressure Sensor
  By: Alex Wende
  SparkFun Electronics
  Date: July 2020
  License: This code is public domain but you buy me a beer if you use this and we meet someday (Beerware license).
  Feel like supporting our work? Buy a board from SparkFun!
  https://www.sparkfun.com/products/16476
  
  This example demonstrates how to get started with the Qwiic MicroPressure Sensor board, and read pressures in various units.
*/

// Include the SparkFun MicroPressure library.
// Click here to get the library: http://librarymanager/All#SparkFun_MPR

#include<Wire.h>
#include "SparkFun_MPR.h"

SparkFun_MPR mpr;

void setup() {
  Serial.begin(115200);
  Wire.begin();
  mpr.begin();
}

void loop() {
  Serial.print(mpr.readPressure(),4);
  Serial.println(" PSI");
  Serial.print(mpr.readPressure(PA),1);
  Serial.println(" Pa");
  Serial.print(mpr.readPressure(KPA),4);
  Serial.println(" kPa");
  Serial.print(mpr.readPressure(TORR),3);
  Serial.println(" torr");
  Serial.print(mpr.readPressure(INHG),4);
  Serial.println(" inHg");
  Serial.print(mpr.readPressure(ATM),6);
  Serial.println(" atm");
  Serial.print(mpr.readPressure(BAR),6);
  Serial.println(" bar");
  Serial.println();
  delay(500);
}
