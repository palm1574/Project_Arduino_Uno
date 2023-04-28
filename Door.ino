#include <Servo.h>
Servo doorServo;
void setup(){
  pinMode(2, INPUT);
  pinMode(4, INPUT);
  doorServo.attach(7);
}
void loop(){
  
  if(digitalRead(2) == HIGH || digitalRead(4) == HIGH){
    doorServo.write(90); 
    delay(2000); 
    doorServo.write(0);
  }
}