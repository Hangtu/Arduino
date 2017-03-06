/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.
 
  This example code is in the public domain.
 */
 
// Pin 13 has an LED connected on most Arduino boards.
// give it a name:
int led =2;
int led1=3;
int input;
// the setup routine runs once when you press reset:
void setup() {                
  
  pinMode(led, OUTPUT);  
  digitalWrite(led,LOW);
  pinMode(led1, OUTPUT);  
  digitalWrite(led1,LOW);
}

// the loop routine runs over and over again forever:
void loop() {
  
  while(Serial.available()>0){
  input=Serial.read();
 
if(input=='1'){   
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
}
if(input=='0'){
  digitalWrite(led,LOW);
}

if(input=='3'){   
  digitalWrite(led1, HIGH);   // turn the LED on (HIGH is the voltage level)
}
if(input=='2'){
  digitalWrite(led1,LOW);
}
  }  // wait for a second
} 
