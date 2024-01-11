#include<PRIZM.h>
PRIZM prizm;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  prizm.PrizmBegin();
}
void loop() {
  // put your main code here, to run repeatedly:

  int x=prizm.readBatteryVoltage();
  int y=prizm.readMotorCurrent(1);
  int z=prizm.readMotorCurrent(2);


  Serial.println(x);
  Serial.println(y);
  Serial.println(z);
  delay(250);
  Serial.println();

  prizm.setMotorPower(1,25);
  prizm.setMotorPower(2,-25);

    delay(5000);
    
}
