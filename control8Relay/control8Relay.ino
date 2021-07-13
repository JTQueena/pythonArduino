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
    digitalWrite(ledPinA, LOW);
        break;
  case'q':
    digitalWrite(ledPinA, HIGH);
    break;

  case'2':
    digitalWrite(ledPinB, LOW);
    break;
  case'w':
    digitalWrite(ledPinB, HIGH);
    break;
    
  case'3':
    digitalWrite(ledPinC, LOW);
    break;
  case'e':
    digitalWrite(ledPinC, HIGH);
    break;
    
  case'4':
    digitalWrite(ledPinD, LOW);
    break;
  case'r':
    digitalWrite(ledPinD, HIGH);
    break;

  case'5':
    digitalWrite(ledPinE, LOW);
    break;
  case't':
    digitalWrite(ledPinE, HIGH);
    break;

  case'6':
    digitalWrite(ledPinF, LOW);
    break;
  case'y':
    digitalWrite(ledPinF, HIGH);
    break;

  case'7':
    digitalWrite(ledPinG, LOW);
    break;
  case'u':
    digitalWrite(ledPinG, HIGH);
    break;

  case'8':
    digitalWrite(ledPinH, LOW);
    break;
  case'i':
    digitalWrite(ledPinH, HIGH);
    break;
}
  }

}
