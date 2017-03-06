//MIRANDO DE ATRAS HACIA ADELANTE

//SENSOR DERECHO
    int trigD=12;
    int echoD=13;

//SENSOR IZQUIERDO
    int trigI=2;
    int echoI=3;

//ESTADO DE LOS SENSORES
    boolean sensorI;
    boolean sensorD;

    
void setup(){
    Serial.begin(9600);
       pinMode(trigI,OUTPUT);
       pinMode(trigD,OUTPUT);
       pinMode(echoI,INPUT);
       pinMode(echoD,INPUT);    
}
   
void loop(){
      ultrasonicoI();
      ultrasonicoD();
      
        if(sensorI==true && sensorD==false){
           Serial.println("IZQUIERDA"); 
        }
        if(sensorI==false && sensorD==true){
           Serial.println("DERECHA"); 
        }
        if(sensorI==true && sensorD==true){
           Serial.println("ADELANTE"); 
        }
      Serial.println("");  
      delay(500);
}
   
   
    void ultrasonicoI(){ // IZQUIERDO 
      int distancia=calculoUltrasonico(trigI,echoI);   
        if(distancia>=0 && distancia <= 35){
             sensorI=true;
             Serial.println(distancia);
        }
        else{
             sensorI=false; 
        }  
    }
    
    
    void ultrasonicoD(){ // DERECHO
      int distancia=calculoUltrasonico(trigD,echoD);   
        if(distancia>=0 && distancia <= 35){
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
