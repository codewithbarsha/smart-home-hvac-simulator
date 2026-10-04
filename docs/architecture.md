# Stage 3 – System Design & Architecture

## 1. System Overview

The Smart Home Occupancy & HVAC Control Simulator is a Linux-based C++ application that simulates temperature and occupancy conditions in a smart home and automatically controls the HVAC system.

## 2. System Architecture

```text
+-----------------------------+
|        User / Console       |
+-------------+---------------+
              |
              v
+-----------------------------+
|     C++ Smart Home App      |
+-------------+---------------+
              |
      +-------+-------+
      |               |
      v               v
+-----------+   +-------------+
|Temperature|   | Occupancy   |
| Simulation|   | Simulation  |
+-----------+   +-------------+
      |               |
      +-------+-------+
              |
              v
+-----------------------------+
|      HVAC Controller        |
|   Decision & Control Logic  |
+-------------+---------------+
              |
              v
+-----------------------------+
|    Linux Device Interface   |
+-------------+---------------+
              |
              v
+-----------------------------+
| Simulated HVAC Device/Driver|
+-----------------------------+
              |
              v
+-----------------------------+
|       System Status         |
+-----------------------------+
