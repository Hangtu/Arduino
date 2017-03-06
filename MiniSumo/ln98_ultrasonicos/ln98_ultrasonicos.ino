int out1=3;
int out2=5; 
int out3=6;
int out4=9;

int trig1=2;
int trig2=7;
int echo1=4;
int echo2=8;


boolean ultrasonicoIzq=false;
boolean ultrasonicoDer=false;

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
}

void loop(){
  calculoUltrasonico1();
  calculoUltrasonico2();
  calculoUltrasonico1();
  
  if (ultrasonicoDer==true && ultrasonicoIzq==false){
      Serial.println("DERECHA");
  }
  
  if (ultrasonicoDer==false && ultrasonicoIzq==true){   
      Serial.println("IZQUIERDA");
  }
  
   if (ultrasonicoDer==true && ultrasonicoIzq==true){
        Serial.print ("ADELANTE");
        adelante();
  }
  
  if (ultrasonicoDer==false && ultrasonicoIzq==false){
       
  }
  
  delay(500);
  
}

//CALIBRACION DEL MOTOR//

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
  //DERECHO
  digitalWrite(out3,LOW);
  analogWrite(out4,255); 
  //IZQUIERDO
  digitalWrite(out2,LOW);
  analogWrite(out1,50);  
}

void girarDer(){
  //IZQUIERDA
  digitalWrite(out2,LOW);
  analogWrite(out1,255);  
  //DERECHA
   digitalWrite(out3,LOW);
  analogWrite(out4,50); 
}

void atras(){
  atrasIzq();
  adelanteDer();
}

void adelante(){
  adelanteIzq();
  atrasDer();
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
