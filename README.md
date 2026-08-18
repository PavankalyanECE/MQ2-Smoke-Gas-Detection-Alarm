# Smoke and Gas Detection Alarm using Arduino 🚨

> An Arduino-based smoke and gas detection system using an **MQ-2 gas sensor**, **Red and Green LEDs**, and a **buzzer** to provide visual and audible alerts when smoke or combustible gas is detected.

---

## 🎥 Demo Video

▶️ **[Watch Project Demo on YouTube](https://youtu.be/keNhArxh3Wc?si=I9Wl2F8vSYozDkFv)**

---

## 📖 Overview

The **Smoke and Gas Detection Alarm using Arduino** is an embedded safety project designed to detect smoke and combustible gases using an **MQ-2 gas sensor**.

The Arduino continuously monitors the analog output of the MQ-2 sensor and compares the sensor reading against a predefined threshold.

When the environment is within the normal range, the **Green LED** remains ON. When the sensor reading exceeds the threshold, the **Red LED** and **Buzzer** are activated to provide an immediate warning.

The project is also simulated using **Tinkercad Circuits** for virtual testing and demonstration.

---

## 📸 Project Images

### 🔧 Hardware Implementation

![Smoke and Gas Detection Alarm Hardware](./Hardware-&-Image's/Hardware-IMG1.png)

### 🛠️ Project Setup

![MQ-2 Smoke and Gas Detection System](./Hardware-&-Image's/Hardware-IMG2.png)

### 💻 Tinkercad Simulation

![Smoke Detection Alarm Tinkercad Simulation](./Tinkercad/Smoke%20Detection%20Alarm.png)

---

## ✨ Features

* 🚨 Real-time smoke and gas detection
* 🌫️ MQ-2 gas sensor
* 🟢 Green LED indication for normal conditions
* 🔴 Red LED indication for smoke/gas detection
* 🔊 Buzzer-based alarm
* 📊 Real-time sensor readings through Serial Monitor
* ⚙️ Adjustable detection threshold
* 💻 Arduino-based embedded system
* 🧪 Tinkercad circuit simulation

---

## 🧰 Components Required

| Component       |    Quantity | Purpose                   |
| --------------- | ----------: | ------------------------- |
| Arduino UNO     |           1 | Main controller           |
| MQ-2 Gas Sensor |           1 | Smoke and gas detection   |
| Red LED         |           1 | Alert indication          |
| Green LED       |           1 | Safe-condition indication |
| Buzzer          |           1 | Audible alarm             |
| 220Ω Resistor   |           2 | LED current limiting      |
| Breadboard      |           1 | Circuit prototyping       |
| Jumper Wires    | As required | Circuit connections       |
| USB Cable       |           1 | Programming and power     |

---

## 🔌 Circuit Connections

| Component                   | Arduino Pin |
| --------------------------- | ----------- |
| **MQ-2 Analog Output (AO)** | A0          |
| **Red LED**                 | D8          |
| **Green LED**               | D9          |
| **Buzzer**                  | D7          |
| **MQ-2 VCC**                | 5V          |
| **MQ-2 GND**                | GND         |

### Pin Configuration

```cpp
#define MQ2 A0
#define RED_LED 8
#define GREEN_LED 9
#define BUZZER 7
```

---

## ⚙️ Working Principle

The system operates as follows:

1. The **MQ-2 sensor** senses smoke and combustible gases in the surrounding environment.
2. The sensor generates an analog output based on the detected gas/smoke level.
3. Arduino reads the sensor value through **analog pin A0**.
4. The sensor reading is displayed on the **Serial Monitor**.
5. Arduino compares the reading with the predefined detection threshold.
6. If the reading is below the threshold:

   * 🟢 Green LED turns ON.
   * 🔴 Red LED turns OFF.
   * 🔊 Buzzer remains OFF.
7. If the reading reaches or exceeds the threshold:

   * 🟢 Green LED turns OFF.
   * 🔴 Red LED turns ON.
   * 🔊 Buzzer turns ON.
8. The process continuously repeats to monitor the environment.

---

## 🚨 Detection Logic

The project uses a threshold-based detection method.

```cpp
int smokeThreshold = 500;
```

### 🟢 Normal Condition

```text
Sensor Value < 500
        │
        ├── Green LED → ON
        ├── Red LED   → OFF
        └── Buzzer    → OFF
```

### 🔴 Smoke/Gas Detected

```text
Sensor Value >= 500
        │
        ├── Green LED → OFF
        ├── Red LED   → ON
        └── Buzzer    → ON
```

> **Note:** The threshold value can be adjusted according to the sensor, environment, and testing conditions. The MQ-2 requires suitable warm-up and calibration for consistent results.

---

## 📊 Serial Monitor

The Arduino continuously sends the MQ-2 sensor readings to the Serial Monitor.

**Baud Rate:**

```text
9600
```

Example output:

```text
MQ-2 Sensor Value: 287
MQ-2 Sensor Value: 314
MQ-2 Sensor Value: 521
Smoke/Gas Detected!
```

This allows the sensor response to be observed in real time during testing.

---

## 🧪 Tinkercad Simulation

A virtual version of the smoke detection circuit is included in the repository under the **Tinkercad** folder.

```text
Tinkercad/
├── README.md
└── Smoke Detection Alarm.png
```

The simulation can be used to understand and test the basic circuit operation before implementing the project with physical hardware.

---

## 💻 Software Used

### Arduino IDE

Used for:

* Writing the Arduino program
* Compiling the source code
* Uploading the program to Arduino UNO
* Monitoring MQ-2 sensor readings

### Tinkercad Circuits

Used to create and test the circuit virtually.

---

## 🚀 How to Run

### 1. Build the Circuit

Connect the Arduino UNO, MQ-2 sensor, LEDs, resistors, and buzzer according to the circuit connection table.

### 2. Open the Arduino Code

Navigate to:

```text
Code/Smoke and Gas Detection Alarm using Arduino.ino
```

Open the file using the **Arduino IDE**.

### 3. Select Board and Port

In Arduino IDE, select:

```text
Tools → Board → Arduino UNO
```

Then select the appropriate COM port:

```text
Tools → Port
```

### 4. Upload the Code

Upload the program to the Arduino UNO.

### 5. Open Serial Monitor

Open:

```text
Tools → Serial Monitor
```

Set the baud rate to:

```text
9600 baud
```

### 6. Test the System

Observe the MQ-2 sensor readings and test the detection response.

When the sensor value exceeds the configured threshold:

* 🔴 Red LED → ON
* 🟢 Green LED → OFF
* 🔊 Buzzer → ON

---

## 📈 Expected Output

### 🟢 Normal Condition

| Output    | Status   |
| --------- | -------- |
| Green LED | ON       |
| Red LED   | OFF      |
| Buzzer    | OFF      |
| Alarm     | Inactive |

### 🔴 Smoke/Gas Detected

| Output    | Status |
| --------- | ------ |
| Green LED | OFF    |
| Red LED   | ON     |
| Buzzer    | ON     |
| Alarm     | Active |

---

## 🧠 About the MQ-2 Sensor

The **MQ-2** is a commonly used gas sensor module for detecting smoke and several combustible gases.

It can respond to gases such as:

* Smoke
* LPG
* Propane
* Methane
* Hydrogen
* Other combustible gas vapors

The MQ-2 module generally provides **Analog Output (AO)** and **Digital Output (DO)** along with power and ground connections.

This project uses the **Analog Output** to obtain a sensor reading and perform threshold-based detection.

> **Important:** The sensor reading in this project is used for threshold-based detection and should not be interpreted as an accurate gas concentration measurement in ppm. Accurate gas concentration measurements require proper calibration and an appropriate sensing model.

---

## 🎯 Applications

This project can serve as a basic platform for:

* 🏠 Home safety monitoring
* 🍳 Kitchen gas monitoring
* 🔥 Smoke detection prototypes
* 🏭 Industrial environment monitoring
* 🧪 Laboratory safety demonstrations
* 🤖 Robotics safety systems
* 🎓 Embedded systems education
* 🌐 Future IoT monitoring systems

---

## 🔮 Future Improvements

Possible improvements include:

* 📟 Add a 16×2 LCD or OLED display
* 📶 Add ESP32/ESP8266 wireless connectivity
* 📱 Send mobile notifications
* 📩 Add SMS alerts
* ☁️ Connect to an IoT cloud platform
* 📊 Store and visualize sensor data
* 🔋 Add battery-powered operation
* 🌡️ Integrate temperature and humidity sensors
* 📈 Develop a web-based monitoring dashboard
* 🔔 Implement multiple alarm thresholds

---

## 📁 Repository Structure

```text
MQ2-Smoke-Gas-Detection-Alarm/
│
├── Code/
│   └── Smoke and Gas Detection Alarm using Arduino.ino
│
├── Hardware-&-Image's/
│   ├── Hardware-IMG1.png
│   ├── Hardware-IMG2.png
│   ├── TinkerCAD-Simulation.png
│   └── addsffva
│
├── Tinkercad/
│   ├── README.md
│   └── Smoke Detection Alarm.png
│
└── README.md
```

> `addsffva` appears to be an accidental or temporary file. For a professional repository, I recommend deleting it.

---

## 🛠️ Technologies Used

* **Arduino UNO**
* **MQ-2 Gas Sensor**
* **Arduino IDE**
* **Tinkercad Circuits**
* **Embedded C / Arduino C++**
* **Analog Sensor Interfacing**
* **Digital Electronics**

---

## 👨‍💻 Author

**Imandi Lakshmi Pavan Kalyan Imandi**

Electronics & Communication Engineering

GitHub: **[Pavan Kalyan Imandi](https://github.com/PavankalyanECE/)**

LinkedIn: **[Lakshmi Pavan Kalyan Imandi](https://www.linkedin.com/in/pavan-kalyan-imandi/)**

---

## ⭐ Support

If you found this project useful, consider giving the repository a **⭐ Star** on GitHub.

Feel free to explore the Arduino source code, hardware implementation, and Tinkercad simulation included in this repository.
