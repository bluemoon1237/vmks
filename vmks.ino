#include <LiquidCrystal.h>
LiquidCrystal lcd(2, 3, 4, 5, 6, 7);
int Htime;             
int Ltime;               
float Ttime;           
float frequency;       
void setup()
{
    pinMode(8,INPUT);
    lcd.begin(16, 2);
}
void loop()
{
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("Frequency of signal");
    Htime=pulseIn(8,HIGH);      
    Ltime=pulseIn(8,LOW);        
    
    Ttime = Htime+Ltime;
    frequency=1000000/Ttime;    
    lcd.setCursor(0,1);
    lcd.print(frequency);
    lcd.print(" Hz");
    delay(500);
}
