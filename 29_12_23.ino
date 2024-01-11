#include<PRIZM.h>
PRIZM prizm;

void setup() {
  // put your setup code here, to run once:
  prizm.PrizmBegin();
  prizm.setMotorInvert(2,1);
}

void loop() {
  // put your main code here, to run repeatedly:

  prizm.setMotorPowers(125,125);
  delay(1000);
  
  prizm.setMotorPowers(40,40);
  delay(3000);

  prizm.setMotorPowers(125,125);
  delay(1000);
  
  prizm.setMotorPowers(50,-50);
  delay(790);

  prizm.setMotorPowers(125,125);
  delay(1000);


}
