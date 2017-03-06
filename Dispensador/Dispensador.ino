int out1=5;  //pin 5
int out2=6;  //pin 6
int trig1=10; //pin 10
int echo1=8; //pin 8

int rele1=1; //pines del 1 al 4
int rele2=2;
int rele3=3;
int rele4=4;

int volts=12;

//DISTANCIA DE CADA ORIFICIO
int A=3;   
int B=8;
int C=19;
int D=26;


int dU;  //distancia Ultrasonico
int vel=92; //velocidad de los motores
int tiempoR=5000; //tiempo de relevador



void setup(){
   pinMode(out1,OUTPUT);  
   pinMode(out2,OUTPUT);
   pinMode(trig1,OUTPUT);
   pinMode(rele1,OUTPUT);  
   pinMode(rele2,OUTPUT);
   pinMode(rele3,OUTPUT);
   pinMode(rele4,OUTPUT); 
   pinMode(echo1,INPUT);
   
   pinMode(volts,OUTPUT);
   digitalWrite(volts,HIGH);
   Serial.begin(9600);
}


void loop(){
/* while(Serial.available() > 0){ // Don't read unless
 
   char input=Serial.read();
   if(input=='A'){
     moverP1();
     moverP2();
     moverP3();
     moverP4();
   }
   if(input=='B'){
    // moverP1();
   }
   if(input=='C'){
    // moverP1();
   }
   if(input=='D'){
    // moverP1();
   }
 }
*/
    moverP1();
    moverP2();
    moverP3();


}

 void moverP1(){     
    
   if(dU<A){
        while(dU<A){          
          atras();
          calculoUltrasonico();  
          delay(500);
          Serial.println("atras");
        }
     }
    else if(dU>A){
        while(dU>A){
          adelante();
          calculoUltrasonico(); 
          delay(500);
          Serial.println("adelante");        
        }
    }
    if(dU==A){
         parar();
         delay(3000);
         //relevador1();
         calculoUltrasonico();  
         Serial.println("En El punto");   
   } 
 }
 
 
  void moverP2(){     
    
   if(dU<B){
        while(dU<B){          
          atras();
          calculoUltrasonico();  
          delay(500);
          Serial.println("atras");
        }
     }
    else if(dU>B){
        while(dU>B){
          adelante();
          calculoUltrasonico(); 
          delay(500);
          Serial.println("adelante");        
        }
    }
    if(dU==B){
         parar();
         delay(3000);
         calculoUltrasonico();   
        Serial.println("En El punto");   
   } 
 }

void moverP3(){     
    
   if(dU<C){
        while(dU<C){          
          atras();
          calculoUltrasonico();  
          delay(500);
          Serial.println("atras");
        }
     }
    else if(dU>C){
        while(dU>C){
          adelante();
          calculoUltrasonico(); 
          delay(500);
          Serial.println("adelante");        
        }
    }
    if(dU==C){
         parar();
         delay(3000);
         Serial.println("En El punto");
         calculoUltrasonico();   
        Serial.println("En El punto");   
   } 
 }

void moverP4(){     
     if(dU>D){
        while(dU!=D){          
          adelante();
          calculoUltrasonico();  
        }
     }
    else if(dU<D){
        while(dU!=D){
          atras();
          calculoUltrasonico();         
        }
    }
   else{
         parar(); 
         relevador4();      
   } 
 }




void calculoUltrasonico(){  
    digitalWrite(trig1, HIGH);  // Flanco ascendente
    delayMicroseconds(100);    // Duracion del pulso
    digitalWrite(trig1, LOW);  // Flanco descendente   
    int duracion = pulseIn(echo1, HIGH);
    dU= (duracion/2) / 29;  
  //  Serial.println(dU);
}

void adelante (){
  analogWrite(out1,vel);
  digitalWrite(out2,LOW);
}

void atras(){
   digitalWrite(out1,LOW);
   analogWrite(out2,vel);  
}

void parar(){
  
  digitalWrite(out1,LOW);
  digitalWrite(out2,LOW);
}


//Relevadores 

void relevador1(){
  digitalWrite(rele1,HIGH);
  delay(tiempoR);
  digitalWrite(rele1,LOW);  
}


void relevador2(){
  digitalWrite(rele2,HIGH);
  delay(tiempoR);
  digitalWrite(rele2,LOW);  
  
}


void relevador3(){
  digitalWrite(rele3,HIGH);
  delay(tiempoR);
  digitalWrite(rele3,LOW);  
  
}


void relevador4(){
  
  digitalWrite(rele4,HIGH);
  delay(tiempoR);
  digitalWrite(rele4,LOW);  
  
}
