int ledPinA = 9;
int ledPinB = 8;
int ledPinC = 7;
int ledPinD = 6;
int ledPinE = 5;
int ledPinF = 4;
int ledPinG = 3;
int ledPinH = 2;

void setup() {
  pinMode(9, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(2, OUTPUT);
  Serial.begin(115200);
}

void loop() {
  char c;
  if (Serial.available()>0)
  {
    c = Serial.read();
switch (c){
  case'1':
    digitalWrite(ledPinA, HIGH);
        break;
  case'q':
    digitalWrite(ledPinA, LOW);
    break;

  case'2':
    digitalWrite(ledPinB, HIGH);
    break;
  case'w':
    digitalWrite(ledPinB, LOW);
    break;
    
  case'3':
    digitalWrite(ledPinC, HIGH);
    break;
  case'e':
    digitalWrite(ledPinC, LOW);
    break;
    
  case'4':
    digitalWrite(ledPinD, HIGH);
    break;
  case'r':
    digitalWrite(ledPinD, LOW);
    break;

  case'5':
    digitalWrite(ledPinE, HIGH);
    break;
  case't':
    digitalWrite(ledPinE, LOW);
    break;

  case'6':
    digitalWrite(ledPinF, HIGH);
    break;
  case'y':
    digitalWrite(ledPinF, LOW);
    break;

  case'7':
    digitalWrite(ledPinG, HIGH);
    break;
  case'u':
    digitalWrite(ledPinG, LOW);
    break;

  case'8':
    digitalWrite(ledPinH, HIGH);
    break;
  case'i':
    digitalWrite(ledPinH, LOW);
    break;
}
  }

}
