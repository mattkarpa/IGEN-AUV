void setup() {
  pinMode(1,OUTPUT);
  delay(60000);
}

void loop() {
  digitalWrite(1,HIGH);
  delay(30000);
  digitalWrite(1,LOW);
  delay(120000);
}   
