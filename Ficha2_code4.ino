#include <LiquidCrystal.h>

LiquidCrystal lcd(12,11,5,4,3,2);
const int temperaturePin = 0;

void setup ()
{
  Serial.begin(9600);
  lcd.begin(16,2);
  lcd.clear();
}

void loop()
{
  float voltage, degreesC, val;
  
  val = analogRead(temperaturePin);
 
  voltage = getVoltage(temperaturePin);
  degreesC = (voltage - 0.55) * 100.0;
  
  Serial.println(val);
  Serial.print("Tension: ");
  Serial.print(voltage);
  Serial.print(" Temperatura: ");
  Serial.println(degreesC);
  
  
    lcd.setCursor(1,1);
  lcd.print("Temp. ");
  lcd.print(degreesC);
  lcd.print(" C");
  lcd.setCursor(3,0);
  lcd.print("Hirikilabs");

   
  
  delay(500);
}

float getVoltage (int pin)
{
  return(analogRead(pin) * 0.004882814);
}
