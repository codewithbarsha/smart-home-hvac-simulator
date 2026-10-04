# Smart Home HVAC Simulator

A Linux-based Smart Home Occupancy and HVAC Control Simulator developed using C++.

## Overview

This project simulates a smart home HVAC system that monitors room temperature and occupancy and automatically controls the HVAC system based on the target temperature.

# Smart Home HVAC Simulator

## 1. Overview

Smart Home HVAC Simulator is a Linux-based simulation project developed using C++ to demonstrate how a smart home heating, ventilation, and air conditioning (HVAC) system can monitor room conditions and automatically control the HVAC system.

The simulator takes room temperature, occupancy count, and target temperature as inputs. Based on the difference between the current room temperature and the target temperature, the controller determines whether the HVAC system should be turned ON or OFF.

The project demonstrates basic concepts of sensor monitoring, occupancy detection, control logic, device-driver interaction, and system status monitoring in a Linux-based C++ environment.

---

## 2. Objectives

The main objectives of this project are:

- To simulate a smart home HVAC control system.
- To monitor room temperature using a temperature sensor module.
- To monitor the number of occupants in a room.
- To allow the user to define a target temperature.
- To automatically control HVAC ON/OFF status based on temperature.
- To demonstrate interaction between the controller and HVAC driver.
- To display the current system status.
- To implement the project using modular C++ source files.
- To demonstrate basic Linux-based system simulation and testing.

---

## 3. System Architecture

The project follows a modular architecture where different components are responsible for sensing, occupancy monitoring, control decisions, and system status reporting.

```text
                    SMART HOME HVAC SYSTEM
                              |
              +---------------+---------------+
              |               |               |
              v               v               v
       Temperature       Occupancy        User Input
          Sensor           Module       Target Temperature
              |               |               |
              +---------------+---------------+
                              |
                              v
                     HVAC Controller
                              |
                    Temperature Comparison
                              |
                    +---------+---------+
                    |                   |
          Room Temp > Target    Room Temp <= Target
                    |                   |
                    v                   v
                 HVAC ON             HVAC OFF
                    |                   |
                    +---------+---------+
                              |
                              v
                       HVAC Driver
                              |
                              v
                      System Monitor
                              |
                              v
                       Status Output
```

---

## 4. Main Features

### 4.1 Temperature Monitoring

The temperature sensor module stores and provides the current room temperature.

The sensor supports:

- Setting room temperature.
- Reading the current room temperature.
- Maintaining temperature data for the controller.

---

### 4.2 Occupancy Monitoring

The occupancy module is used to represent the number of people present in the room.

The system accepts occupancy information as an input and displays it as part of the system status.

---

### 4.3 Target Temperature

The user can provide a target temperature for the room.

The controller compares the current room temperature with this target value to determine the HVAC state.

---

### 4.4 Automatic HVAC Control

The controller automatically determines whether the HVAC should be ON or OFF.

Control logic:

```text
IF Room Temperature > Target Temperature
        |
        v
     HVAC ON

IF Room Temperature <= Target Temperature
        |
        v
     HVAC OFF
```

---

### 4.5 HVAC Driver Interface

The project contains an HVAC driver component that represents the interface between the control logic and the HVAC device.

The driver provides:

- HVAC power ON operation.
- HVAC power OFF operation.
- Current HVAC status.
- Console-based driver status output.

---

### 4.6 System Status Monitoring

The system monitor displays important information including:

- Room temperature.
- Occupancy count.
- Target temperature.
- Current HVAC status.

Example:

```text
============ SYSTEM STATUS ============
Room Temperature : 30.0 C
Occupancy        : 2
Target Temperature: 24.0 C
HVAC Status      : ON
```

---

## 5. HVAC Control Logic

The controller uses a simple temperature-based decision mechanism.

```text
                Read Room Temperature
                         |
                         v
                Read Target Temperature
                         |
                         v
              Compare Room and Target
                         |
             +-----------+-----------+
             |                       |
      Room > Target            Room <= Target
             |                       |
             v                       v
          HVAC ON                 HVAC OFF
```

For example:

### Case 1: Cooling Required

```text
Room Temperature = 30°C
Target Temperature = 24°C

30 > 24

HVAC = ON
```

### Case 2: Target Reached

```text
Room Temperature = 24°C
Target Temperature = 24°C

24 <= 24

HVAC = OFF
```

---

## 6. Project Components

The project is divided into multiple modules.

### Temperature Sensor

Responsible for storing and retrieving room temperature.

### Occupancy Module

Responsible for handling room occupancy information.

### Controller

Responsible for comparing room temperature with the target temperature and deciding the HVAC state.

### HVAC Driver

Represents the HVAC hardware interface and manages the ON/OFF state.

### System Monitor

Responsible for displaying the current system information.

### Main Program

Acts as the entry point of the simulator and connects the different components.

---

## 7. Project Structure

```text
smart-home-hvac-simulator/
│
├── src/
│   ├── main.cpp
│   ├── controller.cpp
│   ├── sensor.cpp
│   ├── occupancy.cpp
│   └── system_monitor.cpp
│
├── include/
│   ├── controller.h
│   ├── sensor.h
│   └── occupancy.h
│
├── driver/
│   └── hvac_driver.cpp
│
├── tests/
│   └── test_report.md
│
├── docs/
│   ├── architecture.md
│   ├── stage1-project-introduction.md
│   └── stage2-project-requirements.md
│
├── README.md
├── hvac_simulator
└── hvac_test
```

