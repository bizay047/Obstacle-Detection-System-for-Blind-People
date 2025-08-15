Abstract: Obstacle Detection System for Blind People
Introduction
For visually impaired individuals, independent navigation in unfamiliar environments presents significant challenges. Traditional mobility aids like white canes provide only limited obstacle detection. This project introduces a wearable obstacle detection system using an ESP8266 microcontroller and an HC-SR04 ultrasonic sensor to enhance mobility and safety.

Project Overview
The system continuously measures the distance of nearby objects and alerts the user through a buzzer or vibration motor when an obstacle is detected within a predefined range (e.g., 50 cm). The device operates on a rechargeable battery, making it lightweight and portable.

Societal Impact
This low-cost solution significantly enhances the independence of visually impaired individuals, reducing their reliance on caregivers. By providing real-time feedback, the system improves safety in both indoor and outdoor environments. Future enhancements such as Wi-Fi alerts and IoT integration can further increase accessibility and usability, making smart mobility solutions more inclusive for society

# Obstacle Detection System for Blind People 👨‍🦯

This project uses an **ESP8266** and an **HC-SR04 ultrasonic sensor** to detect obstacles and alert the user using a **buzzer** and a **vibration motor**.  
It is designed as an assistive device for visually impaired individuals.  

---

## 🔧 Hardware Components Required
- **ESP8266 (NodeMCU/ESP-01)** – Microcontroller with Wi-Fi capability  
- **HC-SR04 Ultrasonic Sensor** – For distance measurement  
- **Buzzer** – Provides audio alert  
- **Vibration Motor** – Provides tactile feedback  
- **Resistors (1kΩ, 330Ω)** – For buzzer/motor control  
- **Battery Pack (18650 Li-Ion or Power Bank)** – To power the system  
- **Jumper Wires & Breadboard** – For connections and prototyping  

---

## ⚙️ Working Principle
1. The **HC-SR04 ultrasonic sensor** continuously measures the distance ahead.  
2. If an obstacle is detected **within a threshold distance (e.g., 50 cm)**, the **ESP8266** activates the buzzer and vibration motor.  
3. The **alert intensity changes** based on the distance:  
   - **Far (>50 cm):** No alert  
   - **Medium (20–50 cm):** Slow beep & vibration  
   - **Very close (<20 cm):** Fast beep & continuous vibration  

---

## 🔌 Circuit Connections

### HC-SR04 → ESP8266
- VCC → **5V**  
- GND → **GND**  
- TRIG → **D6**  
- ECHO → **D5** (via voltage divider → ESP8266 works at 3.3V)  

### Buzzer → ESP8266
- Positive → **D2** (through 330Ω resistor)  
- Negative → **GND**  

### Vibration Motor → ESP8266
- Positive → **D3** (through transistor + 1kΩ resistor for safety)  
- Negative → **GND**  

### Battery Pack → ESP8266
- 5V Output → **VIN**  
- GND → **GND**  

---

## 🚀 Features
- Simple, low-cost, and portable  
- Provides **audio + tactile feedback**  
- Can be powered by a **power bank or 18650 battery pack**  
- Expandable with **multiple ultrasonic sensors** for wider coverage  

---

## 📌 Future Improvements
- Add **ESP8266 Wi-Fi** features (e.g., notifications to smartphone)  
- Replace buzzer with **bone-conduction headphones** for private alerts  
- Add **rechargeable battery with TP4056 charging module**  



