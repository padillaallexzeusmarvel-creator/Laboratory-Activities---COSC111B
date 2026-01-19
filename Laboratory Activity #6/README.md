Laboratory Exercise 6: Full-Duplex Serial Communication
-
Project Overview: This laboratory activity implements a complete bidirectional (full-duplex) data stream between the microcontroller and a Python script. Unlike previous exercises where the computer acted solely as a transmitter, this system establishes a responsive feedback loop. The Arduino initiates communication by transmitting physical inputs (button presses) to the Python environment, which processes the data and replies with specific command codes to actuate hardware (LEDs). This architecture simulates the "handshake" protocols found in commercial IoT systems.
-
Learning Outcomes
-
Construct a fully functional bi-directional bridge between an embedded system and a high-level programming language.
Implement state-change detection algorithms to prevent signal flooding during physical button presses.
Optimize serial transmission to achieve near-instantaneous (sub-1-second) response latency.

Hardware Requirements
-
Controller: Arduino Uno
Indicators: 3x LEDs (Red on Pin 7, Green on Pin 6, Blue on Pin 5)
Inputs: 3x Tactile Push Buttons (Button 1 on Pin 12, Button 2 on Pin 11, Button 3 on Pin 10)
Circuitry: 3x 220Ω resistors (current limiting) and 3x 10kΩ resistors (pull-down configuration).

Technical Principles
-
Uplink Signaling: The microcontroller monitors the electrical state of the buttons  and transmits a specific character identifier ('R', 'G', or 'B') via Serial immediately upon detection.
Downlink Control: The microcontroller simultaneously listens for incoming numerical strings ('1', '2', or '3') to trigger hardware events.
Centralized Processing: The Python script functions as the logic core, intercepting raw button data and mapping it to executable commands.
Edge Detection: Utilizing logic to transmit data only once per press event, rather than continuously while the button is held.

Operational Logic
-
The system operates on a circular "Request-Response" workflow:

1. Trigger: The user depresses a physical button (e.g., Button 1 on Pin 12).
2. Transmission: The Arduino detects the rising edge of the signal and transmits the character **'R'** to the computer.
3. Processing: The Python script intercepts the **'R'**, interprets it, and immediately writes the command **'1'** back to the serial port.
4. Actuation: The Arduino reads the **'1'** from the buffer and toggles the state of the **Red LED**.

This logic applies to all three channels:

Button 1: Sends 'R'  Receives '1'  Toggles Red LED.
Button 2: Sends 'G'  Receives '2'  Toggles Green LED.
Button 3: Sends 'B'  Receives '3'  Toggles Blue LED.

Deliverables
-
Firmware: The `.ino` sketch featuring non-blocking button logic and serial reading.
Software: The `.py` script utilizing the `pyserial` library to manage the loopback logic.
Schematic: Wiring diagram illustrating the 3-button/3-LED setup.

Group Members
-
Barrion, Merell Joy B.
De Asis, Johnny Jr. S.
Francisco, Gerard Obey S.
Osit, Eduardo V.
Padilla, Allexzeus Marvel C.
Roldan, Maureen T.

---

Would you like me to generate the **Python script** that handles this specific "Echo/Map" logic (receiving 'R' and sending back '1')?
