
# Arduino Multi-Sensor Monitoring System

An Arduino-based multi-sensor monitoring project that integrates multiple sensors to collect real-time environmental and surrounding-condition data. The project demonstrates sensor interfacing, data acquisition, and embedded system development.

## Project Overview

This project uses an Arduino microcontroller to interface with multiple sensors, collect sensor readings, and process the data. It is designed as a practical demonstration of embedded systems and electronics engineering.

## Features

- Multiple sensor integration
- Real-time sensor data monitoring
- Arduino-based control system
- Modular hardware connections
- Easy-to-understand implementation
- Expandable architecture for future upgrades

## Components Used

- Arduino Uno
- Capacitive Soil Moisture Sensor V2.0
- MQ-2 Gas Sensor
- Other interfaced sensors
- Breadboard
- Jumper wires
- USB cable
- External power supply (if required)

## Circuit Diagram

![Circuit Diagram](Circuit/vidi.png)

## Repository Structure

```text
Arduino-Multi-Sensor-Project/
│
├── Arduino/
│   ├── Arduino_Multi_Sensor.ino
│   └── Libraries/
│
├── Circuit/
│   └── cidi.png/PIN_CONNECTIONS.md

│
├── Docs/
│   ├── Project_Report.pdf
│   └── Components_List.md
│
├── Images/
│   ├── project_setup.jpg
│   └── sensor_readings.jpg
│
├── Src/
│   └── README.md
│
├── LICENSE
└── README.md
```

## Hardware Connections

Refer to the circuit diagram for the complete wiring and pin connections.

Make sure all sensors share a common GND with the Arduino.

## Installation & Setup

1. Install Arduino IDE.
2. Connect Arduino Uno to your computer.
3. Open the `.ino` file from the Arduino folder.
4. Install the required sensor libraries.
5. Select Arduino Uno from the Boards menu.
6. Select the correct COM port.
7. Upload the code.
8. Open Serial Monitor to observe sensor readings.

## Working Principle

1. Sensors detect environmental conditions.
2. Sensor outputs are transmitted to Arduino.
3. Arduino processes the received values.
4. The collected readings are displayed through the configured output.

## Project Images

Project photographs and hardware implementation images will be added to the Images folder.

## Applications

- Environmental monitoring
- Smart agriculture
- Gas leakage detection
- Educational embedded systems projects
- IoT-based monitoring development

## Future Improvements

- ESP8266/ESP32 integration
- IoT-based remote monitoring
- Mobile application integration
- Cloud data storage
- Automated alert system
- Additional sensor integration

## Author

**Yash Site**

Electronics and Telecommunication Engineering Student

## License

This project is licensed under the MIT License.
