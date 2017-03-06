/*
 Prueba para dos motores de CD.Shield ARD-100E8
 
 
18 de julio 2012
  por Wilfrido Gonzalez
 
 */
  //Le da nombre a reles
int Mot1_A     =  5;
int Mot1_B     =  4;
int Mot2_A     =  7;
int Mot2_B     =  6;

  //setup() corre una sola vez
void setup()   {

  // Inicia entrads/salidas
  pinMode(Mot1_A, OUTPUT);
  pinMode(Mot1_B, OUTPUT);
  pinMode(Mot2_A, OUTPUT);
  pinMode(Mot2_B, OUTPUT); 
}

  //loop() repite una y otra vez ....
void loop()                     
{
  // Secueuncia motores
  digitalWrite(Mot1_A, LOW);
  digitalWrite(Mot1_B, LOW);
  digitalWrite(Mot2_A, LOW);
  digitalWrite(Mot2_B, LOW);  
  delay(500);                  

// Motor 1
  digitalWrite(Mot1_A, HIGH);
  digitalWrite(Mot1_B, LOW);
  delay(2000); 

  digitalWrite(Mot1_A, LOW);
  digitalWrite(Mot1_B, HIGH);
  delay(2000);
  digitalWrite(Mot1_A, LOW);
  digitalWrite(Mot1_B, LOW);


// Motor 2
  digitalWrite(Mot2_A, HIGH);
  digitalWrite(Mot2_B, LOW);
  delay(2000); 

  digitalWrite(Mot2_A, LOW);
  digitalWrite(Mot2_B, HIGH);
  delay(2000);
  digitalWrite(Mot2_A, LOW);
  digitalWrite(Mot2_B, LOW);

}
