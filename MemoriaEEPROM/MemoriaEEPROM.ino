#include <EEPROM.h>

int a = 0;
int valor;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  valor = EEPROM.read(a);

  Serial.print(a);
  Serial.print("\t");
  Serial.print(valor);
  Serial.println();

  a = a + 1;

  if (a == 512)
    a = 0;

  delay(1000);
}

/*

#include <EEPROM.h>

void setup()
{
  for (int i = 0; i < 512; i++)
    EEPROM.write(i, i);
}

void loop()
{
}

*/
