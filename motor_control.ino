int forward = 6;
int reverse = 7;
int left = 8;
int right = 9;

int in1 = 10;
int in2 = 11;
int in3 = 12;
int in4 = 13;
void setup() {
 pinMode(in1,OUTPUT);
 pinMode(in2,OUTPUT);
 pinMode(in3,OUTPUT);
 pinMode(in4,OUTPUT);
 pinMode(forward,INPUT_PULLUP);
 pinMode(reverse,INPUT_PULLUP);
 pinMode(left,INPUT_PULLUP);
 pinMode(right,INPUT_PULLUP);
 Serial.begin(9600);
}

void loop() {
  if(digitalRead(forward) == LOW){
   Serial.println("FORWARD!");
   fw(); 
  }
 if(digitalRead(reverse) == LOW){
   Serial.println("REVERSE!"); 
   rv();
  }
  if(digitalRead(left) == LOW){
   Serial.println("LEFT!"); 
   l();
  }
  if(digitalRead(right) == LOW){
   Serial.println("RIGHT!"); 
   r();
  }
  if(digitalRead(forward) == HIGH && digitalRead(reverse) == HIGH && digitalRead(left) == HIGH && digitalRead(right) == HIGH){
    stp();
    Serial.println("STOP");
  }
}
void fw(){
  digitalWrite(in1,HIGH);
  digitalWrite(in2,LOW);
  digitalWrite(in3,HIGH);
  digitalWrite(in4,LOW);
}
void stp(){
  digitalWrite(in1,LOW);
  digitalWrite(in2,LOW);
  digitalWrite(in3,LOW);
  digitalWrite(in4,LOW);
}
void rv(){
  digitalWrite(in1,LOW);
  digitalWrite(in2,HIGH);
  digitalWrite(in3,LOW);
  digitalWrite(in4,HIGH);
}
void l(){
  digitalWrite(in1,LOW);
  digitalWrite(in2,LOW);
  digitalWrite(in3,HIGH);
  digitalWrite(in4,LOW);
}
void r(){
  digitalWrite(in1,HIGH);
  digitalWrite(in2,LOW);
  digitalWrite(in3,LOW);
  digitalWrite(in4,LOW);
}
