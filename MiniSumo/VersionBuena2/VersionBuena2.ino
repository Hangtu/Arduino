#include <QTRSensors.h>

int out1=6;
int out2=9; 
int out3=10;
int out4=11;

int trig1=2;
int trig2=7;
int echo1=4;
int echo2=8;

#define NUM_SENSORS   1     
#define TIMEOUT       2500  
#define EMITTER_PIN   3 

QTRSensorsRC qtrrc((unsigned char[]) {5},NUM_SENSORS, TIMEOUT, EMITTER_PIN); 
unsigned int sensorValues[NUM_SENSORS];


boolean ultrasonicoIzq=false;
boolean ultrasonicoDer=false;

int buscando=0;

void setup(){
     Serial.begin(9600);     
     pinMode(trig1,OUTPUT);
     pinMode(trig2,OUTPUT);
     pinMode(echo1,INPUT);
     pinMode(echo2,INPUT);
     pinMode(out1,OUTPUT);
     pinMode(out2,OUTPUT);
     pinMode(out3,OUTPUT);
     pinMode(out4,OUTPUT);
  
     delay(3000);     
}

void loop(){
  
  qtrrc.read(sensorValues);
  calculoUltrasonico1();
  calculoUltrasonico2();
  calculoUltrasonico1();
  delay(10);
  
  if(buscando==0){
     Serial.println("Buscando");
     ultrasonicoDer=true; 
     ultrasonicoIzq=false;
     buscando=1;
  }
  
   if(sensorValues[0]<=200){
    Serial.print(sensorValues[0]);
    Serial.println(" Blanco");
    atras();
    delay(1000);
    ultrasonicoDer=true; 
    ultrasonicoIzq=false;;
   }
  
   if (ultrasonicoDer==true && ultrasonicoIzq==true){
          Serial.println("Adelante");
          adelante();
          delay(400);    
  }

  if (ultrasonicoDer==false && ultrasonicoIzq==true){  
         Serial.println("Izquierda");
         girarIzq();
  }
  
  
  if (ultrasonicoDer==true && ultrasonicoIzq==false){ 
          Serial.println("Derecha");
          girarDer();
  }
  
  
  if (ultrasonicoDer==false && ultrasonicoIzq==false){
         
          //SIGUE CON LA ULTIMA FUNCION       
                   
  }
  

  
  
}  //FIN DEL LOOP



//SECCION MOTOR//

void atrasIzq(){
    digitalWrite(out1,LOW);
    analogWrite(out2,255);
}

void adelanteIzq(){
  digitalWrite(out2,LOW);
  analogWrite(out1,255);  
}

void atrasDer(){
    digitalWrite(out4,LOW);
    analogWrite(out3,255);
}

void adelanteDer(){
  digitalWrite(out3,LOW);
  analogWrite(out4,255);  
}

void girarIzq(){
  //ADELANTE DERECHA
    digitalWrite(out3,LOW);
    analogWrite(out4,60);
  //ATRAS IZQ
    digitalWrite(out1,LOW);
    analogWrite(out2,60);
}

void girarDer(){
  //Adelante Izq
   digitalWrite(out2,LOW);
   analogWrite(out1,60);
  //Atras Derecha
   digitalWrite(out4,LOW);
   analogWrite(out3,60);
}

void atras(){
  atrasIzq();
  atrasDer();
}

void adelante(){
  adelanteIzq();
  adelanteDer();
}

void detener(){
 digitalWrite(out1,LOW);
 digitalWrite(out2,LOW);
 digitalWrite(out3,LOW);
 digitalWrite(out4,LOW); 
}

void buscar(){
  //ADELANTE DERECHA
  digitalWrite(out3,LOW);
  analogWrite(out4,60);
  //ATRAS IZQ
  digitalWrite(out1,LOW);
   analogWrite(out2,60);
}
//CALIBRACION DE SENSORES ULTRASONICOS//

void calculoUltrasonico1(){ // IZQUIERDO 
    digitalWrite(trig1, HIGH);  // Flanco ascendente
    delayMicroseconds(1000);    // Duracion del pulso
    digitalWrite(trig1, LOW);  // Flanco descendente   
    int duracion = pulseIn(echo1, HIGH);
    int distancia = (duracion/2) / 29;
     
     if(distancia>=0 && distancia <= 35){
       
        ultrasonicoIzq=true;
        
    }
    else{
      
        ultrasonicoIzq=false; 
    }  
}
   
void calculoUltrasonico2(){ //DERECHO
    digitalWrite(trig2, HIGH);  // Flanco ascendente
    delayMicroseconds(1000);        // Duracion del pulso
    digitalWrite(trig2, LOW);  // Flanco descendente   
    int duracion = pulseIn(echo2, HIGH);
    int distancia= (duracion/2) / 29;
    
    if(distancia>=0 && distancia <= 35){
      
        ultrasonicoDer=true;
    }   
    else{
      
        ultrasonicoDer=false; 
    }
}
