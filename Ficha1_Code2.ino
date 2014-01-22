   const int ROJO = 11;      
    const int AMBAR = 10;         
    const int VERDE = 9;
    const int BLANCO = 6;

    
  
    void setup()
    {
    pinMode(ROJO, OUTPUT);      // pinMode es una funciÃ³n que define un pin como entrada o salida. Ponemos 
    pinMode(AMBAR, OUTPUT);    // pinMode( [el pin sobre el que queremos actuar], INPUT (entrada) / OUTPUT (salida)
    pinMode(VERDE, OUTPUT);
    pinMode(BLANCO, OUTPUT);
    }
    
    
    void loop()
     
    {
      int Tiempo = 250;
      
      
      digitalWrite(ROJO, HIGH);
      delay(Tiempo);
      digitalWrite(AMBAR, HIGH);
      delay(Tiempo);
      digitalWrite(VERDE, HIGH);
      delay(Tiempo);
      digitalWrite(BLANCO, HIGH);
      delay(Tiempo);
      digitalWrite(BLANCO, LOW);
      delay(Tiempo);
      digitalWrite(VERDE, LOW);
      delay(Tiempo);
      digitalWrite(AMBAR, LOW);
      delay(Tiempo);
      digitalWrite(ROJO, LOW);
      delay(Tiempo);
    
    }
