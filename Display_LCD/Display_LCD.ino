char prim []={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P'};
char seg[]={'Q','R','S','T','U','V','W','X','Y','Z'};
#include <LiquidCrystal.h>

LiquidCrystal lcd(12,11,5,4,3,2);

void setup() {
  //Numero De Columnas y Renglones
  lcd.begin(16, 2);
  // Print a message to the LCD.
}

void loop() {
 
  for(int i=0; i<=15; i++){
    lcd.print(prim[i]);
    delay(2000); 
  }
  lcd.setCursor(0, 1);
  for(int i=0; i<=9; i++){
    lcd.print(seg[i]);
    delay(2000); 
  }
  lcd.clear();
  delay(1000);
}
