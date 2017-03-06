
int pinA=2;
int pinB=3;
int pinC=4;
int pinD=5;
int pinE=6;
int pinF=7;
int pinG=8;
int input;

char h=HIGH;
char l=LOW;

void setup(){
  Serial.begin(9600);
  pinMode(pinA,OUTPUT);
  pinMode(pinB,OUTPUT);
  pinMode(pinC,OUTPUT);
  pinMode(pinD,OUTPUT);
  pinMode(pinE,OUTPUT);
  pinMode(pinF,OUTPUT);
  pinMode(pinG,OUTPUT);
}


void loop(){
while(Serial.available() > 0){ // Don't read unless
    input=Serial.read();

  if(input=='G'){
     digito(l,l,l,l,l,l,h);
 }// Fin Del IF
  else{
   
    //CERO
  if(input=='0'){
  digito(h,h,h,h,h,h,l);
  
  }
  //UNO
  if(input=='1'){
  digito(l,h,h,l,l,l,l);
  
  }
  //DOS
  if(input=='2'){
  digito(h,h,l,h,h,l,h);
  }
  //TRES
  if(input=='3'){
  digito(h,h,h,h,l,l,h);
  } 
 //CUATRO 
  if(input=='4'){
  digito(l,h,h,l,l,h,h);
  
  }
 //CINCO
 if(input=='5'){
  digito(h,l,h,h,l,h,h);
  
 }
 //SEIS
 if(input=='6'){
  digito(h,l,h,h,h,h,h);
  
 }
 //SIETE
 if(input=='7'){
  digito(h,h,h,l,l,l,l);
  
 }
 if(input=='8'){
  digito(h,h,h,h,h,h,h);
  
 }
 //NUEVE
 if(input=='9'){ 
  digito(h,h,h,l,l,h,h);
  
 }
 if(input=='A'){
  //A
  digito(h,h,h,l,h,h,h);  
 }
 //B
 if(input=='B'){
  digito(l,l,h,h,h,h,h);
 }
 
  //C
 if(input=='C'){
  digito(l,l,l,h,h,l,h);
 }
  //D
  if(input=='D'){
  digito(l,h,h,h,h,l,h);
  }
  //E
  if(input=='E'){
  digito(h,l,l,h,h,h,h);
  }
  //F
  if(input=='F'){
  digito(h,l,l,l,h,h,h);
  }
 }
    
}// Fin Del While

}//fin Del Loop


void digito(char a,char b, char c, char d, char e , char f ,char g){ 
  
  digitalWrite(pinA,a); 
  digitalWrite(pinB,b); 
  digitalWrite(pinC,c); 
  digitalWrite(pinD,d); 
  digitalWrite(pinE,e); 
  digitalWrite(pinF,f); 
  digitalWrite(pinG,g);
  
}


