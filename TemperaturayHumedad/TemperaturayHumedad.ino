#include <math.h>
 
//Pines Digitales
int pinLed1 = 8;
int pinLed2 = 9;
int pinLed3 = 10;
int pinLed4 = 11;
int pinLed5 = 12;
int pinLed6 = 13;
int rxByte;

//Pin Analogico
int analogPin1 = 0;
 
//Declaracion de datos
float Vin = 5.0;     // [V]      voltaje alimentación del divisor
float Rfija = 1000;  // [ohm]    resistencia fija del divisor
float R25 = 10000;    // [ohm]   valor de NTC a 25ºC
float Beta = 3435.0; // [K]      parámetro Beta de NTC
float T0 = 293.15;   // [K]      Temperatura de referencia en Kelvin
 
float Vout = 0.0;    // [V]       Variable para almacenar Vout
float Rntc = 0.0;    // [ohm]     Variable para NTC
 
float TempK = 0.0;   // [K]       Temperatura salida en Kelvin
float TempC = 0.0;   // [ºC]      Temperatura salida en Celsius
 
void setup() {
 
  //Comunicar puerto serie
  Serial.begin(9600);
 
  //pines de salida
  pinMode(pinLed1, OUTPUT);
  pinMode(pinLed2, OUTPUT);
  pinMode(pinLed3, OUTPUT);
  pinMode(pinLed4, OUTPUT);
  pinMode(pinLed5, OUTPUT);
 
  //pin analogo de entrada
  pinMode(analogPin1, INPUT);
 }
 
void loop(){
  //Calculo de la temperatura
 
  //Voltaje de salida en el divisor
  Vout=(Vin/1024)*(analogRead(analogPin1));
 
  //resistencia de la NTC
  Rntc=(Vout*Rfija)/(Vin-Vout);
 
  //temperatura en Kelvin
  TempK = Beta/(log(Rntc/R25)+(Beta/T0));
 
  //para convertirla a celsius
  TempC = TempK-273.15;
  rxByte=TempC;
  
  //Datos a mostrar en el monitor serial
 
  Serial.println(rxByte);
 
 
  
  //Datos a enviar al puerto serie
  if (Serial.available()  >= 0) {  
  Serial.write(rxByte);
   
}
  //obtension de los distintos estados
  if(TempC <= 17) //Helado
  {
  digitalWrite(pinLed1, HIGH);
  digitalWrite(pinLed2, LOW);
  digitalWrite(pinLed3, LOW);
  digitalWrite(pinLed4, LOW);
  digitalWrite(pinLed5, LOW);
  }
  else if ((TempC <= 23) & (TempC > 17)) //Frio agradable
  {
  digitalWrite(pinLed1, HIGH);
  digitalWrite(pinLed2, HIGH);
  digitalWrite(pinLed3, LOW);
  digitalWrite(pinLed4, LOW);
 digitalWrite(pinLed5, LOW);
}
  else if ((TempC<= 28) & (TempC > 23)) //Temperatura optima
  {
  digitalWrite(pinLed1, LOW);
  digitalWrite(pinLed2, HIGH);
  digitalWrite(pinLed3, HIGH);
  digitalWrite(pinLed4, LOW);
  digitalWrite(pinLed5, LOW);
  }
  else if ((TempC<= 33) & (TempC> 28)) //Caluroso agradable
  {
  digitalWrite(pinLed1, LOW);
  digitalWrite(pinLed2, LOW);
  digitalWrite(pinLed3, HIGH);
  digitalWrite(pinLed4, HIGH);
  digitalWrite(pinLed5, HIGH);
  }
  else if (TempC > 33) //Sofocado
  {
  digitalWrite(pinLed1, LOW);
  digitalWrite(pinLed2, LOW);
  digitalWrite(pinLed3, LOW);
  digitalWrite(pinLed4, HIGH);
  digitalWrite(pinLed5, HIGH); 
  }
  
  //delay en el puerto serie
 delay(500);
}
