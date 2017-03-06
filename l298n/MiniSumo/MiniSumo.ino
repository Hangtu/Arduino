int out1=3;
int out2=5; 
int out3=8;
int out4=13;

void setup(){
   pinMode(out1,OUTPUT);
   pinMode(out2,OUTPUT);
   pinMode(out3,OUTPUT);
   pinMode(out4,OUTPUT);
}


void loop(){
atrasIzq();
delay(5000);
adelanteIzq();
delay(5000);  
}


void atrasIzq(){
    digitalWrite(out1,LOW);
    analogWrite(out2,255);
}

void adelanteIzq(){
  digitalWrite(out2,LOW);
  analogWrite(out1,255);  
}
