void setup() {
  pinMode(3,OUTPUT);
  pinMode(2,OUTPUT);
  pinMode(4,OUTPUT);
  delay(120000);
}

void loop() {
  digitalWrite(3,HIGH);
  digitalWrite(2,HIGH);
  delay(60000);
  digitalWrite(3,LOW);
  digitalWrite(2,LOW);
  delay(120000);

  digitalWrite(3,HIGH);
  delay(60000);
  digitalWrite(3,LOW);
  delay(120000);

  digitalWrite(4,HIGH);
  delay(60000);
  digitalWrite(4,LOW);
  delay(120000);
}   
