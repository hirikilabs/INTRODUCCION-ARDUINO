#include <Servo.h>

//creamos un objeto servo
Servo servo1;
//declaracion de variables
int potenciometro=A0;
int pin_servo=9;
int valor_potenciometro=0;

void setup()
{
  servo1.attach(pin_servo);//asignamos el pin nuevo al objeto servo
}

void loop()
{
  valor_potenciometro=analogRead(potenciometro);//lee el valor del potencometro y o almacena en lavariable valor_pot
  valor_potenciometro=map(valor_potenciometro,0,1023,0,179);
  //escalamos el valor del potenciometro entre 0 y 180 grados para poder usar el servo
  servo1.write(valor_potenciometro);//fija la posicion del servo segun el valor del potenciometro
  delay(15);
}
