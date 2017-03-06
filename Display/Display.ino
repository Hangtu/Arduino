
int pinA=2;
int pinB=3;
int pinC=4;
int pinD=5;
int pinE=6;
int pinF=7;
int pinG=8;

char h=HIGH;
char l=LOW;
void setup(){
  
  pinMode(pinA,OUTPUT);
  pinMode(pinB,OUTPUT);
  pinMode(pinC,OUTPUT);
  pinMode(pinD,OUTPUT);
  pinMode(pinE,OUTPUT);
  pinMode(pinF,OUTPUT);
  pinMode(pinG,OUTPUT);
}


void loop(){
  //CERO
  digito(h,h,h,h,h,h,l);
  delay(1000);
  Serial.print(78);
  //UNO
  digito(l,h,h,l,l,l,l);
  delay(1000);
  //DOS
  digito(h,h,l,h,h,l,h);
  delay(1000);
 //TRES
  digito(h,h,h,h,l,l,h);
  delay(1000); 
 //CUATRO 
  digito(l,h,h,l,l,h,h);
  delay(1000);
 //CINCO
  digito(h,l,h,h,l,h,h);
  delay(1000);
 //SEIS
  digito(h,l,h,h,h,h,h);
  delay(1000);
 //SIETE
  digito(h,h,h,l,l,l,l);
  delay(1000);
 //OCHO 
  digito(h,h,h,h,h,h,h);
  delay(1000);
 //NUEVE 
  digito(h,h,h,l,l,h,h);
  delay(1000);
  //A
  digito(h,h,h,l,h,h,h);
  delay(1000);
  //B
  digito(l,l,h,h,h,h,h);
  delay(1000);
  //C
  digito(l,l,l,h,h,l,h);
  delay(1000);
  //D
  digito(l,h,h,h,h,l,h);
  delay(1000);
  //E
  digito(h,l,l,h,h,h,h);
  delay(1000);
  //F
  digito(h,l,l,l,h,h,h);
  delay(1000);
}

void digito(char a,char b, char c, char d, char e , char f ,char g){ 
  
  digitalWrite(pinA,a); 
  digitalWrite(pinB,b); 
  digitalWrite(pinC,c); 
  digitalWrite(pinD,d); 
  digitalWrite(pinE,e); 
  digitalWrite(pinF,f); 
  digitalWrite(pinG,g);
  
}

