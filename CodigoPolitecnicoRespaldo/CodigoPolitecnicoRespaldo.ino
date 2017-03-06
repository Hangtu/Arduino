//MIRANDO DE ATRAS HACIA ADELANTE

//SENSOR QTR
#include <QTRSensors.h>

#define NUM_SENSORS   1     
#define TIMEOUT       2500  
#define EMITTER_PIN   3    

QTRSensorsRC qtrrc((unsigned char[]) {5},NUM_SENSORS, TIMEOUT, EMITTER_PIN);  // El 5 es el pin de out debe estar en un PWM
unsigned int sensorValues[NUM_SENSORS];

//SENSORES ULTRASONICOS
//SENSOR DERECHO
    int trigD=12;
    int echoD=13;

//SENSOR IZQUIERDO
    int trigI=2;
    int echoI=3;

//ESTADO DE LOS SENSORES
    boolean sensorI;
    boolean sensorD;
    
//MOTORES
    int out1=5;
    int out2=6; 
    int out3=10;
    int out4=11;

//PARA CALIBRAR

    int velGiro=255;  //velocidad giro
    int velArran=255; //velocidad arranque
    int distSensor=35; //rango en cm para detectar objetivos
    int qtrSensor=200; // rango para la deteccion de linea blanca

// TEMPORALES
   int temporal=0;
void setup(){
    Serial.begin(9600);
       pinMode(trigI,OUTPUT);
       pinMode(trigD,OUTPUT);
       pinMode(echoI,INPUT);
       pinMode(echoD,INPUT);    
       pinMode(out1,OUTPUT);
       pinMode(out2,OUTPUT);
       pinMode(out3,OUTPUT);
       pinMode(out4,OUTPUT);
}
   
void loop(){
      sensorQTR();
      ultrasonicoI();
      ultrasonicoD();
      primerLinea();
      delayMicroseconds(1000);
            
        if(sensorI==true && sensorD==false){
           Serial.println("IZQUIERDA"); 
        }
        if(sensorI==false && sensorD==true){
           Serial.println("DERECHA"); 
        }
        if(sensorI==true && sensorD==true){
           Serial.println("ADELANTE");
           delay(400); 
        }
        
      Serial.println(""); 
      delay(500);
}
   
 
 
 
 
 
 
 
 
 
 // TODO EL CODIGO DE LOS SENSORES

 
    void ultrasonicoI(){ // IZQUIERDO 
      int distancia=calculoUltrasonico(trigI,echoI);   
        if(distancia>=0 && distancia <= distSensor){
             sensorI=true;
             Serial.println(distancia);
        }
        else{
             sensorI=false; 
        }  
    }
    
    
    void ultrasonicoD(){ // DERECHO
      int distancia=calculoUltrasonico(trigD,echoD);   
        if(distancia>=0 && distancia <= distSensor){
             sensorD=true;
             Serial.println(distancia);
        }
        else{
             sensorD=false; 
        }  
    }
   
int calculoUltrasonico(int trig, int echo){
    digitalWrite(trig, LOW);  // Inicializamos el senor
    delayMicroseconds(2);
    digitalWrite(trig, HIGH);  // Flanco ascendente
    delayMicroseconds(10);    // Duracion del pulso
    digitalWrite(trig, LOW);  // Flanco descendente   
    int duracion = pulseIn(echo, HIGH);
    int distancia = (duracion/2)/29;  
    return distancia;    
}



// CODIGO MOTORES //
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


void sensorQTR(){
  qtrrc.read(sensorValues);
  if(sensorValues[0]<=qtrSensor){
      atras();
      delay(1500);
      sensorI=true;
      sensorD=false;
  }
}

void primerLinea(){
   if(temporal==0){
        sensorI=true; 
        sensorD=false;
        temporal=1;
       }
}
  
