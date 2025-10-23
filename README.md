# Fiber-Optic Microscope for Plasma Diagnostics

### Overview
This project develops a compact optical microscope and camera module that captures plasma emission through a fiber-optic feed and monitors focus drift under thermal gradients.  
It bridges **thermal–optical–mechanical coupling** design for advanced diagnostic systems, relevant to space hardware, optomechanics, and semiconductor analysis.

---

### Objectives
- Capture and visualize emission intensity changes from plasma using a fiber-coupled CMOS camera.  
- Evaluate **optical alignment stability** and **focus drift** under varying temperatures.  
- Simulate **heat conduction**, **vibration modes**, and **structural expansion** in SolidWorks + COMSOL / ANSYS Workbench.  
- Automate image capture and thermal logging using **Python + Arduino**.

---

### Tools Used
| Domain | Software / Hardware |
|--------|----------------------|
| CAD / FEA | SolidWorks, COMSOL Multiphysics, ANSYS Workbench |
| Data & Imaging | Python (OpenCV, Matplotlib, NumPy) |
| Optics | Zemax OpticStudio (optional) |
| Hardware | Raspberry Pi Cam, Fiber Collimator, 400 µm Silica Patch Cable, Thermistor |
| Control | Arduino Uno |

---

### Key Experiments
1. **Thermal Drift Test**  
   Measure image blur and focal shift across 40–100 °C range.  
2. **Emission Capture**  
   Record plasma light intensity through fiber; post-process with OpenCV.  
3. **Material Comparison**  
   Compare aluminum vs. CFRP housing designs for optical stability.  
4. **Spectral Expansion (optional)**  
   Add diffraction grating and analyze wavelength peaks using Python FFT.

---

### Simulation Highlights
| Case | ΔT (°C) | Max Displacement (µm) | Focus Drift (µm) | Notes |
|------|----------|-----------------------|------------------|-------|
| Al 6061 Base | 60 | 52 | 18 | Moderate drift |
| Mg Alloy | 60 | 65 | 25 | High drift |
| CFRP Hybrid | 60 | 28 | 9 | Best thermal stability ✅ |

---

### Repo Structure
