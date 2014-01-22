    const int ROJO = 11;      
    const int AMBAR = 10;         
    const int VERDE = 9;
    const int BLANCO = 6;
    const int PULSADOR = 12;
    
  
    void setup()
    {
    pinMode(ROJO, OUTPUT);      // pinMode es una función que define un pin como entrada o salida. Ponemos 
    pinMode(BLANCO, OUTPUT);    // pinMode( [el pin sobre el que queremos actuar], INPUT (entrada) / OUTPUT (salida)
    pinMode(VERDE, OUTPUT);
    pinMode(BLANCO, OUTPUT);
    pinMode(PULSADOR, INPUT);
    }
    
    
    void loop()
     
    {
      int Pulso; 
      int Veces=0;               // Variables que vamos a utilizar.
      int Vuelta = 300;          // Tiempo de parpadeo
      
      digitalWrite(ROJO, LOW);   // Primero dejamos todos los LED's apagados
      digitalWrite(AMBAR, LOW);
      digitalWrite(VERDE, LOW);
      digitalWrite(BLANCO, LOW);
      delay(10);
      
      
     
      while(Veces < 5) // El ciclo while funciona de tal manera que al hacer una acción mientras la condición (este caso que "Veces" sea menor a 5)
                       // sea cierta. La variable "Veces" recoje las veces que se ha pulsado un pulsador.
      {
        Pulso = digitalRead(PULSADOR);  // Lo mismo de antes, solo que creamos la variable "Pulso" para guardar el valor leido del pulsador 2.
        if (Pulso == LOW)                // Si pulsamos el pulsador 2... 
          {Veces = Veces + 1;}           // A "Veces" le sumamos 1. La primera vez, como empieza de 0, hace "Veces = 0 + 1", la segunda vuelta, "Veces" será igual a 1
                                         // por lo tanto, hará "Veces = 1 + 1", y tomará el valor 2.
     
       // Pero... ¿cuándo acaba el bucle "while"? Esto se da cuando la condición que tiene (que "Veces" sea menor a 5) no se cumpla
       // (por ejemplo en "Veces" = 5, 6...). Lo que hace es inmediatamente salir de lo que tenga dentro (el "switch" con sus case).
       
       // "switch" es muy parecido a "if", solo que contempla más casos. Depende de la variable "Veces". Esto significa que 
       // cuando "Veces" sea 0, el programa hará lo que ponga en "case 0:" y saldrá, cuando "Veces" sea 1, hará lo que mande case 1:
       // y saldrá... Hasta que la condición del "while" sea falsa.
                                        
       
          switch(Veces)                               
           {                        
           case 0:                              
               delay(Vuelta);
           break;
           
           case 1:
               digitalWrite(ROJO, HIGH);    // Encender y apagar el LED Rojo con un retardo.
               delay(Vuelta);
               digitalWrite(ROJO, LOW);
               delay(Vuelta);
            break;
           
            case 2: 
               digitalWrite(ROJO, HIGH);    // Mantener encendido el LED Rojo y hacer parpadear el LED Ambar.
               digitalWrite(AMBAR, HIGH);
               delay(Vuelta);
               digitalWrite(AMBAR, LOW);
               delay(Vuelta);
            break;
            
            case 3:
               digitalWrite(ROJO, HIGH);   // Mantener el Rojo y Ambar y parpadear el Verde.
               digitalWrite(AMBAR, HIGH);
               digitalWrite(VERDE, HIGH);
               delay(Vuelta);
               digitalWrite(VERDE, LOW);
               delay(Vuelta);
            break;
            
            case 4: 
               digitalWrite(ROJO, HIGH);   // Mantener, Rojo, Ambar y Verde y parpadear el Blanco.
               digitalWrite(AMBAR, HIGH);
               digitalWrite(VERDE, HIGH);
               digitalWrite(BLANCO, HIGH);
               delay(Vuelta);
               digitalWrite(BLANCO, LOW);
               delay(Vuelta);
            break; 
            }
           }
      delay(Vuelta); // Reposo para que no salte inmediatamente. 
      }
