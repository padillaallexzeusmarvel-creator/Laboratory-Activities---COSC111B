Laboratory Exercise 1: Fundamentals of Digital Signals
Project Overview This experiment involves constructing a sequential LED display, commonly known as a "Running Light," utilizing an Arduino microcontroller. The primary goal is to demonstrate digital output manipulation by coordinating hardware components through precise software timing and logic.

Learning Outcomes

Evaluate the Arduino platform as a foundational tool for IoT development.

Apply digital signaling principles to control a physical circuit.

Demonstrate proficiency in GPIO pin configuration and time-delay implementation.

Hardware Requirements

Controller: Arduino Uno (or equivalent)

Indicators: 5x Light Emitting Diodes (LEDs)

Protection: 5x Resistors (Value: 220Ω – 330Ω)

Assembly: Breadboard and connecting wires

Technical Principles

Signal Transmission: Toggling voltage levels between High (5V) and Low (0V) using standard output functions.

Pin Configuration: Defining the operational mode of specific pins (Input/Output).

Temporal Control: Suspending program execution to generate observable time intervals.

Iterative Logic: Utilizing control structures to actuate components in a specific, repeatable order.

Operational Logic The circuit utilizes Pins 8 through 12 to execute the following behavior:

Initialization: The system begins with all outputs in the OFF state.

Activation Phase: Commencing at Pin 12, the LEDs illuminate sequentially. Each light activates after a 1-second delay until the entire array is lit.

Deactivation Phase: Following the same order (starting at Pin 12), the LEDs extinguish one by one, maintaining the 1-second interval, until all are off.

Repetition: This cycle loops continuously.

Deliverables

Source Code: The complete .ino file.

Schematic: Wiring layout illustrating the connections for Pins 8 through 12.

Group Members

De Asis, Johnny Jr. S.

Osit, Eduardo V.

Padilla, Allexzeus Marvel C.
