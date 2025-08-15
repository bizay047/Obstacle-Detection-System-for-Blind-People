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
