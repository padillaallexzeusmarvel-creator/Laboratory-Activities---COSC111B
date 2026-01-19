Laboratory Exercise 7: Controlling Arduino using FastAPI
-
Project Overview: This session explores the intersection of web development and embedded systems by implementing an HTTP-based control interface. Utilizing the FastAPI framework, this project establishes a web server capable of processing specific URL requests. When a user accesses these endpoints via a web browser or an API tool, the Python backend translates the HTTP request into a serial protocol, instructing the Arduino to modify the state of connected hardware components.
-
Learning Outcomes
-
Demonstrate the integration of Serial communication protocols within a modern web framework.

Construct a RESTful API architecture specifically designed for hardware manipulation using FastAPI.

Establish a functional gateway bridging standard HTTP web protocols with physical electronic circuits.

Hardware & Software Requirements

Controller: Arduino Uno

Indicators: 3x LEDs (Red on Pin 7, Green on Pin 6, Blue on Pin 5)

Software Stack: Python 3.x environment including FastAPI, Uvicorn (ASGI Server), and the PySerial library.

Technical Principles
-
API Routing: defining specific URL paths (endpoints) to handle dynamic requests, such as targeting specific colors via path parameters.

Asynchronous Communication: Managing a persistent Serial connection alongside the non-blocking nature of the FastAPI server.

Response Management: structuring JSON payloads to provide immediate status feedback to the client upon request execution.

Command Interpretation: Programming the Arduino to execute logic-based state changes upon receiving specific character bytes from the server.

Operational Logic (API Endpoints) The web server is configured to listen for the following HTTP GET requests, which map directly to hardware actions:
-
Endpoint: /led/red

Action: Toggles the Red LED.

Serial Command: Transmits '1' to the microcontroller.

Endpoint: /led/green

Action: Toggles the Green LED.

Serial Command: Transmits '2' to the microcontroller.

Endpoint: /led/blue

Action: Toggles the Blue LED.

Serial Command: Transmits '3' to the microcontroller.

Endpoint: /led/on

Action: Energizes all connected LEDs.

Serial Command: Transmits 'A' to the microcontroller.

Endpoint: /led/off

Action: Extinguishes all connected LEDs.

Serial Command: Transmits 'O' to the microcontroller.

Deliverables
-
Firmware: The .ino sketch programmed to parse numerical and character inputs for pin control.

Backend Application: The .py file containing the FastAPI server logic and serial bridging code.

Schematic: A wiring diagram depicting the connections for the three-LED array.

Group Members
-
Barrion, Merell Joy B.

De Asis, Johnny Jr. S.

Francisco, Gerard Obey S.

Osit, Eduardo V.

Padilla, Allexzeus Marvel C.

Roldan, Maureen T.
