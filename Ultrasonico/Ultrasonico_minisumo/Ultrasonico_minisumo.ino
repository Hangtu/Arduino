
int trig1=8;
int echo1=9;

int trig2=12;
int echo2=13;


boolean ultrasonicoIzq=false;
boolean ultrasonicoDer=false;

void setup(){
     Serial.begin(9600);
     pinMode(trig1,OUTPUT);
     pinMode(trig2,OUTPUT);
     pinMode(echo1,INPUT);
     pinMode(echo2,INPUT); 
}

void loop(){
  calculoUltrasonico1();
  Serial.println("");
  calculoUltrasonico2();
  Serial.println("");
//  calculoUltrasonico1();
/*  
  if (ultrasonicoDer==true && ultrasonicoIzq==false){
      Serial.println("derecho");
  }
  
  if (ultrasonicoDer==false && ultrasonicoIzq==true){
       Serial.println("izquierda");
  }
  
   if (ultrasonicoDer==true && ultrasonicoIzq==true){
       Serial.println("Adelenate");
  }
  
  if (ultrasonicoDer==false && ultrasonicoIzq==false){
      
  }
  */
  delay(1000);
  
  
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
       // Serial.println("");
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
       // Serial.println("");
        ultrasonicoDer=true;
    }   
    else{
        ultrasonicoDer=false; 
    }
}
