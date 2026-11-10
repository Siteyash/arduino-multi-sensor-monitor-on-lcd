Arduino Multi-Sensor Monitoring System

"Platform" (https://img.shields.io/badge/Platform-Arduino%20UNO-00979D)
"Language" (https://img.shields.io/badge/Language-C%2B%2B-blue)
"Status" (https://img.shields.io/badge/Status-In%20Progress-orange)
"License" (https://img.shields.io/badge/License-MIT-green)

About the Project

The Arduino Multi-Sensor Monitoring System is an electronics project designed to interface multiple sensors with an Arduino UNO and monitor their readings.

The system will collect sensor data and display useful information through a 16x2 I2C LCD.

Hardware Components

- Arduino UNO
- Ultrasonic Sensor
- DHT11 Temperature and Humidity Sensor
- IR Sensor
- Soil Moisture Sensor
- MQ-2 Gas Sensor
- IR Flame Sensor
- 16x2 I2C LCD

Planned Features

- Multiple sensor interfacing
- Real-time sensor monitoring
- LCD-based data display
- Sensor status indication
- Integrated monitoring system

Project Structure

arduino-multi-sensor-monitor/
├── Circuit/
├── Docs/
├── Images/
├── Src/
│   └── main.ino
├── LICENSE
└── README.md

Development Status

Currently in development. Sensors will first be tested individually and then integrated into one monitoring system.

Learning Outcomes

- Arduino programming
- Sensor interfacing
- Embedded C/C++
- I2C communication
- Hardware integration

Author

Yash Site
Electronics and Telecommunication Engineering Student

License

This project is licensed under the MIT License.


## Project Documentation

- [Project Documentation](Docs/PROJECT_DOCUMENTATION.md)
- [Component Details](Docs/COMPONENTS.md)
- [Pin Connections](Circuit/PIN_CONNECTIONS.md)

## 📸 Project Gallery

### Complete Hardware Setup
![Complete Setup](Images/setup.png)

### Sensor Connections
![Sensor Connections](Images/connection.jpeg)

### LCD Display
![LCD Display](Images/lcddisplay.jpeg)

## Project Screenshots

Hardware photographs and circuit diagrams will be added to the Images and Circuit folders.

## Current Development Status

- [x] Arduino UNO setup
- [x] Sensor integration
- [x] LCD display integration
- [x] Initial hardware testing