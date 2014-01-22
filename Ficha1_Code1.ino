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
    int Tiempo = 1000;
      
      digitalWrite(ROJO, HIGH);
      digitalWrite(AMBAR, HIGH);
      digitalWrite(VERDE, HIGH);
      digitalWrite(BLANCO, HIGH);
      delay(Tiempo);
      digitalWrite(ROJO, LOW);
      digitalWrite(AMBAR, LOW);
      digitalWrite(VERDE, LOW);
      digitalWrite(BLANCO, LOW);
      delay(Tiempo);
    }
