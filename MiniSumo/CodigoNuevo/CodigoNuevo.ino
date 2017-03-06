int motorDer=5;
int motorIzq=6;

int trig1=10;
int echo1=8;

int trig2=11;
int echo2=12;


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
      delay(2000);   
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

//CALIBRACION DE SENSORES ULTRASONICOS//

void calculoUltrasonico1(){ 
    digitalWrite(trig1, HIGH);  // Flanco ascendente
    delayMicroseconds(1000);        // Duracion del pulso
    digitalWrite(trig1, LOW);  // Flanco descendente   
    int duracion = pulseIn(echo1, HIGH);
    int distancia = (duracion/2) / 29;
     
     if(distancia>=0 && distancia <= 50){
        Serial.print("sensor 1 = ");
        Serial.print (distancia);
        Serial.println("");
    }  
}
   
void calculoUltrasonico2(){ 
    digitalWrite(trig2, HIGH);  // Flanco ascendente
    delayMicroseconds(1000);        // Duracion del pulso
    digitalWrite(trig2, LOW);  // Flanco descendente   
    int duracion = pulseIn(echo2, HIGH);
    int distancia= (duracion/2) / 29;
    
    if(distancia>=0 && distancia <= 50){
        Serial.print("sensor 2 = ");
        Serial.print (distancia);
        Serial.println("");
    }   
}

