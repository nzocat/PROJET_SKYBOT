/////////// LED Clignotante //////////////
#include <Arduino.h>
int led = 16;//Déclaration de la variable led, comme un entier (integer)
void setup()
{
pinMode(led, OUTPUT); // Configure la broche GPIO16 en sortie
}
void loop()
{
digitalWrite(led, HIGH);// Ecrit la valeur HIGH (=1) sur la broche GPIO16
delay(500); // Attendre 500ms
digitalWrite(led, LOW); // Ecrit la valeur LOW (=0) sur la broche GPIO16
delay(500);