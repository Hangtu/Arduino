int out1=5;
int out2=6;

void setup(){
 pinMode(out1,OUTPUT);  
 pinMode(out2,OUTPUT);
// pinMode();  
}


void loop(){
  
  adelante();
  delay(3000);
  atras();
  delay(3000);
  
}


void adelante (){
  analogWrite(out1,150);
  digitalWrite(out2,LOW);
}

void atras(){
   digitalWrite(out1,LOW);
   analogWrite(out2,150);  
}

