
int pinLed=1;
int pinLed2=2;
int boton1=3;
int boton2=4;

//ESTADO DE LOS BOTONES
char estado1=HIGH;
char estado2=HIGH;

//OPERACIONES
int dato=HIGH;
int incre=1;      // incrementos para determinar el boton
int segundos=3; // segundos que tarda en determinar el boton 

void setup(){
 pinMode(pinLed,OUTPUT);
 pinMode(pinLed2,OUTPUT);
 pinMode(boton1,INPUT);
 pinMode(boton2,INPUT); 
  
}


void loop(){
  determinarBoton();  
}

void determinarBoton(){
   for(incre;incre<=segundos;incre++){
   delay(1000); 
   estado1=digitalRead(boton1);
   estado2=digitalRead(boton2);
   Serial.println("LEYENDO BOTONES");
   }
  /* if(incre<=3){ // AQUI DETERMINAMOS EL NUMERO DE SEGUNDOS 
   delay(1000); 
   estado1=digitalRead(boton1);
   estado2=digitalRead(boton2);
   Serial.println("LEYENDO BOTONES");
   incre++;
 }
 */
  if(incre>segundos && estado1==LOW){
    Serial.println("DETERMINO EL BOTON 1");
    delay(3000); 
  }
    if(incre>segundos && estado2==LOW){
    Serial.println("DETERMINO EL BOTON 2");
    delay(3000); 
  }
    if(incre>3 && estado1==HIGH && estado2==HIGH){
    Serial.println("ALEATORIO");
    delay(3000); 
  }
}


void quePedo(){  
   if(dato==LOW){
     Serial.println("SI JALO"); 
   }
   if(dato==HIGH){
      Serial.println("PRUEBA");
      dato=LOW; 
   }
}
