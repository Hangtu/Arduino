int motorDer=5;
int motorIzq=6;

int trig1=10;
int echo1=8;

int trig2=11;
int echo2=12;


boolean ultrasonicoIzq=false;
boolean ultrasonicoDer=false;

void setup(){
     Serial.begin(9600);
     pinMode(trig1,OUTPUT);
     pinMode(trig2,OUTPUT);
     pinMode(echo1,INPUT);
     pinMode(echo2,INPUT);  
     pinMode(motorIzq,OUTPUT);
     pinMode(motorDer,OUTPUT);
     
}

void loop(){
  calculoUltrasonico1();
  calculoUltrasonico2();
  calculoUltrasonico1();
  
  if (ultrasonicoDer==true && ultrasonicoIzq==false){
        moverDer();
  }
  
  if (ultrasonicoDer==false && ultrasonicoIzq==true){
       moverIzq();
  }
  
   if (ultrasonicoDer==true && ultrasonicoIzq==true){
        //adelante();
  }
  
  if (ultrasonicoDer==false && ultrasonicoIzq==false){
       apagarMotores();
  }
  
  
}







//CALIBRACION DEL MOTOR//

void moverMotorDerecha(){
    analogWrite(motorDer,255); 
}

void moverMotorIzquierda(){
    analogWrite(motorIzq,255); 
}


void moverIzq(){
    analogWrite(motorIzq,1);
    analogWrite(motorDer,100); 
}

void moverDer(){
    analogWrite(motorIzq,100);
    analogWrite(motorDer,2); 
}

void apagarMotores(){
   analogWrite(motorIzq,0);
   analogWrite(motorDer,0); 
}

//CALIBRACION DE SENSORES ULTRASONICOS//

void calculoUltrasonico1(){ // IZQUIERDO 
    digitalWrite(trig1, HIGH);  // Flanco ascendente
    delayMicroseconds(100);    // Duracion del pulso
    digitalWrite(trig1, LOW);  // Flanco descendente   
    int duracion = pulseIn(echo1, HIGH);
    int distancia = (duracion/2) / 29;
     
     if(distancia>=0 && distancia <= 50){
        Serial.print("sensor 1zq = ");
        Serial.print (distancia);
        Serial.println("");
        ultrasonicoIzq=true;
    }
    else{
        ultrasonicoIzq=false;
    }  
}
   
void calculoUltrasonico2(){ //DERECHO
    digitalWrite(trig2, HIGH);  // Flanco ascendente
    delayMicroseconds(100);        // Duracion del pulso
    digitalWrite(trig2, LOW);  // Flanco descendente   
    int duracion = pulseIn(echo2, HIGH);
    int distancia= (duracion/2) / 29;
    
    if(distancia>=0 && distancia <= 50){
        Serial.print("sensor Der = ");
        Serial.print (distancia);
        Serial.println("");
        ultrasonicoDer=true;
    }   
    else{
        ultrasonicoDer=false; 
    }
}
