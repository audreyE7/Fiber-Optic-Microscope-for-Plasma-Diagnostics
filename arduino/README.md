# Arduino Thermal Logger — TMP36

This Arduino sketch reads analog voltage from a TMP36 temperature sensor and outputs calibrated temperature data in °C over serial. It’s part of the **Fiber Optic Microscope for Plasma Diagnostics** system and enables synchronized thermal readings during optical emission monitoring.

---

### 🔧 Hardware Setup
| TMP36 Pin | Arduino Pin | Description |
|------------|--------------|--------------|
| +V (5V)    | 5V           | Supply voltage |
| GND        | GND          | Ground |
| Vout       | A0           | Analog temperature signal |

---

### 🧠 Function
- Converts analog voltage (0–5 V) to °C using the TMP36 calibration.
- Streams data as comma-separated values (e.g., `T,24.37`) every 200 ms.
- Designed for coupling with a Python data capture script or fiber-optic emission logger.

---

### 🧩 Serial Example Output
