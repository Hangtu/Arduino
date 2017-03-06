
//VARIABLES
int filas[]={2,3,4,5,6,7,8};
int colu[]={9,10,11,12,13};
char h=HIGH;
char l=LOW;
char dato;
//DATOS DE INICIO

void setup(){  
  Serial.begin(9600);  
  for (int i=2;i<=13;i++){
   pinMode(i,OUTPUT);
  }
   matrizCero();
}
//METODOS  

void loop(){ 
  letraA();
  letraB();
  letraC();
  letraD();
  letraE();
  letraF();
  letraG();
  letraH();
  letraI();
  letraJ();
  letraK();
  letraL();
  letraM();
  letraN();
  letraO();
  letraP();
  letraQ();
  letraR();
  letraS();
  letraT();
  letraU();
  letraV();
  letraW();
  letraX();
  letraY();
  letraZ();
}

// CODIGOS DE CADA LETRAS

 void letraA(){
 for (int repe=0;repe<=250;repe++){
   apagar(2,l,h,h,h,l);
   for(int i=8;i>=5;i--){
   encender(i,l,h,h,h,l); 
   apagar(i,h,l,l,l,h);
   }
   encender(5,l,l,l,l,l);
   apagar(5,h,h,h,h,h);
   
   for(int i=4;i>=3;i--){
   encender(i,l,h,h,h,l); 
   apagar(i,h,l,l,l,h);
   }
   encender(2,h,l,l,l,h);
   
  } 
 }

  void letraB(){
 for (int repe=0;repe<=250;repe++){
   int fi[]={3,4,6,7};
   for(int i=0;i<=3;i++){
     encender(fi[i],l,h,h,h,l);
     apagar(fi[i],h,h,h,h,h);
   }
      int fi2[]={2,5,8};
      for(int i=0;i<=2;i++){
       encender(fi2[i],l,l,l,l,h);
       apagar(fi2[i],h,h,h,h,h);
   }   
    }
  }
  
  void letraC(){
 for (int repe=0;repe<=250;repe++){
   int fi[]={2,8};
   for(int i=0;i<=1;i++){
     encender(fi[i],h,l,l,l,h);
     apagar(fi[i],h,h,h,h,h);
   }
      int fi2[]={3,7};
      for(int i=0;i<=1;i++){
       encender(fi2[i],l,h,h,h,l);
       apagar(fi2[i],h,h,h,h,h);
   }   
      int fi3[]={4,5,6};
      for(int i=0;i<=2;i++){
       encender(fi3[i],l,h,h,h,h);
       apagar(fi3[i],h,h,h,h,h);
   }   
    }
  }
  
  void letraD(){
 for (int repe=0;repe<=250;repe++){
      int fi[]={2,8};
      int fi1[]={3,7};
      int fi2[]={4,5,6};
      
      for(int i=0;i<=1;i++){
         encender(fi[i],l,l,l,h,h);
         apagar(fi[i],h,h,h,h,h);
      }
      
       for(int i=0;i<=1;i++){
         encender(fi1[i],l,h,h,l,h);
         apagar(fi1[i],h,h,h,h,h);
      }
       for(int i=0;i<=2;i++){
         encender(fi2[i],l,h,h,h,l);
         apagar(fi2[i],h,h,h,h,h);
      }
      
    }
  }
  
     void letraE(){
 for (int repe=0;repe<=250;repe++){  
      int fi[]={2,3,4,5,6,7,8};
      int fi1[]={2,5,8};
      for(int i=0;i<=6;i++){
         encender(fi[i],l,h,h,h,h);
         apagar(fi[i],h,h,h,h,h);
      }     
         for(int i=0;i<=2;i++){
         encender(fi1[i],h,l,l,l,l);
         apagar(fi1[i],h,h,h,h,h);
         
      }   
    }
  }
  
       void letraF(){
 for (int repe=0;repe<=250;repe++){  
      int fi[]={2,3,4,5,6,7,8};
      int fi1[]={2,5};
      for(int i=0;i<=6;i++){
         encender(fi[i],l,h,h,h,h);
         apagar(fi[i],h,h,h,h,h);
      }     
         for(int i=0;i<=1;i++){
         encender(fi1[i],h,l,l,l,l);
         apagar(fi1[i],h,h,h,h,h);
         
      }   
    }
  }
  
       void letraG(){
 for (int repe=0;repe<=250;repe++){  
      int fi[]={6,7};
      for(int i=0;i<=6;i++){
         encender(fi[i],l,h,h,h,l);
         off(fi[i]);
      }
        encender(2,h,l,l,l,h);
        off(2);
        encender (3,l,h,h,h,l);
        off(3);
        encender(4,l,h,h,h,h);
        off(4);
        encender(5,l,h,l,l,l);
        off(5);
        encender(8,h,l,l,l,l);
        off(8);  
    }
  }
  
     void letraH(){
 for (int repe=0;repe<=250;repe++){ 
     int fi[]={2,3,4,5,6,7,8};
      for(int i=0;i<=6;i++){
        encender(fi[i],l,h,h,h,l);
        off(fi[i]);
      }
        encender(5,l,l,l,l,l);
        off(5);           
    }
  }
  
       void letraI(){
 for (int repe=0;repe<=250;repe++){ 
     int fi[]={2,3,4,5,6,7,8};
     int fi1[]={2,8};
      for(int i=0;i<=6;i++){
        encender(fi[i],h,h,l,h,h);
        off(fi[i]);
      }
       for (int i=0; i<=1;i++){
        encender(fi1[i],h,l,l,l,h);
        off(fi1[i]); 
      }        
    }
  }
  
 void letraJ(){
 for (int repe=0;repe<=250;repe++){ 
     int fi[]={2,3,4,5,6};
      for(int i=0;i<=4;i++){
        encender(fi[i],h,h,h,l,h);
        off(fi[i]);
      }
        encender(2,h,h,l,h,l);
        off(2);
        encender(7,l,h,h,l,h);
        off(7);
        encender(8,h,l,l,h,h);
        off(8);
    }
  }
  
 void letraK(){
 for (int repe=0;repe<=250;repe++){ 
     int fi[]={2,3,4,5,6,7,8};
     int fi1[]={2,8};
     int fi2[]={3,7};
     int fi3[]={4,6};
     
      for(int i=0;i<=6;i++){
        encender(fi[i],l,h,h,h,h);
        off(fi[i]);
      }
            for(int i=0;i<=1;i++){
        encender(fi1[i],h,h,h,h,l);
        off(fi1[i]);
      }
            for(int i=0;i<=1;i++){
        encender(fi2[i],h,h,h,l,h);
        off(fi2[i]);
      }
            for(int i=0;i<=1;i++){
        encender(fi3[i],h,h,l,h,h);
        off(fi3[i]);
      }
        encender(5,h,l,h,h,h);
        off(5);           
    }
  }
  
 void letraL(){
 for (int repe=0;repe<=250;repe++){ 
     int fi[]={2,3,4,5,6,7};
      for(int i=0;i<=5;i++){
        encender(fi[i],l,h,h,h,h);
        off(fi[i]);
      }
       encender(8,l,l,l,l,l);
       off(8);
    }
  }
  
 void letraM(){
 for (int repe=0;repe<=250;repe++){ 
     int fi[]={2,3,4,5,6,7,8};
     int fi1[]={2,8};
      for(int i=0;i<=6;i++){
        encender(fi[i],l,h,h,h,l);
        off(fi[i]);
      }
       encender(3,h,l,h,l,h); 
       off(3); 
       encender(4,h,h,l,h,h); 
       off(4); 
       encender(5,h,h,l,h,h); 
       off(5); 
    }
  }
  
   void letraN(){
 for (int repe=0;repe<=250;repe++){ 
     int fi[]={2,3,4,5,6,7,8};
     int fi1[]={2,8};
      for(int i=0;i<=6;i++){
        encender(fi[i],l,h,h,h,l);
        off(fi[i]);
      }
       encender(4,h,l,h,h,h); 
       off(4); 
       encender(5,h,h,l,h,h); 
       off(5); 
       encender(6,h,h,h,l,h); 
       off(6); 
    }
  }
  
 void letraO(){
 for (int repe=0;repe<=250;repe++){ 
     int fi[]={3,4,5,6,7};
     int fi1[]={2,8};
      for(int i=0;i<=4;i++){
        encender(fi[i],l,h,h,h,l);
        off(fi[i]);
      }
       for (int i=0; i<=1;i++){
        encender(fi1[i],h,l,l,l,h);
        off(fi1[i]); 
      }        
    }
  }  
  
 void letraP(){
 for (int repe=0;repe<=250;repe++){ 
     int fi[]={2,3,4,5,6,7,8};
     int fi1[]={2,5};
      for(int i=0;i<=6;i++){
        encender(fi[i],l,h,h,h,h);
        off(fi[i]);
      }
       for (int i=0; i<=1;i++){
        encender(fi1[i],l,l,l,l,h);
        off(fi1[i]); 
      }        
       encender(3,h,h,h,h,l);
       off(3);
       encender(4,h,h,h,h,l);
       off(4);
    }
  }
  
   void letraQ(){
 for (int repe=0;repe<=250;repe++){ 
     int fi[]={3,4,5,6,7};
     int fi1[]={2,8};
      for(int i=0;i<=4;i++){
        encender(fi[i],l,h,h,h,l);
        off(fi[i]);
      }
        encender(8,h,l,l,h,h);
        off(8);         
        encender(8,h,h,h,h,l);
        off(8);
        encender(7,h,h,h,l,h);
        off(7);
        encender(6,h,h,l,h,h);
        off(6);
        encender(2,h,l,l,l,h);
        off(2);
      }        
    }
    
   void letraR(){
 for (int repe=0;repe<=250;repe++){ 
     int fi[]={2,3,4,5,6,7,8};
     int fi1[]={2,5};
      for(int i=0;i<=6;i++){
        encender(fi[i],l,h,h,h,h);
        off(fi[i]);
      }
       for (int i=0; i<=1;i++){
        encender(fi1[i],l,l,l,l,h);
        off(fi1[i]); 
      }        
       encender(3,h,h,h,h,l);
       off(3);
       encender(4,h,h,h,h,l);
       off(4);
       encender(8,h,h,h,h,l);
      off(8);
      encender(7,h,h,h,l,h);
      off(7);
      encender(6,h,h,l,h,h);
      off(6);
    }
  }
  
 void letraS(){
 for (int repe=0;repe<=250;repe++){  
      int fi[]={6,7};
      int fi1[]={3,4};
      for(int i=0;i<=1;i++){
         encender(fi[i],h,h,h,h,l);
         apagar(fi[i],h,h,h,h,h);
      }     
         for(int i=0;i<=1;i++){
         encender(fi1[i],l,h,h,h,h);
         apagar(fi1[i],h,h,h,h,h);
      }   
        encender(2,h,l,l,l,l);
        off(2);
        encender(5,h,l,l,l,h);
        off(5);
        encender(8,l,l,l,l,h);
        off(8);
    }
  }
  
         void letraT(){
 for (int repe=0;repe<=250;repe++){ 
     int fi[]={2,3,4,5,6,7,8};
      for(int i=0;i<=6;i++){
        encender(fi[i],h,h,l,h,h);
        off(fi[i]);
      }
        encender(2,l,l,l,l,l);
        off(2);        
    }
  }
  
   void letraU(){
 for (int repe=0;repe<=250;repe++){ 
     int fi[]={2,3,4,5,6,7};
      for(int i=0;i<=5;i++){
        encender(fi[i],l,h,h,h,l);
        off(fi[i]);
      }
        encender(8,h,l,l,l,h);
        off(8);
              
    }
  }  
  
 void letraV(){
 for (int repe=0;repe<=250;repe++){ 
     int fi[]={2,3,4,5,6};
     int fi1[]={2,8};
      for(int i=0;i<=4;i++){
        encender(fi[i],l,h,h,h,l);
        off(fi[i]);
      }
        encender(7,h,l,h,l,h);
        off(7);
        
        encender(8,h,h,l,h,h);
        off(8);
              
    }
  }  
  
     void letraW(){
 for (int repe=0;repe<=250;repe++){ 
     int fi[]={2,3,4,5,6,7};
      for(int i=0;i<=5;i++){
        encender(fi[i],l,h,h,h,l);
        off(fi[i]);
      } 
        encender(5,h,h,l,h,h);
        off(5);
       
        encender(6,h,h,l,h,h);
        off(6);
       encender(7,h,h,l,h,h);
        off(7);
        encender(8,h,l,h,l,h);
        off(8);
        
              
    }
  }  
  
 void letraX(){
 for (int repe=0;repe<=250;repe++){  
      int fi[]={2,3,7,8};
      int fi1[]={2,5,8};
      for(int i=0;i<=3;i++){
         encender(fi[i],l,h,h,h,l);
         apagar(fi[i],h,h,h,h,h);
      }     
       encender(4,h,l,h,l,h);
       off(4);
       encender(5,h,h,l,h,h);
       off(5);
       encender(6,h,l,h,l,h);
       off(6);
    }
  }
  
       void letraY(){
 for (int repe=0;repe<=250;repe++){  
      int fi[]={2,3};
      int fi1[]={6,7,8};
      for(int i=0;i<=1;i++){
         encender(fi[i],l,h,h,h,l);
         apagar(fi[i],h,h,h,h,h);
      }     
      for(int i=0;i<=2;i++){
         encender(fi1[i],h,h,l,h,h);
         off(fi1[i]);
      }
       encender(4,h,l,h,l,h);
       off(4);
       encender(5,h,h,l,h,h);
       off(5);
    }
  }
  
  void letraZ(){
    for(int i=0; i<=250;i++){  
      encender(2,l,l,l,l,l);
      off(2);    
      encender(3,h,h,h,h,l);
      off(3);
      encender(4,h,h,h,l,h);
      off(4);
      encender(5,h,h,l,h,h);
      off(5);
      encender(6,h,l,h,h,h);
      off(6);
      encender(7,l,h,h,h,h);
      off(7);
      encender(8,l,l,l,l,l);
      off(8);
    }
  }
  
  
