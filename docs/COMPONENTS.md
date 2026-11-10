# Component Details

| Component | Function |
|---|---|
| Arduino UNO | Controls the complete system |
| HC-SR04 | Measures distance using ultrasonic waves |
| DHT11 | Measures temperature and relative humidity |
| Capacitive Soil Moisture v2.0 | Measures soil moisture through capacitive sensing |
| MQ-2 | Detects combustible gases and smoke |
| IR Sensor | Detects nearby objects |
| Flame Sensor | Detects infrared radiation associated with flames |
| 16×2 I2C LCD | Displays sensor information |
| Buzzer | Provides audible alerts |

## Controller

Arduino UNO is based on the ATmega328P microcontroller. It provides digital I/O pins, analog inputs and serial communication for interfacing sensors.

## Display

The I2C LCD uses two communication lines:
- SDA: Serial Data
- SCL: Serial Clock

The LCD displays sensor information through rotating pages.