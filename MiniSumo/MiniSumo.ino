//PINES DE LOS COMPONENTES
int motor1=6;
int motor2=5;

int boton1=1;
int boton2=2;

int trig1=10;
int trig2=11;
int echo1=8;
int echo2=12;


//ESTADO DE LOS BOTONES
char estado1=HIGH;  // ESTADO DEL BOTON 1
char estado2=HIGH;  // ESTADO DEL BOTON 2

//OPERACIONES CON VARIABLES
int segundos=1; // segundos que tarda en determinar el boton  // MODIFICAR DELAY DE SETUP
int distancia=0; // Distancia a la que detecto el objetivo  //  calcularTrig1();
int distancia2=0;// Distancia a la que detecto el objetivo  //  calcularTrig2();
int tablero=50;// Tamaño del tablero de juego para la localizacion de objetos // calculoTrigs;

boolean objetivo=false;  // retornaremos un true si el trig1 vio algo//  calculoTrig1();
boolean objetivo2=false; // retornaremos un true si el trig2 vio algo//  calculoTrig2();



void setup(){
// pinMode(boton1,INPUT);
// pinMode(boton2,INPUT);
 pinMode(trig1,OUTPUT);
 pinMode(trig2,OUTPUT);
 pinMode(echo1,INPUT);
 pinMode(echo2,INPUT);
 
 //MOTORES
  pinMode(motor1,OUTPUT);
  pinMode(motor2,OUTPUT);
// determinarBoton();
// delay(5000);
delay(1000);
  Serial.println("ENTRANDO A LOPP");
}

void loop(){
   if(estado1==LOW){  //BOTON 1
     //GIRAMOS IZQUIERDA
     while(true){
        // buscar();
       //ATACAR();
       Serial.print("Boton 1"); // AQUI SE PONDRAN LAS FUNCIONES QUE HARA EL SUMO
       delay(3000);
     }
  }
    if(estado2==LOW){ //BOTON 2
     //GIRAMOS DERECHA
     while(true){
       Serial.print("BOTON 2");
       delay(3000);
     }
  }
    if(estado1==HIGH && estado2==HIGH){ // ALEATORIO
     Serial.println("Entro a  Aleatorio");
     //while(true){
       // Serial.print("ALEATORIO");
       // calculoTrig1();
       // Serial.println("");
       // calculoTrig2();
        movimiento();
        Serial.println("Dentro Del Aleatorio");
    // }
  }
}


//  FUNCIONES PARA EL ROBOT  //


void determinarBoton(){
   for(int inicio=0;inicio<segundos;inicio++){ 
   estado1=digitalRead(boton1);
   estado2=digitalRead(boton2);
   delay(1000);
   }
}

// METODOS CALCULOS Y CONFIGURACIONES //


void calculoTrig1(){ 
    digitalWrite(trig1, HIGH);  // Flanco ascendente
    delayMicroseconds(1000);        // Duracion del pulso
    digitalWrite(trig1, LOW);  // Flanco descendente   
    int duracion = pulseIn(echo1, HIGH);
    distancia = (duracion/2) / 29;
    Serial.print ("sensor 1 = ");
    //delay(1000);
    Serial.println(distancia); 
    if(distancia>0 && distancia <= tablero){
       objetivo=true; 
    }
    else{
       objetivo=false;
    }      
}
   
void calculoTrig2(){ 
    digitalWrite(trig2, HIGH);  // Flanco ascendente
    delayMicroseconds(1000);        // Duracion del pulso
    digitalWrite(trig2, LOW);  // Flanco descendente   
    int duracion = pulseIn(echo2, HIGH);
    distancia2 = (duracion/2) / 29;
    Serial.print ("sensor 2 = ");
    //delay(1000);
    Serial.println(distancia2);  
    if(distancia2>=0 && distancia2 <= tablero){
       objetivo2=true; 
    }
    else{
       objetivo2=false;
    }      
}


void movimiento(){
    calculoTrig1();
    calculoTrig2();
    
    if(objetivo==true && objetivo2==true){ 
          adelante();
    }
    
    if(objetivo==true && objetivo2==false){ //aqui movemos derecha
       
         moverDer();
    }
    
    if(objetivo==false && objetivo2==true){ // PARA MOVER EL MOTOR IZQUIERDO
        moverIzq();
    }
    
    if(objetivo==false && objetivo==false){
        //BUSQUEDA // PENDIENTE DE PROGRAMAR
        //movimiento();
        detenerMotores();
      
    }
}


void moverIzq(){ // MOTOR IZQUIERDO
  // delayMicroseconds(1000);
   analogWrite(motor1,255);
   analogWrite(motor2,0); 
  delay(1000); 
}

void moverDer(){ //MOTOR DERECHO
  analogWrite(motor1,0);
  analogWrite(motor2,255);
  delay(1000);
}

void adelante(){
        analogWrite(motor1,255);   
        analogWrite(motor2,255);
    delay(1000);
}


void detenerMotores(){
   analogWrite(motor1,0);
   analogWrite(motor2,0); 
}
  
