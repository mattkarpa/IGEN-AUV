void setup() {
  pinMode(1,OUTPUT);
  pinMode(2,OUTPUT);
  delay(60000);
}

void loop() {
  digitalWrite(1,HIGH);
  digitalWrite(2,HIGH);
  delay(30000);
  digitalWrite(1,LOW);
  digitalWrite(2,LOW);
  delay(120000);
}   
