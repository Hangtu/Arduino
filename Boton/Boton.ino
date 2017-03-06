//PINES DE LOS COMPONENTES
int led1=1;
int led2=2;
int boton1=3;
int boton2=4;

//ESTADO DE LOS BOTONES
char estado1=HIGH;  // ESTADO DEL BOTON 1
char estado2=HIGH;  // ESTADO DEL BOTON 2

//OPERACIONES CON VARIABLES
int inicio=1;    // variable de inicio para determinar el boton (NO MOVER)
int segundos=1; // segundos que tarda en determinar el boton 



void setup(){
 pinMode(led1,OUTPUT);
 pinMode(led2,OUTPUT);
 pinMode(boton1,INPUT);
 pinMode(boton2,INPUT);
 determinarBoton();
 delay(4000);
}

void loop(){
    Serial.println("ENTRO AL LOOP");
   if(inicio>segundos && estado1==LOW){  //BOTON 1
     while(true){
      parpadear3();
     }
  }
    if(inicio>segundos && estado2==LOW){ //BOTON 2
     while(true){
       parpadear2();
     }
  }
    if(inicio>segundos && estado1==HIGH && estado2==HIGH){ // ALEATORIO
     while(true){
        parpadear(); 
     }
  }
}


//METODOS//
void determinarBoton(){
   for(inicio;inicio<=segundos;inicio++){
   delay(1000); 
   estado1=digitalRead(boton1);
   estado2=digitalRead(boton2);
   Serial.println("LEYENDO BOTONES");
   }
}

void parpadear(){
  digitalWrite (led1,HIGH);
  delay(500);
  digitalWrite(led1,LOW);
  delay(500); 
}


void parpadear2(){
  digitalWrite (led1,HIGH);
}

void parpadear3(){
  digitalWrite (led2,HIGH);
  delay(500);
  digitalWrite(led2,LOW);
  delay(500); 
}



