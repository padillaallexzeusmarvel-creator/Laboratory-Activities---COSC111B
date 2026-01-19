# Laboratory Activity #6: Bidirectional Control Using Arduino and Python

import serial
import time

PORT = "COM8"
BAUD = 9600

ser = serial.Serial(PORT, BAUD, timeout=0.1)
time.sleep(2)

print("Waiting for button presses...")

while True:
    if ser.in_waiting > 0:
        data = ser.readline().decode().strip()

        if data == 'R':
            ser.write(b'1\n')
            print("Button 1 pressed → Sent 1")

        elif data == 'G':
            ser.write(b'2\n')
            print("Button 2 pressed → Sent 2")

        elif data == 'B':
            ser.write(b'3\n')
            print("Button 3 pressed → Sent 3")

