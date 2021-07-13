import serial
x=0
port = serial.Serial('COM3', baudrate=115200, timeout=3.0)

def inputControl():
    x=input("controlRelay:")
    port.write(x.encode())

while True:
    inputControl()
