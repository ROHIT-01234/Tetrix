#include<PRIZM.h>
PRIZM prizm;

void setup() {
  // put your setup code here, to run once:
  prizm.PrizmBegin();
  prizm.setMotorInvert(2,1);
}

void loop() {
  // put your main code here, to run repeatedly:

  prizm.resetEncoder(1);
  prizm.resetEncoder(2);
  prizm.setMotorPowers(125,125);
  delay(1000);
  prizm.setMotorTargets(360, 7669, 360, 7669);
  delay(10000);
  prizm.setMotorPowers(125,125);
  delay(3000);
  prizm.PrizmEnd();
 
}
