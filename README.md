# Temperature_and_humidity_monitoring_using_Arduino_UNO
This project is all about Humidity &amp; Temperature Monitoring using DHT11 &amp; Arduino  UNO. It explains how to log Humidity &amp; Temperature data on the cloud. We can  interface Arduino UNO with DHT11 to measure temperature and humidity.

# Components used
1. Arduino UNO
2. DHT11 Sensor
3. LCD 16x2 Display
4. Breadboard 
5. Connecting Wires

# Steps and Circuit Connection
1. Select DHT11 sensor for temperature and humidity.  
2. Select 16x2 LCD with I2C interface for display.  
3. Install DHT sensor library in Arduino IDE.  
4. Install LiquidCrystal I2C library in Arduino IDE.  
5. Connect DHT11: VCC to 5V, GND to GND, Data to pin 2.  
6. Connect LCD: VCC to 5V, GND to GND, SDA to A4, SCL to A5.  
7. Initialize LCD with I2C address in code.  
8. Initialize DHT sensor with pin and type in code.  
9. Read temperature and humidity in loop function.
10.Display data on LCD and Serial Monitor, with 2-second delay between readings, using 
Arduino IDE.
