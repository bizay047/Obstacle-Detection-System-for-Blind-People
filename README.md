Abstract: Obstacle Detection System for Blind People
Introduction
For visually impaired individuals, independent navigation in unfamiliar environments presents significant challenges. Traditional mobility aids like white canes provide only limited obstacle detection. This project introduces a wearable obstacle detection system using an ESP8266 microcontroller and an HC-SR04 ultrasonic sensor to enhance mobility and safety.

Project Overview
The system continuously measures the distance of nearby objects and alerts the user through a buzzer or vibration motor when an obstacle is detected within a predefined range (e.g., 50 cm). The device operates on a rechargeable battery, making it lightweight and portable.

Societal Impact
This low-cost solution significantly enhances the independence of visually impaired individuals, reducing their reliance on caregivers. By providing real-time feedback, the system improves safety in both indoor and outdoor environments. Future enhancements such as Wi-Fi alerts and IoT integration can further increase accessibility and usability, making smart mobility solutions more inclusive for society


 //Hardware
Hardware Components Required:
1.ESP8266 (NodeMCU/ESP-01)
2.HC-SR04 Ultrasonic Sensor – For distance measurement
3.Buzzer and Vibration Motor – To alert the user
5.Resistors (1kΩ, 330Ω) – For buzzer/motor control
6.Battery Pack (18650 Li-Ion or Power Bank) – To power the system
7.Jumper Wires

🔌 Circuit Connections

-> HC-SR04 → ESP8266
-> VCC → 5V
-> GND → GND
-> TRIG → D6
-> ECHO → D5 (with voltage divider since ESP8266 works at 3.3V)
-> Buzzer → ESP8266
-> Positive → D2 (through 330Ω resistor)
-> Negative → GND

//Vibration Motor → ESP8266
-> Positive → D3 (through transistor + 1kΩ resistor for safety)
-> Negative → GND
-> Battery Pack → ESP8266
-> 5V Output → VIN
-> GND → GND
