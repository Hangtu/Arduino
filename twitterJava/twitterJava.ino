
int pinLed=13;


void setup(){
  pinMode(pinLed,OUTPUT);
  digitalWrite(pinLed,LOW);
  Serial.begin(9600);
  }



void loop(){
  
  if(Serial.available()>0){
      int input=Serial.read();
     
       if (input=='T'){
           digitalWrite(pinLed,HIGH);
       } 
       
       
       if (input=='F'){
           digitalWrite(pinLed,LOW);
       }       
  }
}
