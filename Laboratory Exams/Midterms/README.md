Midterm Assessment: Smart Outdoor Lighting System
-
Project Overview: This engineering project entails the design and implementation of an intelligent control system for outdoor lighting applications. Using an Arduino microcontroller, the device continuously monitors ambient luminance via an optical sensor to dynamically regulate visual indicators. The system architecture supports dual-mode functionality: a configurable "Manual" state for user-specified sensitivity and an "Automatic" state that emulates adaptive responses to varying weather conditions, such as cloud cover or intense sunlight.
-
Learning Outcomes
-
Calibrate analog optical sensors to convert raw resistance data (0–1023) into a standardized percentage scale (0–100%).

Synthesize conditional control logic to manage a multi-stage LED display based on specific luminance ranges.

Establish a robust Serial communication protocol for real-time telemetry and command input.

Engineer a dynamic thresholding algorithm that autonomously reconfigures system parameters in response to simulated environmental shifts.

Hardware Requirements
-
Controller: Arduino Uno

Sensor: Light Dependent Resistor (LDR) / Photoresistor interface connected to Analog Port A0.

Visual Output:

Green LED (Indicates Low Light levels)

Yellow LED (Indicates Medium Light levels)

Red LED (Indicates High Light levels)

Circuitry: Breadboard, connecting wires, and necessary resistors.

Technical Principles
-
Signal Normalization: Translating raw 10-bit analog signals into a user-friendly 0-100% intensity scale.

Finite State Machine (FSM): Orchestrating the transition and behavior between distinct operating modes (Manual vs. Automatic).

Command Parsing: Utilizing string analysis functions (e.g., startsWith, substring) to interpret complex serial commands.

Adaptive Logic: Implementing algorithms that automatically adjust trigger points (thresholds) to match the simulated environment.

Operational Logic The system outputs a status report via the Serial Monitor every second, detailing Light Intensity, Current Mode, Active LED, and Environmental Status.
-
Indicator Logic:

The system enforces exclusive activation (only one LED is lit at any given moment).

Green: Activates when light levels fall within the lower bound.

Yellow: Activates during intermediate light levels.

Red: Activates when light levels exceed the upper bound.

Operating Modes:

Manual Configuration (Default): The operator defines specific cut-off points using serial commands (e.g., SET LOW xx or SET HIGH xx).

Adaptive Simulation (Automatic): The system automatically shifts its sensitivity thresholds to mimic environmental contexts:

Overcast/Cloudy: Low range starts at 0%; High threshold set to 40%.

Standard Conditions: Low range starts at 41%; High threshold set to 70%.

Intense Sunlight: Low range starts at 71%; High threshold set to 100%.

Deliverables
-
Firmware: The .ino source code containing the adaptive lighting and parsing algorithms.

Schematic: A wiring diagram depicting the LDR voltage divider and LED output connections.

Group Members
-
Ambong, Jemuel Chris N.

De Asis, Johnny Jr. S.

Dellosa, Keren G.

Magma, John Harold R.

Padilla, Allexzeus Marvel C.
