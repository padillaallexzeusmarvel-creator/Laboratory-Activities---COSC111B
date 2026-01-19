# Laboratory Activity #5 – Receiving Serial Connection Using Arduino from Python

import serial
import time
import os

ARDUINO_PORT = 'COM8' 
BAUD_RATE = 9600

def clear_screen():
    os.system('cls' if os.name == 'nt' else 'clear')

def main():
    print(f"Connecting to {ARDUINO_PORT}...")       
    
    try:
        ser = serial.Serial(ARDUINO_PORT, BAUD_RATE, timeout=1)
        time.sleep(2)
        print("Connected! Ready.")
        
    except serial.SerialException:
        print(f"ERROR: Could not connect to {ARDUINO_PORT}.")
        print("Check your cable and port number.")
        return

    while True:
        clear_screen()

        print("\n--- CONTROLS ---")
        print("[R] Toggle RED   [G] Toggle GREEN   [B] Toggle BLUE")
        print("[A] All ON       [O] All OFF        [X] Exit")
        
        user_input = input("Command: ").strip().upper()
        
        if not user_input:
            continue
            
        command = user_input[0]

        ser.write(command.encode()) 

        if command == 'X':
            print("Exiting...")
            break
        
        time.sleep(0.1) 
        if ser.in_waiting > 0:
            response = ser.readline().decode('utf-8').strip()
            print(f"Arduino: {response}")

    ser.close()

if __name__ == "__main__":
    main()


