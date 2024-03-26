import sys

n = int(sys.argv[1])
power = 1
i = 0
while 1 <= n:
    print(str(i) + ' ' + str(power))
    power = 2 * power
    i = 1 + i