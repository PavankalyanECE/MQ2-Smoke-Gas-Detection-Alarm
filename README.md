# Smoke and Gas Detection Alarm using Arduino

## Overview
This project is a simple smoke and gas detection system built using an Arduino Uno and an MQ-2 gas sensor. The system continuously monitors the surrounding air for smoke or combustible gases. If the gas concentration exceeds a predefined threshold, a red LED and buzzer are activated to alert the user. Under normal conditions, a green LED indicates a safe environment.

## Features
- Real-time smoke and gas detection
- Visual indication using Red and Green LEDs
- Audible alert using a buzzer
- Adjustable gas detection threshold
- Serial Monitor output for sensor readings

## Components Required
- Arduino Uno
- MQ-2 Gas Sensor
- Red LED
- Green LED
- Buzzer
- 220Ω Resistors (2)
- Breadboard
- Jumper Wires
- USB Cable

## Circuit Connections

| Component | Arduino Pin |
|-----------|-------------|
| MQ-2 Analog Output | A0 |
| Red LED | D8 |
| Green LED | D9 |
| Buzzer | D7 |
| VCC | 5V |
| GND | GND |

## Working Principle
1. The Arduino reads the analog value from the MQ-2 gas sensor.
2. The sensor value is displayed on the Serial Monitor.
3. If the sensor value exceeds the threshold (500):
   - Red LED turns ON.
   - Green LED turns OFF.
   - Buzzer turns ON.
4. If the sensor value is below the threshold:
   - Green LED turns ON.
   - Red LED turns OFF.
   - Buzzer remains OFF.

## Threshold
```cpp
int smokeThreshold = 500;
```

You can increase or decrease this value depending on your environment and sensor calibration.

## Pin Configuration

```cpp
#define MQ2 A0
#define RED_LED 8
#define GREEN_LED 9
#define BUZZER 7
```

## How to Run
1. Connect all components according to the circuit diagram.
2. Open the Arduino IDE.
3. Select the correct Arduino board and COM port.
4. Upload the code to the Arduino.
5. Open the Serial Monitor at **9600 baud**.
6. Expose the MQ-2 sensor to smoke or gas to test the alarm.

## Expected Output

### Normal Condition
- Green LED ON
- Red LED OFF
- Buzzer OFF

### Smoke/Gas Detected
- Green LED OFF
- Red LED ON
- Buzzer ON

## Applications
- Home gas leak detection
- Kitchen safety systems
- Fire warning systems
- Industrial gas monitoring
- Laboratory safety

## Future Improvements
- Display gas concentration on an LCD or OLED display.
- Send alerts using Wi-Fi (ESP32/ESP8266).
- Upload sensor data to IoT platforms.
- Add SMS or email notifications.
- Integrate multiple gas sensors for enhanced monitoring.

## Author
**Imandi Lakshmi Pavan Kalyan**

Electronics & Communication Engineering (ECE)  
Embedded Systems | Robotics | IoT | Arduino | ESP32
