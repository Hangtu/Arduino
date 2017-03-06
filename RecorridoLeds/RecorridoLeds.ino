

 void setup(){
   for(int i=0;i<6;i++){
     pinMode(i,OUTPUT);
     digitalWrite(i,LOW);
   }     
 }
 
 void loop(){
   
   //digitalWrite(5,HIGH);
   recorrido1();
   recorrido2();
   recorrido3(); 
 }
 
 
 void recorrido1(){   
   for(int i=0;i<6;i++){
      digitalWrite(i,HIGH);
      delay(200); 
      digitalWrite(i,LOW); 
      delay(200);
   }
 }
 
 
  void recorrido2(){   
   for(int i=5;i>=0;i--){
      digitalWrite(i,HIGH);
      delay(200); 
      digitalWrite(i,LOW);
      delay(200); 
   }
 }
 
 
   void recorrido3(){   
   for(int i=0;i<6;i++){
      digitalWrite(i,HIGH); 
   }
     delay(3000);
    for(int i=0;i<6;i++){
      digitalWrite(i,LOW); 
   }
 }
