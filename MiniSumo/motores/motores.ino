int motor1=5;
int motor2=6;


// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(motor1, OUTPUT);
  pinMode(motor2,OUTPUT);  
}

// the loop routine runs over and over again forever:
void loop() {
     moverIzq();
     delay(5000);
     moverDer();
     delay(5000);  
  
}





void moverIzq(){ // MOTOR IZQUIERDO
   analogWrite(motor1,255);
   analogWrite(motor2,60);  
}

void moverDer(){ //MOTOR DERECHO
  analogWrite(motor1,65);
  analogWrite(motor2,255);
}
