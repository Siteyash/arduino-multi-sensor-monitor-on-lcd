# Arduino Multi-Sensor Monitoring System

## 1. Introduction

The Arduino Multi-Sensor Monitoring System is an embedded electronics project designed to monitor environmental conditions and detect different physical parameters using multiple sensors.

The system uses Arduino UNO as its central controller. Sensor readings are collected, processed and displayed on a 16×2 I2C LCD and Serial Monitor.

## 2. Objectives

- Interface multiple sensors with Arduino UNO.
- Monitor temperature and humidity.
- Measure distance using ultrasonic technology.
- Monitor soil moisture.
- Detect gas and smoke.
- Detect nearby objects and flame.
- Display sensor readings in real time.

## 3. Hardware Requirements

| Component | Purpose |
|---|---|
| Arduino UNO | Main controller |
| HC-SR04 | Distance measurement |
| DHT11 | Temperature and humidity |
| Capacitive Soil Moisture v2.0 | Soil moisture monitoring |
| MQ-2 | Gas and smoke sensing |
| IR Sensor | Object detection |
| Flame Sensor | Flame detection |
| 16×2 I2C LCD | Data display |
| Buzzer | Alert indication |
| Breadboard and jumper wires | Connections |

## 4. Working Principle

Arduino UNO receives data from all connected sensors through digital and analog input pins.

The collected information is processed by the microcontroller and displayed on the LCD using multiple rotating display pages.

The buzzer provides an alert when the flame sensor detects a flame.

## 5. Pin Configuration

| Sensor | Arduino Pin |
|---|---|
| DHT11 DATA | D2 |
| IR OUT | D3 |
| Flame DO | D4 |
| Buzzer | D5 |
| HC-SR04 TRIG | D9 |
| HC-SR04 ECHO | D10 |
| Soil Sensor AOUT | A0 |
| MQ-2 AO | A1 |
| LCD SDA | A4 |
| LCD SCL | A5 |

## 6. Software Requirements

- Arduino IDE
- Arduino C/C++
- DHT Sensor Library by Adafruit
- Adafruit Unified Sensor Library
- LiquidCrystal I2C Library

## 7. Applications

- Environmental monitoring
- Educational electronics experiments
- Smart agriculture prototypes
- Gas and flame detection demonstrations
- Embedded systems learning

## 8. Limitations

- Sensor readings require calibration.
- MQ-2 readings depend on warm-up and environmental conditions.
- Soil moisture readings depend on soil type and sensor calibration.
- The prototype is not a certified industrial safety system.

## 9. Conclusion

The project demonstrates the integration of multiple sensors with an Arduino UNO to develop a centralized monitoring system. It provides practical experience in embedded programming, sensor interfacing, analog and digital communication, and LCD integration.