//************************************************************************************METODOS DEL CODIGO**********************************************************************************
//METODOS CREADOS POR HANG TU !! ************************************************************************************************************************************************
//ENCENDER FILA Y COLUMNA
 void encender(int pin,char c1,char c2, char c3, char c4 , char c5){
  digitalWrite(pin,h);
  digitalWrite(9,c1);  
  digitalWrite(10,c2); 
  digitalWrite(11,c3); 
  digitalWrite(12,c4); 
  digitalWrite(13,c5);
  delay(1); 
 }
 
 
// APAGAR FILA Y COLUMNA /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  void apagar(int pin,char c1,char c2, char c3, char c4 , char c5){
  digitalWrite(pin,l);
  digitalWrite(9,c1);  
  digitalWrite(10,c2); 
  digitalWrite(11,c3); 
  digitalWrite(12,c4); 
  digitalWrite(13,c5);
  delayMicroseconds(1);
 }
 
  void off(int pin){
  digitalWrite(pin,l);
  digitalWrite(9,h);  
  digitalWrite(10,h); 
  digitalWrite(11,h); 
  digitalWrite(12,h); 
  digitalWrite(13,h);
  delayMicroseconds(1);
 }
 
 void matrizCero(){
     for (int j=0; j<=7 ;j++){
   digitalWrite(filas[j],LOW); 
  }  
  for(int k=0;k<=5;k++){
    digitalWrite(colu[k],HIGH);    
  } 
 }
 
 //CREADO POR HANG TU WONG LEY
