
void setup(){
   Serial.begin(9600);
   pinMode(2,OUTPUT); 
}

void loop(){
    digitalWrite(2,HIGH);
    Serial.println("PRENDIDO");
    delay(500);
    digitalWrite(2,LOW);
    Serial.println("Apagado");
    delay(500);
}
