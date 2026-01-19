Laboratory Exercise 4: Implementing Serial Communication
-
Project Overview This session focuses on establishing a bidirectional data link between the microcontroller and a host computer via the Serial interface. Expanding on previous sensor applications, this project introduces a "latching" alarm mechanism. Unlike previous iterations where the alarm ceased automatically when conditions improved, this system requires a specific textual command from the user to reset the alert, simulating a manual security acknowledgment.
-
Learning Outcomes
-
Comprehend and apply standard Arduino Serial communication protocols.

Demonstrate proficiency with core Serial methods, including initialization (Serial.begin), availability checks (Serial.available), and string reading.

Develop a circuit capable of interpreting and reacting to real-time text input from a computer terminal.

Hardware Requirements
-
Controller: Arduino Uno

Sensor: Photoresistor / LDR (Port A2)

Indicator: LED (Digital Pin 8)

Connection: USB Interface Cable

Passive Components: 10kΩ resistor (for the Shutterstock Explorevoltage divider) and 220Ω resistor (LED current limiting).

Technical Principles
-
Serial Interface: Utilizing the UART protocol to stream sensor metrics to the PC and accept incoming control commands.

String Manipulation: Processing incoming text buffers and applying case-conversion (forcing lowercase) to ensure command recognition regardless of capitalization.

State Latching: Implementing boolean logic (flags) to maintain an active alarm state that persists independently of the current sensor reading.

Continuous Monitoring: Comparing analog input against defined limits in real-time.

Operational Logic The system functions as a latching light-level alarm with the following behavior:
-
Surveillance: The system continuously gauges ambient light levels via the photoresistor.

Activation: Upon detecting a brightness value exceeding 220, the system triggers the LED on Pin 8 to blink rapidly (100ms intervals).

Latching: Once activated, the alarm enters a "locked" state. The blinking continues indefinitely, even if the light level returns to a safe range.

Manual Reset: To silence the alarm, the operator must transmit the command "stop" via the Serial Monitor. The system parses this input case-insensitively (e.g., accepting "STOP", "Stop", or "stop").

Restoration: Upon validation of the command, the alarm flag clears, and the system returns to standard monitoring mode.

Deliverables
-
Source Code: The .ino file featuring the serial command parser and state machine logic.

Schematic: Circuit layout detailing the LDR input and LED output configuration.

Group Members
-
De Asis, Johnny Jr. S.

Osit, Eduardo V.

Padilla, Allexzeus Marvel C.
