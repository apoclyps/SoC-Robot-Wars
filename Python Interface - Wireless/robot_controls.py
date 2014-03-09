import serial
ser =  serial.Serial('/dev/ttyUSB0', 9200)
while 1:
    inp = raw_input("Enter the data to send or enter 'exit' to exit:")
    if inp=='exit':
        break
    else:
        ser.write(inp)