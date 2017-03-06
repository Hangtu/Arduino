#include <QTRSensors.h>

#define NUM_SENSORS   1     
#define TIMEOUT       2500  
#define EMITTER_PIN   3    

QTRSensorsRC qtrrc((unsigned char[]) {5},NUM_SENSORS, TIMEOUT, EMITTER_PIN);  // El 5 es el pin de out debe estar en un PWM
unsigned int sensorValues[NUM_SENSORS];

void setup(){
  Serial.begin(9600); 
}


void loop(){
  
  qtrrc.read(sensorValues);
  if(sensorValues[0]<=200){
    Serial.println(sensorValues[0]);
    Serial.println(" Blanco");
    delay(1000);
  }
}
