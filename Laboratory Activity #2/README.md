Laboratory Exercise 2: Working with Analog Signals
-
Project Overview Building upon the logic established in the previous exercise, this activity transitions from binary digital states to Pulse Width Modulation (PWM). The focus shifts to manipulating LED brightness levels through analog output commands, illustrating how digital microcontrollers can simulate analog voltage behavior.
-
Learning Outcomes
-
Explore the principles of analog signaling and their application in Arduino circuits.

Comprehend the mechanics of Analog-to-Digital Conversion (ADC) and signal scaling.

Demonstrate competency in using the map() function for value translation.

Enhance code efficiency by implementing data arrays and while loops.

Hardware Requirements
-
Controller: Arduino Uno (or equivalent)

Indicators: 5x LEDs (connected to PWM-enabled terminals)

Protection: 5x 220Ω Resistors

Assembly: Breadboard and connection cables

Technical Principles
-
Pulse Width Modulation (PWM): Employing analogWrite() to modulate the duty cycle and average voltage supplied to the components.

Data Structures: Utilizing arrays to index pin numbers for streamlined iteration.

Flow Control: Replacing standard for loops with while loops to manage execution logic.

Value Scaling: Implementing the map() function to translate data between differing ranges (e.g., standardizing inputs to outputs).

Operational Logic The circuit retains the sequential pattern from the previous activity but incorporates advanced control structures:
-
Setup: Output pins (8 through 12) are initialized dynamically using an array traversed by a while loop.

Direction: The activation sequence proceeds in descending order from Pin 12 to Pin 8.

Output Method: The system utilizes analogWrite() to drive the LEDs, replacing the previous binary switching.

Timing: A precise interval of 1000ms (1 second) separates each transition in the sequence.

Deliverables
-
Source Code: Optimized .ino sketch featuring array-based logic.

Schematic: Hardware layout demonstrating LED connections to the controller.

Group Members
-
De Asis, Johnny Jr. S.

Osit, Eduardo V.

Padilla, Allexzeus Marvel C.
