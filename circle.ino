#include<PRIZM.h>
PRIZM prizm;

void setup() {
  // put your setup code here, to run once:
  prizm.PrizmBegin();
  prizm.setMotorInvert(2,1);
}

void loop() {
  // put your main code here, to run repeatedly:
  
  prizm.setMotorPowers(20,40);
  delay(1000);
  
}
