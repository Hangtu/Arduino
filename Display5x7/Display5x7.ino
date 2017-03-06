

int filas[]={2,3,4,5,6,7,8};
int colu[]={9,10,11,12,13};


void setup(){
  for (int i=2;i<=13;i++){
pinMode(i,OUTPUT);
  }
  
   for (int j=0; j<=7 ;j++){
      digitalWrite(filas[j],LOW); 
  }
  
  for(int k=0;k<=5;k++){
    digitalWrite(colu[k],HIGH);
    
  }
}
 
void loop(){
  prueba();
  /* 
 prueba1(); 
 delay(1);
 prueba2();
 delay(1);
 prueba3();
 delay(1);
  */
}
 void prueba(){
    digitalWrite(5,LOW);
  digitalWrite(12,HIGH);
  digitalWrite(13,HIGH);
  
  digitalWrite(2,HIGH);
  digitalWrite(9,LOW);
  digitalWrite(10,LOW);
   delay(1);
   digitalWrite(2,LOW);
   digitalWrite(9,HIGH);
   digitalWrite(10,HIGH);
   
  digitalWrite(8,HIGH);
  digitalWrite(9,LOW);
  digitalWrite(10,LOW);
   delay(1); 
  
  digitalWrite(8,LOW);
  digitalWrite(9,HIGH);
  digitalWrite(10,HIGH);
  
  digitalWrite(5,HIGH);
  digitalWrite(12,LOW);
  digitalWrite(13,LOW);
  delay(1);
   
 }
  
 void prueba1(){
   
  digitalWrite(5,LOW);
  digitalWrite(12,HIGH);
  digitalWrite(13,HIGH);
  
  digitalWrite(2,HIGH);
  digitalWrite(9,LOW);
  digitalWrite(10,LOW);
   
 }
 void prueba2(){
   digitalWrite(2,LOW);
   digitalWrite(9,HIGH);
   digitalWrite(10,HIGH);
   
  digitalWrite(8,HIGH);
  digitalWrite(9,LOW);
  digitalWrite(10,LOW);
 }
 
  void prueba3(){ 
  
  digitalWrite(8,LOW);
  digitalWrite(9,HIGH);
  digitalWrite(10,HIGH);
  
  digitalWrite(5,HIGH);
  digitalWrite(12,LOW);
  digitalWrite(13,LOW);
   
 }
 
 
 
