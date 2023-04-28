void setup(){
  pinMode(2, INPUT);
  pinMode(7, OUTPUT);
}
void loop(){
  if(digitalRead(2) == LOW){
    digitalWrite(7, LOW);
    delay(5000);
    digitalWrite(7, HIGH);
  }else if(digitalRead(2) == HIGH){
    digitalWrite(7, HIGH);
    delay(5000);
    digitalWrite(7, LOW);}
}