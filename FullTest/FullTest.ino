void setup() {
  pinMode(3,OUTPUT);
  pinMode(2,OUTPUT);
  pinMode(4,OUTPUT);
  delay(120000);
}

void loop() {
  //Move forwards for 15s
  digitalWrite(3,HIGH);
  digitalWrite(2,HIGH);
  delay(15000);
  digitalWrite(3,LOW);
  digitalWrite(2,LOW);
  delay(5000);

  //Turn for 5s
  digitalWrite(3,HIGH);
  delay(5000);
  digitalWrite(3,LOW);
  delay(5000);

  //Move up for 5s
  digitalWrite(4,HIGH);
  delay(5000);
  digitalWrite(4,LOW);
  delay(5000);
}   
