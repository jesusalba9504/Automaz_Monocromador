import serial

try:
    fabkit = serial.Serial('COM6', 9600)
except:
    print('Failed to connect')
    exit()

while 1:
    
    line = fabkit.readline()
    print(line)

fabkit.close()
