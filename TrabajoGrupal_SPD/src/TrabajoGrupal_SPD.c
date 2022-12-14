/*	Monsalvo Ivan
 	Lucio Belloni
 	Acuña Lucas
 	Carmagnola Lucas
 	Alvarez Lopez Sebastian
 	Maximo Pasqui
 	Bermudez Juan
 	Castillo Brandon
 	Agustin Calzone
*/

#define LED_C 6
#define LED_D 7
#define LED_E 8
#define LED_B 9
#define LED_A 10
#define LED_F 11
#define LED_G 12

#define LED_2 2
#define LED_3 3

#define TIEMPO 500
#define TIEMPO_CORTO 300
#define TIEMPO_LARGO 750


#define TAM 7

void EncenderH(int tiempo);
void ApagarH(int tiempo);

void EncenderO(int tiempo);
void ApagarO(int tiempo);

void EncenderL(int tiempo);
void ApagarL(int tiempo);

void EncenderA(int tiempo);
void ApagarA(int tiempo);

void EncenderApagar(int led, int tiempo);


void setup()
{
  for(int i = 6 ; i < 13 ; i++)
  {
    pinMode(i,OUTPUT);
  }

  pinMode(LED_2,OUTPUT);
  pinMode(LED_3,OUTPUT);
}

void loop()
{
  EncenderH(TIEMPO);
  ApagarH(TIEMPO);

  EncenderApagar(LED_2, TIEMPO_CORTO);
  EncenderApagar(LED_2, TIEMPO_CORTO);
  EncenderApagar(LED_2, TIEMPO_CORTO);
  EncenderApagar(LED_2, TIEMPO_CORTO);


  EncenderApagar(LED_3, TIEMPO_CORTO);
  EncenderApagar(LED_3, TIEMPO_CORTO);
  EncenderApagar(LED_3, TIEMPO_CORTO);
  EncenderApagar(LED_3, TIEMPO_CORTO);

  EncenderO(TIEMPO);
  ApagarO(TIEMPO);

  EncenderApagar(LED_2, TIEMPO_LARGO);
  EncenderApagar(LED_2, TIEMPO_LARGO);
  EncenderApagar(LED_2, TIEMPO_LARGO);

  EncenderApagar(LED_3, TIEMPO_CORTO);
  EncenderApagar(LED_3, TIEMPO_CORTO);
  EncenderApagar(LED_3, TIEMPO_CORTO);




  EncenderL(TIEMPO);
  ApagarL(TIEMPO);

  EncenderApagar(LED_2, TIEMPO_CORTO);
  EncenderApagar(LED_2, TIEMPO_LARGO);
  EncenderApagar(LED_2, TIEMPO_CORTO);
  EncenderApagar(LED_2, TIEMPO_CORTO);

  EncenderApagar(LED_3, TIEMPO_CORTO);
  EncenderApagar(LED_3, TIEMPO_LARGO);
  EncenderApagar(LED_3, TIEMPO_CORTO);
  EncenderApagar(LED_3, TIEMPO_CORTO);

  EncenderA(TIEMPO);
  ApagarA(TIEMPO);

  EncenderApagar(LED_2, TIEMPO_CORTO);
  EncenderApagar(LED_2, TIEMPO_LARGO);
  EncenderApagar(LED_2, TIEMPO_CORTO);
  EncenderApagar(LED_2, TIEMPO_CORTO);

  EncenderApagar(LED_3, TIEMPO_CORTO);
  EncenderApagar(LED_3, TIEMPO_LARGO);
  EncenderApagar(LED_3, TIEMPO_CORTO);
  EncenderApagar(LED_3, TIEMPO_CORTO);




}

void EncenderH(int tiempo)
{
  digitalWrite(LED_B, HIGH);
  digitalWrite(LED_C,HIGH);
  digitalWrite(LED_E, HIGH);
  digitalWrite(LED_F, HIGH);
  digitalWrite(LED_G, HIGH);
  delay(tiempo);

}

void ApagarH(int tiempo)
{
  digitalWrite(LED_B, LOW);
  digitalWrite(LED_C, LOW);
  digitalWrite(LED_E, LOW);
  digitalWrite(LED_F, LOW);
  digitalWrite(LED_G, LOW);
  delay(tiempo);

}

void EncenderO(int tiempo)
{

  digitalWrite(LED_C, HIGH);
  digitalWrite(LED_D, HIGH);
  digitalWrite(LED_E, HIGH);
  digitalWrite(LED_A, HIGH);
  digitalWrite(LED_B, HIGH);
  digitalWrite(LED_F, HIGH);
  delay(tiempo);

}

void ApagarO(int tiempo)
{

  digitalWrite(LED_C, LOW);
  digitalWrite(LED_D, LOW);
  digitalWrite(LED_E, LOW);
  digitalWrite(LED_A, LOW);
  digitalWrite(LED_B, LOW);
  digitalWrite(LED_F, LOW);
  delay(tiempo);

}

void EncenderL(int tiempo)
{

  digitalWrite(LED_D, HIGH);
  digitalWrite(LED_E, HIGH);
  digitalWrite(LED_F, HIGH);
  delay(tiempo);

}

void ApagarL(int tiempo)
{
  digitalWrite(LED_D, LOW);
  digitalWrite(LED_E, LOW);
  digitalWrite(LED_F, LOW);
  delay(tiempo);
}

void EncenderA(int tiempo)
{
  digitalWrite(LED_C, HIGH);
  digitalWrite(LED_G, HIGH);
  digitalWrite(LED_E, HIGH);
  digitalWrite(LED_A, HIGH);
  digitalWrite(LED_B, HIGH);
  digitalWrite(LED_F, HIGH);
  delay(tiempo);

}

void ApagarA(int tiempo)
{

  digitalWrite(LED_C, LOW);
  digitalWrite(LED_G, LOW);
  digitalWrite(LED_E, LOW);
  digitalWrite(LED_A, LOW);
  digitalWrite(LED_B, LOW);
  digitalWrite(LED_F, LOW);
  delay(tiempo);

}

void EncenderApagar(int led, int tiempo)
{
  digitalWrite(led, HIGH);
  delay(tiempo);
  digitalWrite(led, LOW);
  delay(tiempo);
}




