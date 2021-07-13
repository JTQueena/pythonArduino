import serial
x=0
port = serial.Serial('COM3', baudrate=115200, timeout=3.0) #設定序列埠

def inputControl():
    x=input("controlLed:")
    port.write(x.encode())

while True:
    inputControl()