---

## 8. Technologies Used

- **C++** – Core programming language.
- **Linux** – Development and execution environment.
- **G++** – C++ compiler.
- **Git** – Version control.
- **GitHub** – Source code repository.
- **Modular C++ Design** – Separation of sensors, controller, driver, and monitoring components.

---

## 9. Build the Project

Open a Linux terminal and navigate to the project directory.

Compile the complete simulator using:

```bash
g++ src/*.cpp -Iinclude -o smart_home
```

---

## 10. Run the Simulator

After successful compilation:

```bash
./smart_home
```

The program will ask the user for:

1. Room temperature.
2. Occupancy count.
3. Target temperature.

Example:

```text
==========================================
       SMART HOME HVAC SIMULATOR
==========================================

Enter room temperature (C): 30
Enter occupancy count: 2
Enter target temperature (C): 24
```

The system then displays the HVAC status.

```text
============ SYSTEM STATUS ============
Room Temperature : 30.0 C
Occupancy        : 2
Target Temperature: 24.0 C
HVAC Status      : ON
```

---

## 11. HVAC Driver Demonstration

The HVAC driver can also be compiled separately to demonstrate the device-control interface.

```bash
g++ driver/hvac_driver.cpp -o /tmp/hvac_driver
```

Run it using:

```bash
/tmp/hvac_driver
```

The driver demonstrates:

```text
[DRIVER] HVAC power: ON
[DRIVER] Current status: ON
[DRIVER] HVAC power: OFF
[DRIVER] Current status: OFF
```

Using `/tmp` keeps the generated executable outside the Git repository.

---

## 12. Testing

The project includes test documentation in:

```text
tests/test_report.md
```

The testing process verifies the important HVAC control conditions and system behavior.

Important conditions include:

| Test Condition | Expected HVAC Status |
|---|---|
| Room temperature > Target temperature | ON |
| Room temperature = Target temperature | OFF |
| Room temperature < Target temperature | OFF |
| Driver power ON | ON |
| Driver power OFF | OFF |

The complete simulator was also compiled and executed successfully in the Linux environment.

---

## 13. System Workflow

The complete execution flow is:

```text
1. Start the HVAC Simulator
            |
            v
2. Enter Room Temperature
            |
            v
3. Enter Occupancy Count
            |
            v
4. Enter Target Temperature
            |
            v
5. Temperature Sensor Provides Data
            |
            v
6. Controller Compares Temperatures
            |
            v
7. HVAC ON/OFF Decision
            |
            v
8. HVAC Driver Updates Device State
            |
            v
9. System Monitor Displays Status
```

---

## 14. Applications

The concepts demonstrated by this simulator can be applied to:

- Smart home temperature management.
- Automated HVAC control.
- Energy-efficient building systems.
- Occupancy-aware environmental monitoring.
- IoT-based home automation systems.
- Basic embedded and system-level control applications.
- Linux-based hardware simulation projects.

---

## 15. Advantages

- Simple and easy-to-understand architecture.
- Modular C++ implementation.
- Separates sensing, control, driver, and monitoring functionality.
- Demonstrates real-world HVAC control logic.
- Can be executed completely in a Linux environment without physical HVAC hardware.
- Provides a foundation for future smart-home automation features.

---

## 16. Future Improvements

The simulator can be extended in the future with:

- Humidity sensors.
- Motion or presence sensors.
- Automatic occupancy-based temperature adjustment.
- Energy consumption monitoring.
- Multiple room support.
- Temperature history and logging.
- GUI-based monitoring.
- Real IoT sensor integration.
- Remote HVAC control.
- More advanced energy optimization algorithms.

---

## 17. Expected Outcome

After running the simulator, the user can observe how the HVAC system responds to different room temperatures and target temperatures.

The project successfully demonstrates:

- Temperature sensing.
- Occupancy monitoring.
- Target temperature configuration.
- Automatic HVAC decision-making.
- HVAC driver interaction.
- System status monitoring.
- Linux-based C++ project execution.

---

## 18. Project Demonstration Flow

For project demonstration, the following sequence can be followed:

```text
1. Compile the C++ project
        |
        v
2. Start the HVAC Simulator
        |
        v
3. Enter room temperature
        |
        v
4. Enter occupancy count
        |
        v
5. Enter target temperature
        |
        v
6. Observe HVAC decision
        |
        v
7. Display system status
        |
        v
8. Demonstrate HVAC driver
        |
        v
9. Verify test documentation
```

---

## 19. Conclusion

The Smart Home HVAC Simulator demonstrates the basic working principles of an automated HVAC control system using C++ on Linux.

The project combines temperature sensing, occupancy monitoring, control logic, HVAC driver interaction, and system monitoring into a modular software architecture.

Although the project is a software simulation, its architecture represents the basic workflow used in real smart-home and building automation systems, where sensor data is processed by a controller and used to control physical devices.
 
The project provides a practical foundation for understanding C++ system programming, modular design, sensor-based decision making, and automated HVAC control.

---

## 20. Project Status

**Status: Completed**

The Smart Home HVAC Simulator has been implemented, compiled, executed, and documented successfully.
