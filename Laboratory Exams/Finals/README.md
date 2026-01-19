Final Laboratory Assessment: Arduino-to-Python API Client
-
Project Overview: This comprehensive examination project establishes a hardware-initiated network client. In this architecture, the Arduino functions as a physical interface device that communicates with a host Python application via Serial. A physical interaction (button press) on the microcontroller triggers the Python script to execute an HTTP request against a pre-defined API endpoint, effectively bridging local hardware inputs with remote web services to control an external LED system.
-
Learning Outcomes
-
Implement software-based debouncing algorithms to ensure signal integrity and prevent redundant data transmission during mechanical switch actuation.

Develop a persistent, non-terminating Python application capable of continuous serial port monitoring.

Apply data normalization techniques to incoming serial strings to eliminate case-sensitivity errors.

Demonstrate proficiency in generating HTTP requests using Python to interact with external web APIs.

Hardware & Software Requirements
-
Controller: Arduino Uno

Input Interface: Tactile Push Button (Primary Trigger)

Software Stack: Python environment equipped with pyserial for hardware communication and requests for network operations.

Technical Principles
-
Client-Server Integration: Utilizing the Arduino to generate local signals that drive a Python-based client to consume remote web resources.

Signal Conditioning: Applying logic to distinguish valid input signals from mechanical noise (debouncing) to prevent API spamming.

Data Parsing: Extracting and standardizing the "Group Identifier" from the serial stream before processing.

API Consumption: Formatting and dispatching dynamic URL requests (e.g., /led/group/<id>/toggle) based on hardware events.

Operational Logic The system executes a four-stage workflow:
-
Actuation: The user engages the physical button on the Arduino circuit

Shutterstock
. 2. Transmission: The microcontroller validates the press and transmits the assigned Group ID via the Serial interface. 3. Bridge Execution: The Python script intercepts the ID, sanitizes the format, and dispatches an HTTP GET or POST request to the target API endpoint. 4. Status Reporting: The Python console provides real-time feedback, logging the targeted endpoint and the HTTP status code (success or error) returned by the server.

Deliverables
-
Firmware: The .ino sketch featuring the debounce logic and serial transmission protocol.

Application: The .py script responsible for serial listening and API request handling.

Schematic: A wiring diagram detailing the input button configuration.

Group Members
-
Barrion, Merell Joy B.

De Asis, Johnny Jr. S.

Francisco, Gerard Obey S.

Osit, Eduardo V.

Padilla, Allexzeus Marvel C.

Roldan, Maureen T.
