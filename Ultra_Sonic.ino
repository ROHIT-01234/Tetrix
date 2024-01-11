#include<PRIZM.h>
PRIZM prizm;

void setup() {
  // put your setup code here, to run once:
  prizm.PrizmBegin();
  prizm.setMotorInvert(1,1);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(prizm.readSonicSensorCM(3)>25)
  {
    prizm.setMotorPowers(50,50);//distance > 25cm
  }
  else
  {
      prizm.setMotorPowers(25,-25);//distance < 25cm
      delay(1900);
  }
  
}
