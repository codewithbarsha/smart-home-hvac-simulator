# Smart Home HVAC Simulator - System Architecture

## 1. Overview

The Smart Home HVAC Simulator is a modular C++ system designed to monitor room temperature and occupancy and automatically control HVAC operation.

## 2. System Components

- Temperature Sensor
- Occupancy Sensor
- HVAC Controller
- System Monitor
- Linux System Interface
- Device Driver Interface
- Main Application

## 3. Data Flow

Temperature Sensor → HVAC Controller → HVAC System

Occupancy Sensor → HVAC Controller → HVAC System

HVAC Controller → System Monitor → User

## 4. Control Logic

The HVAC controller compares the current room temperature with the target temperature.

- If the room temperature is above the target temperature, HVAC is turned ON.
- If the room temperature is at or below the target temperature, HVAC may remain OFF.
- Occupancy information is used by the system for monitoring and control decisions.

## 5. Architecture Diagram

```mermaid
flowchart TD
    A[Temperature Sensor] --> C[HVAC Controller]
    B[Occupancy Sensor] --> C
    C --> D[HVAC System]
    C --> E[System Monitor]
    E --> F[Linux System Interface]
    F --> G[Device Driver Interface]
    E --> H[User]
