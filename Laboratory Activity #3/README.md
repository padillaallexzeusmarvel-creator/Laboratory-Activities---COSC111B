Laboratory Exercise 3: Working with Sensors (Fire Sensor Simulation)
-
Project Overview This project focuses on the development of an automated environmental monitoring system designed to simulate fire detection. By integrating a thermistor and a photoresistor, the device tracks thermal and optical changes simultaneously. The primary goal is to demonstrate the processing of multi-sensor data to trigger immediate audio-visual warnings when hazardous thresholds are crossed.
-
Learning Outcomes
-
Gain proficiency with fundamental sensor hardware essential for IoT applications.

Successfully interface analog input devices (thermal and light sensors) with an Arduino microcontroller.

Construct a conditional alarm system utilizing threshold-based logic.

Hardware Requirements
-
Controller: Arduino Uno

Thermal Input: Thermistor (Port A0)

Optical Input: Photoresistor / LDR (Port A2)

Indicators: Red LED and Piezo Buzzer (Both connected to Pin 12)

Circuitry: 10kΩ resistors for voltage divider circuits; 220Ω resistor for LED protection.

Technical Principles
-
Analog Interfacing: Employing

Shutterstock
Explore
voltage divider circuits to read resistance changes from the sensors.

Data Conversion: Transforming raw analog signals into interpretable metrics (specifically degrees Celsius).

Structured Coding: Utilizing modular functions to isolate sensor processing logic for improved readability.

Pin Management: Implementing #define directives for hardware assignment.

Immutable Values: Declaring const variables for fixed threshold parameters.

Operational Logic The device operates as a continuous safety scanner with the following behavior:
-
Monitoring: The system constantly polls temperature levels (in Celsius) and ambient light intensity.

Thresholds: The safety limits are defined as 50°C for temperature and a mapped digital value of 220 for brightness.

Trigger Logic: The alarm state is activated strictly when both conditions are met: the temperature rises above 50°C and the light intensity exceeds the 220 mark.

Response: Upon activation, the LED and Buzzer sharing Pin 12 pulse rapidly to signal an emergency.

Deliverables
-
Source Code: Modular .ino file containing separate functions for data reading and alarm logic.

Schematic: Wiring layout displaying the sensor voltage dividers and the shared output connection.

Group Members
-
De Asis, Johnny Jr. S.

Osit, Eduardo V.

Padilla, Allexzeus Marvel C.
