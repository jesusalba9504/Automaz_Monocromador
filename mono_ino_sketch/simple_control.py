import time, serial

try:
    fabkit = serial.Serial('COM5', 9600)
except:
    print('Failed to connect')
    exit()

print(fabkit.readline())

while 1:
	var = input("Enter 1 for ON and 0 for OFF:")

	if (var == '1' or var == '0'):
		fabkit.write(var.encode())
		time.sleep(1)

	elif (var == 'q'):
		print("Exiting...")
		fabkit.close()

	else:
		print("Only 1, 0 or q")