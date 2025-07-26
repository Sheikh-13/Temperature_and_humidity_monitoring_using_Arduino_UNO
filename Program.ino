#include <Wire.h>  
#include <LiquidCrystal_I2C.h>  
#include <DHT.h>  
LiquidCrystal_I2C lcd(0x27, 16, 2);  
#define DHTPIN 2  
#define DHTTYPE DHT11  
DHT dht(DHTPIN, DHTTYPE);  
void setup() {    
Serial.begin(9600);   
what file is this 
lcd.begin(16, 2);    
lcd.backlight();    
dht.begin();    
lcd.setCursor(0, 0);    
lcd.print(" welcome to IONITIX");   
lcd.setCursor(0, 1);    
lcd.print("     
delay(2000);    
PROJECT    
lcd.setCursor(0, 0);  
lcd.print("                   ");  
lcd.setCursor(0, 0);    
lcd.print("Temp:
 lcd.setCursor(0, 1);    
lcd.print("Humidity:   
        C");    
");   
%");   
Serial.println("DHT11 Sensor Initialized");   
delay(2000);  
}  
void loop() {    
float humidity = dht.readHumidity();    
float temperature = dht.readTemperature();   
if (isnan(humidity) || isnan(temperature)) {     
lcd.setCursor(0, 0); 
lcd.print("Failed 
lcd.setCursor(0, 1);      
to 
lcd.print("from DHT sensor");  
read 
");     
Serial.println("Failed to read from DHT sensor");  
return;   
}  
lcd.setCursor(6, 0);   
lcd.print(temperature);   
lcd.print(" ");   
lcd.setCursor(10, 1);   
lcd.print(humidity);    
lcd.print(" ");  
Serial.print("Temperature: ");  
Serial.print(temperature);  
Serial.print(" C, ");  
Serial.print("Humidity: ");  
Serial.print(humidity);   
Serial.println(" %");   
delay(2000);  
}  