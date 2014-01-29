/*
 -------------------------------------------------------------
 ENCENDIDO GRADUAL DE 4 LEDS
 -------------------------------------------------------------
 
 Programa con el cuál controlar el número de LEDs que se encenden
 mediante la utilzación de un potenciómetro. En función de la
 posición del potenciómetro varía la combinación de LEDs encendidos.
*/

//declarar constantes y variables
const int LED_ROJO = 11;
const int LED_AMBAR = 10;
const int LED_VERDE = 9;
const int LED_BLANCO = 6;

int potenciometro;


//Función principal
void setup() //Se ejecuta cada vez que Arduino se inicia
{
  pinMode(11,OUTPUT); //Configurar el pin 11 en modo salida 
}

//Función cíclica
void loop() //Función que se ejecuta de manera cíclica
{
  //Se lee la tensión del potenciómetro
  potenciometro = analogRead(A0); 
  
  //La variable potenciometro tiene valores entre 0 y 1023; siendo
  //0 0Voltios y 1023 5Voltios
  //Se va a dividir la tensión leída en cuatro partes de 256 puntos
  //cada uno que corresponden a 5V*256/1024 = 1.25V
  
  //Si el valor leído está entre 0V y 1.25V se enciende el Led Rojo
  if (potenciometro < 256) 
    {digitalWrite(LED_ROJO,HIGH);
     digitalWrite(LED_AMBAR,LOW);
     digitalWrite(LED_VERDE,LOW);
     digitalWrite(LED_BLANCO,LOW);
    }  
  else
  //Si el valor leído está entre 1.25V y 2.5V se encienden
  //los Led Rojo y Ámbar   
    {if (potenciometro < 512)
      {digitalWrite(LED_ROJO,HIGH);
       digitalWrite(LED_AMBAR,HIGH);
       digitalWrite(LED_VERDE,LOW);
       digitalWrite(LED_BLANCO,LOW);
      }
     else
  //Si el valor leído está entre 2.5V y 3.75V se encienden
  //los Le3.75V y 5Vd Rojo, Ámbar y Verde       
       {if (potenciometro < 768) 
         {digitalWrite(LED_ROJO,HIGH);
          digitalWrite(LED_AMBAR,HIGH);
          digitalWrite(LED_VERDE,HIGH);
          digitalWrite(LED_BLANCO,LOW);
         }
  //Si el valor leído está entre 3.75V y 5V se encienden
  //los Led Rojo, Ámbar, Verde y Blanco  
        else
          {digitalWrite(LED_ROJO,HIGH);
           digitalWrite(LED_AMBAR,HIGH);
           digitalWrite(LED_VERDE,HIGH);
           digitalWrite(LED_BLANCO,HIGH);
          }
       }   
    }
}
