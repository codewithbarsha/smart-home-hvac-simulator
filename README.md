# Smart Home HVAC Simulator

A Linux-based Smart Home Occupancy and HVAC Control Simulator developed using C++.

## Overview

This project simulates a smart home HVAC system that monitors room temperature and occupancy and automatically controls the HVAC system based on the target temperature.

## Features

- Room temperature monitoring
- Occupancy detection
- Target temperature setting
- Automatic HVAC ON/OFF control
- HVAC driver interface
- System status monitoring
- Test cases for HVAC control
- Linux-based C++ implementation

## System Logic

- If the room temperature is above the target temperature, HVAC is turned ON.
- If the room temperature is at or below the target temperature, HVAC is turned OFF.
- Occupancy information is monitored by the system.

## Project Structure

```text
smart-home-hvac-simulator/
├── src/
│   ├── main.cpp
│   ├── controller.cpp
│   ├── sensor.cpp
│   ├── occupancy.cpp
│   └── system_monitor.cpp
├── include/
├── driver/
│   └── hvac_driver.cpp
├── tests/
│   └── test_report.md
├── docs/
├── diagrams/
├── README.md
└── hvac_test## 6. Expected Outcome

The simulator should correctly control the HVAC system based on room temperature and occupancy.

Example:
- If the room temperature is above the target temperature, HVAC should turn ON.
- If the room temperature is at or below the target temperature, HVAC should turn OFF.
- Occupancy information is monitored by the system.

## 7. Application / Use Cases

- Smart home temperature control
- Energy-efficient HVAC management
- Occupancy-based monitoring
- Basic Linux and C++ system simulation

## 8. Technology Overview

- Language: C++
- Operating System: Linux
- Version Control: Git and GitHub
- Testing: Manual test cases and test documentation

## 9. Conclusion

This project demonstrates a simple smart home HVAC control system using C++ on Linux. It shows how temperature and occupancy information can be used to control HVAC operation.

**Stage 1 Status: Project Introduction and Scope Defined**
