#include<PRIZM.h>
PRIZM prizm;

void setup() {
  // put your setup code here, to run once:
  prizm.PrizmBegin();
  prizm.setMotorInvert(1, 1);

}
void wapas(int count){
  // 180 turn
    prizm.resetEncoders();
    prizm.setMotorTargets(360, 3600, 360, -3600);
    delay(3000);
    prizm.setServoPosition(1, 180);
    delay(1000);
   while(true){
      while( prizm.readSonicSensorCM(2) > 15){
        if( prizm.readLineSensor(3) == 1 && count > 0){
          count--;
          prizm.setMotorPowers(125, 125);
          delay(500);
        }
        else if(count == 0){
          prizm.setMotorPowers(125, 125);
          return;
        }
        else{
           prizm.setMotorPowers(50, 50);
        }
        
      }
   }
}
void turnright(int table){
    int count = 1;
    // turning right
    prizm.resetEncoders();
    prizm.setMotorTargets(360, 1750, 360, -1750);
    delay(3000);

   // going straight
    prizm.resetEncoders();
    prizm.setMotorTargets(360, 6000, 360, 6000);
    delay(6000);

   
   // turning right
    prizm.resetEncoders();
    prizm.setMotorTargets(360, 1750, 360, -1750);
    delay(3000);
    while(true){
      while( prizm.readSonicSensorCM(2) > 15){
        if( prizm.readLineSensor(3) == 1 && count < table){
          count++;
          prizm.setMotorPowers(125, 125);
          delay(500);
        }
        else if( prizm.readLineSensor(3) == 1 && count == table){
          prizm.setMotorPowers(125, 125);
          wapas(count);
          return;
        }
        else{
           prizm.setMotorPowers(50, 50);
        }
        
      }
      
//      prizm.setMotorPower(125, 125);
//      prizm.resetEncoders();
//      prizm.setMotorTargets(360, 1700, 360, -1700);
//      delay(3000);
      
       
    }
    
}
void loop() {
  int table = 3;
//   put your main code here, to run repeatedly:
  while(prizm.readSonicSensorCM(2) > 35){
    prizm.setMotorPowers(50, 50);
  }
//    // 180 deg turn 
    prizm.resetEncoders();
    prizm.setMotorTargets(360, 3600, 360, -3600);
    delay(3000);

    prizm.setServoPosition(1, 180);
    delay(1000);
    prizm.setMotorPowers(-24, -24);
    delay(300);
    prizm.setServoPosition(1, 0);
    delay(1000);
    prizm.setMotorPowers(50, 50);
    delay(1000);
    
    
    if(table <= 4)  
      turnright(table);
//    else
//      turnleft();
      
    prizm.PrizmEnd();
}
