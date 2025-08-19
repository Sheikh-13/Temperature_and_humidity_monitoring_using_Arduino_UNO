# 🌡️💧 Temperature & Humidity Monitoring Using Arduino UNO  

A compact and efficient project to monitor and display **ambient temperature and humidity** using a **DHT11 sensor**, **Arduino UNO**, and an **LCD display**. Sensor data can also be extended to cloud logging for IoT applications.  

---

## 🛠️ Components Required  

- 🔌 **Arduino UNO**  
- 🌡️ **DHT11 Sensor** (Temperature & Humidity)  
- 📟 **16×2 LCD Display** (I²C interface recommended)  
- 🔲 **Breadboard**  
- 🔗 **Jumper Wires**  

---

## 🔌 Circuit Connections  

### 🧩 DHT11 Sensor  
- VCC → 5 V  
- GND → GND  
- DATA → Digital Pin 2 on Arduino UNO  

### 📟 I²C LCD Display  
- VCC → 5 V  
- GND → GND  
- SDA → A4  
- SCL → A5  

---

## ⚙️ Setup & Installation  

1. 🖥️ Open the **Arduino IDE**.  
2. 📦 Install required libraries:  
   - `DHT sensor library` (by Adafruit)  
   - `LiquidCrystal I²C` library  
3. ⬇️ Clone or download this repository.  
4. 📂 Open **Program.ino** in Arduino IDE.  
5. 🔧 Configure the I²C address of your LCD (`0x27` or `0x3F`).  
6. 🚀 Upload the sketch to Arduino UNO.  

---

## 🔄 Operation Workflow  

- 📡 The sketch reads **temperature & humidity** from the DHT11 sensor.  
- 📟 Displayed live on the **LCD** and **Serial Monitor** every 2 seconds.  
- ☁️ Optionally extendable for **cloud logging** or **IoT integration**.  

---

## 📂 Repository Contents  

| 📁 File              | 📖 Description                                  |
|----------------------|-----------------------------------------------|
| `Program.ino`        | Arduino sketch with sensor & display logic    |
| `Circuit_diagram.png`| Visual circuit wiring diagram                 |
| `README.md`          | Project overview, setup, and usage guide      |

---

## 🚀 Getting Started  

1. 🔗 Assemble the hardware as shown in the circuit diagram.  
2. 📦 Install required libraries in Arduino IDE.  
3. ⚡ Upload the `Program.ino` sketch.  
4. 📟 View real-time data on LCD & Serial Monitor.  

---

## 🔮 Future Enhancements  

- ☁️ Connect to IoT platforms (ThingSpeak, MQTT, Blynk).  
- 🌡️ Use **DHT22** for better accuracy.  
- 💾 Log data locally to **SD card** with timestamps.  
- 📶 Add Wi-Fi support (ESP8266/ESP32) for **real-time monitoring**.  

---

## 📜 License  

📂 Open-source — free to use, modify, and distribute.  

---

## 🤝 Contact & Support  

📩 For questions, suggestions, or contributions:  
- Open an **Issue**  
- Submit a **Pull Request**  
