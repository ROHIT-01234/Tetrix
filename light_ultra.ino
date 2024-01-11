#include<PRIZM.h>
PRIZM prizm;

void setup() {
  // put your setup code here, to run once:
  prizm.PrizmBegin();
  prizm.setMotorInvert(1,1);
}

void loop() {
  // put your main code here, to run repeatedly:

   if(prizm.readLineSensor(2)==1)
  {
    prizm.setMotorPowers(30,125);//left turn
    prizm.setRedLED(HIGH);  
  }

   else
  {
    prizm.setMotorPowers(125,30);//right turn
    prizm.setRedLED(LOW);  
  }

  
  while(prizm.readSonicSensorCM(3)<25)
  {
    prizm.setGreenLED(HIGH);
    prizm.setMotorPowers(125,125);
  }
  prizm.setGreenLED(LOW);
  
}
