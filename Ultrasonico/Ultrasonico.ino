
  //SR04
  
  int PIN_TRIG=7;
  int PIN_ECO=6;
  long duracion=0;
  long distancia=0;

void setup() {
  // Inicializacion de la comunicacion serial
  Serial.begin (9600);  
  // Inicializacion de pines digitales
  pinMode(PIN_TRIG, OUTPUT);
  pinMode(PIN_ECO, INPUT);
}

void loop() {
    mandar2();
    recibir();
    calculo();
    respuesta();
    delay(500);    
    // Retardo para disminuir la frecuencia de las lecturas 
}

   void mandar(){
   /* Hacer el disparo */
    digitalWrite(PIN_TRIG, LOW);  
    delayMicroseconds(2); 
    digitalWrite(PIN_TRIG, HIGH);  // Flanco ascendente
    delayMicroseconds(10);        // Duracion del pulso
    digitalWrite(PIN_TRIG, LOW);  // Flanco descendente
   }
   
   void mandar2(){
    digitalWrite(PIN_TRIG, HIGH);  // Flanco ascendente
    delayMicroseconds(1000);        // Duracion del pulso
    digitalWrite(PIN_TRIG, LOW);  // Flanco descendente
     
   }
   
   void recibir(){
     /* Recepcion del eco de respuesta */
      duracion = pulseIn(PIN_ECO, HIGH);
   }
   
   void calculo(){
      /* Calculo de la distancia efectiva */
      distancia = (duracion/2) / 29; 
   }
   
   void respuesta(){
    /* Imprimir resultados a la terminal serial */
    if (distancia >= 500 || distancia <= 0){
    Serial.println("Fuera de rango");
    }
    if(distancia >=0 && distancia <=100 ){
      Serial.print(distancia);
      Serial.println(" cm - esta cerca");
    }
   if (distancia >=101 && distancia <=499) {
    Serial.print(distancia);
    Serial.println(" cm - esta lejos");
  }
   }
