# HVAC Simulator Testing Report

## 1. HVAC ON Test
Input:
- Room Temperature: 30 C
- Occupancy: 2
- Target Temperature: 24 C

Expected Result:
HVAC should be ON.

Actual Result:
HVAC was ON.

Status: PASS

## 2. HVAC OFF Test
Input:
- Room Temperature: 22 C
- Occupancy: 2
- Target Temperature: 24 C

Expected Result:
HVAC should be OFF.

Actual Result:
HVAC was OFF.

Status: PASS

## 3. Driver Test
The HVAC driver was tested for both ON and OFF states.

Expected Result:
Driver should correctly change and report HVAC power status.

Actual Result:
Driver reported ON and OFF correctly.

Status: PASS
