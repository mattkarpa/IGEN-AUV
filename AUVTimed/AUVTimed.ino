int leftThrusterPin = 1;
int rightThrusterPin = 2;
int vertThrusterPin = 3;
int forwardThrustTime = 100000;  //How long to thrust in the forward direction in ms
int turnThrustTime = 100000;  //How long to thrust while turning in ms
int upThrustTime = 100000; //How long to thrust upwards in ms

void goForward(int time);
void goTurn(int time,char direct);
void goUp(int time);

void setup() {
  pinMode(leftThrusterPin,OUTPUT);
  pinMode(rightThrusterPin,OUTPUT);
  pinMode(vertThrusterPin,OUTPUT);
}

void loop() {
  goForward(forwardThrustTime);
  goTurn(turnThrustTime,'r');
  goForward(forwardThrustTime);
  goTurn(turnThrustTime,'r');
  goForward(forwardThrustTime);
  goTurn(turnThrustTime,'r');
  goForward(forwardThrustTime);
  goUp(upThrustTime);
}

void goForward(int time) {
  digitalWrite(leftThrusterPin,HIGH);
  digitalWrite(rightThrusterPin,HIGH);
  delay(time);
  digitalWrite(leftThrusterPin,LOW);
  digitalWrite(rightThrusterPin,LOW);
}

void goTurn(int time,char direct) {
  if(direct == 'r'){
    digitalWrite(leftThrusterPin,HIGH);
  }
  else if(direct == 'l'){
    digitalWrite(rightThrusterPin,HIGH);
  }
  delay(time);
  digitalWrite(leftThrusterPin,LOW);
  digitalWrite(rightThrusterPin,LOW);
}

void goUp(int time) {
  digitalWrite(vertThrusterPin,HIGH);
  delay(time);
  digitalWrite(vertThrusterPin,LOW);
}
  
