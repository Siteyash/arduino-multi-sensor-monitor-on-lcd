# Circuit Connections

## Arduino UNO – Sensor Interfacing

| Component | Sensor Pin | Arduino Pin |
|---|---|---|
| HC-SR04 | VCC | 5V |
| HC-SR04 | GND | GND |
| HC-SR04 | TRIG | D9 |
| HC-SR04 | ECHO | D10 |
| DHT11 | DATA | D2 |
| Soil Sensor | VCC | 3.3V (if supported) |
| Soil Sensor | GND | GND |
| Soil Sensor | AOUT | A0 |
| MQ-2 | VCC | External regulated 5V |
| MQ-2 | GND | Common GND |
| MQ-2 | AO | A1 |
| IR Sensor | OUT | D3 |
| Flame Sensor | DO | D4 |
| Buzzer | Positive | D5 |
| LCD | SDA | A4 |
| LCD | SCL | A5 |
| LCD | VCC | 5V, if supported |
| LCD | GND | GND |

## Power Distribution

- Arduino UNO is powered through USB.
- Low-current modules use the regulated supply within its current limits.
- MQ-2 heater uses a suitable separate regulated 5V supply.
- All external supplies share a common ground with Arduino UNO.
- Verify module voltage compatibility and avoid connecting external power rails together.

## Notes

The connection table describes the current prototype. Verify the exact module pin labels before connecting hardware.