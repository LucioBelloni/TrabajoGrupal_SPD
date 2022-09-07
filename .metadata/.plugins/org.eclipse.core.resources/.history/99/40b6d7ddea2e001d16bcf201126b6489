/*
 ============================================================================
 Name        : TrabajoGrupal_SPD.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define LED_C 6
#define LED_D 7
#define LED_E 8
#define LED_B 9
#define LED_A 10
#define LED_F 11
#define LED_G 12

#define LED_2 2

#define TIEMPO 500


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

  pinMode(2,OUTPUT);
}

void loop()
{
  EncenderH(TIEMPO);
  ApagarH(TIEMPO);

  EncenderApagar(2, 500);
  EncenderApagar(2, 500);
  EncenderApagar(2, 500);
  EncenderApagar(2, 500);

  EncenderO(TIEMPO);
  ApagarO(TIEMPO);

  EncenderL(TIEMPO);
  ApagarL(TIEMPO);

  EncenderA(TIEMPO);
  ApagarA(TIEMPO);



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

