int led1 = 11;
int led2 = 12;
int led3 = 13;
void setup() {
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  Serial.begin(9600);// put your setup code here, to run once:

}

void loop() {
  int mit = Serial.read();
  if(mit=='X'){
    digitalWrite(led1,HIGH);
    digitalWrite(led2,HIGH);
    digitalWrite(led3,HIGH);
  }
  if(mit=='Y'){
    digitalWrite(led1,LOW);
    digitalWrite(led2,LOW);
    digitalWrite(led3,LOW);
  }
  if(mit=='A'){
    digitalWrite(led1,HIGH);
  }
  if(mit=='B'){
    digitalWrite(led1,LOW);
  }
  if(mit=='C'){
    digitalWrite(led2,HIGH);
  }
  if(mit=='D'){
    digitalWrite(led2,LOW);
  }
  if(mit=='E'){
    digitalWrite(led3,HIGH);
  }
  if(mit=='F'){
    digitalWrite(led3,LOW);
  }

  // put your main code here, to run repeatedly:

}
