#include<PRIZM.h>
PRIZM prizm;

void setup() {
  // put your setup code here, to run once:
  prizm.PrizmBegin();
  prizm.setMotorInvert(1,1);

}

void loop() {
  // put your main code here, to run repeatedly:
  //beam reflected,no line detected
  //0->White Line(no line detected)
  if(prizm.readLineSensor(2)==0)
  {
    prizm.setMotorPowers(125,30);//left turn
    prizm.setRedLED(LOW);  
  }

  //no beam reflected,line detected
  //1->Black Line(line detected)
   if(prizm.readLineSensor(2)==1)
  {
    prizm.setMotorPowers(30,125);//right turn
    prizm.setRedLED(HIGH);  
  }
}
