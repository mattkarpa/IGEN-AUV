void setup() {
  pinMode(3,OUTPUT);
  delay(60000);
}

void loop() {
  digitalWrite(3,HIGH);
  delay(30000);
  digitalWrite(3,LOW);
  delay(120000);
}   
