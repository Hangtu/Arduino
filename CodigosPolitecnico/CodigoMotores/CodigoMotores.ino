int out1=5;
int out2=6; 
int out3=10;
int out4=11;

int velGiro=255;  //velocidad giro
int velArran=255; //velocidad arranque

void setup(){
   pinMode(out1,OUTPUT);
   pinMode(out2,OUTPUT);
   pinMode(out3,OUTPUT);
   pinMode(out4,OUTPUT);
}


void loop(){
  izquierda();
  delay(3000);
  detener();
  delay(400);
  derecha();
  delay(3000);
  detener();
  delay(400);  
}



void adelante(){
     adelanteI(velArran);
     adelanteD(velArran);
}


void atras(){
      atrasI(velArran);  
      atrasD(velArran);
}


void izquierda(){
      adelanteD(velGiro);
      atrasI(velGiro);
}

void derecha(){
      adelanteI(velGiro);
      atrasD(velGiro); 
}


void detener(){
     digitalWrite(out1,LOW);
     digitalWrite(out2,LOW);
     digitalWrite(out3,LOW);  
     digitalWrite(out4,LOW);  
}





void adelanteI(int velocidad){
  digitalWrite(out2,LOW);
  analogWrite(out1,velocidad);  
}

void adelanteD(int velocidad){
  digitalWrite(out4,LOW);
  analogWrite(out3,velocidad);  
}


void atrasI(int velocidad){
  digitalWrite(out1,LOW);
  analogWrite(out2,velocidad);  
}

void atrasD(int velocidad){
  digitalWrite(out3,LOW);
  analogWrite(out4,velocidad);  
}

