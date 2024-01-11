#include<PRIZM.h>
PRIZM prizm;

void setup() {
  // put your setup code here, to run once:
  prizm.PrizmBegin();
  prizm.setMotorInvert(1, 1);
}

void loop() {
  // put your main code here, to run repeatedly:
    prizm.setMotorPower(1,100);
    prizm.setMotorPower(2,100);
    delay(4000);
    
}
