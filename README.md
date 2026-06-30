# Smart Temperature Monitoring System

A simple Embedded Systems project that monitors ambient temperature using an Arduino Uno and a DS18B20 digital temperature sensor. The system continuously reads the temperature and activates an LED and buzzer when the temperature exceeds a predefined threshold.

---

## Features

- Real-time temperature monitoring
- LED alert for high temperature
- Buzzer alert for high temperature
- Temperature displayed on the Serial Monitor
- Threshold-based monitoring (35°C)
- Simulated using Wokwi

---

## Components Used

- Arduino Uno
- DS18B20 Temperature Sensor
- LED
- Piezo Buzzer
- 220 Ω Resistor
- Jumper Wires

---

## Circuit Diagram

> Add your circuit image here after uploading it to the repository.

```text
Repository
│
├── circuit.png
```

Then replace this section with:

```markdown
![Circuit Diagram](circuit.png)
```

---

## Working Principle

1. The DS18B20 measures the surrounding temperature.
2. The Arduino reads the temperature through the 1-Wire communication protocol.
3. The measured temperature is compared with the threshold value (35°C).
4. If the temperature exceeds 35°C:
   - LED turns ON
   - Buzzer sounds
   - Alert message is displayed on the Serial Monitor.
5. Otherwise, the LED and buzzer remain OFF.

---

## Circuit Connections

| Component | Arduino Pin |
|-----------|-------------|
| DS18B20 DATA | D2 |
| DS18B20 VCC | 5V |
| DS18B20 GND | GND |
| LED | D12 |
| Buzzer | D9 |

---

## Software Used

- Arduino IDE
- Wokwi Arduino Simulator

---

## Project Structure

```
Smart-Temperature-Monitor-Arduino/
│
├── README.md
├── Smart_Temperature_Monitor.ino
├── circuit.png
└── output.png
```

---

## Output

> Upload a screenshot of the Serial Monitor as `output.png` and display it using:

```markdown
![Output](output.png)
```

---

## Future Improvements

- LCD/OLED Display
- IoT monitoring using ESP32
- Mobile notifications
- Cloud data logging
- Temperature history graph

---

## Author

**Aswin S**

---

## License

This project is available under the MIT License.
