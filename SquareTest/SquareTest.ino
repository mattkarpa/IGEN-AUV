void setup(){
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  delay(120000);
}

void loop(){
  for(i = 0; i < 4; i++){
    digitalWrite(4,HIGH);
    digitalWrite(3,HIGH);
    digitalWrite(2,HIGH);
    delay(7000);
    digitalWrite(4,LOW);
    delay(8000);
    digitalWrite(3,LOW);
    digitalWrite(2,LOW);

    delay(2000);

    digitalWrite(3,HIGH);
    delay(3000);
    digitalWrite(3,LOW);

    digitalWrite(2,HIGH);
    delay(1000);
    digitalWrite(2,LOW);

    delay(2000);
  }

  delay(180000);
}
