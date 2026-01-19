Laboratory Exercise 5: Receiving Serial Connection using Arduino from Python
-
Project Overview: This experiment demonstrates cross-platform integration by establishing a communication link between a Python script and the Arduino microcontroller. Moving beyond the standard Arduino IDE Serial Monitor, this project utilizes a custom Python-based interface to transmit encoded control signals. The system acts as a bridge between high-level software and low-level hardware, allowing a computer user to manipulate physical components through a terminal script.
-
Learning Outcomes
-
Establish a bidirectional serial protocol between a Python environment and the Arduino platform.

Deploy the pySerial library to stream data from a desktop application to an embedded system.

Develop a remote-control hardware architecture managed via a PC-based command line interface.

Hardware & Software Requirements
-
Controller: Arduino Uno

Indicators: 3x LEDs (Red, Green, Blue)

Pin Configuration:

Red LED: Digital Pin 8

Green LED: Digital Pin 9

Blue LED: Digital Pin 10

Circuitry: 3x 220Ω Resistors and connecting wires.

Software Stack: Python 3.x environment with the pyserial module installed.

Technical Principles
-
Serial Handshaking: Configuring matching Baud rates (9600) to ensure synchronized data transfer between the script and the COM port.

State Toggling: implementing logic that reads the current status of a pin and inverts it (e.g., flipping from High to Low) upon receiving a command.

Input Sanitization: Standardizing user input (e.g., treating uppercase 'R' and lowercase 'r' as identical) to prevent syntax errors.

Continuous Execution: Utilizing a while True structure within Python to keep the communication channel open until a specific termination signal is received.

Operational Logic The system functions as a remote console for the LED array . The Python script listens for specific single-character commands to execute the following actions:
-
'R' or 'r': Toggles the Red LED state.

'G' or 'g': Toggles the Green LED state.

'B' or 'b': Toggles the Blue LED state.

'A' or 'a': Activates ALL LEDs simultaneously.

'O' or 'o': Deactivates ALL LEDs simultaneously.

'X' or 'x': Terminates the serial connection and closes the Python script.

Any undefined characters entered into the terminal will trigger an exception message, ensuring the user is aware of invalid inputs. Optionally, the console interface refreshes after every command to maintain a clean workspace.

Deliverables
-
Firmware: The .ino file responsible for parsing serial bytes and actuating the pins.

Software: The .py script serving as the user interface and data transmitter.

Schematic: Wiring layout depicting the RGB configuration.

Group Members
-
Barrion, Merell Joy B.

De Asis, Johnny Jr. S.

Francisco, Gerard Obey S.

Osit, Eduardo V.

Padilla, Allexzeus Marvel C.

Roldan, Maureen T.
