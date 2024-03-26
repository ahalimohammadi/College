# 1.2.22    practice 22

T = input("Please enter the T in degrees Fahrenheit: ")
v = input("Please enter the v in miles per hour or speed: ")
T = float(T)
v = float(v)
W = 35.74 + (0.6215 * T) + ((0.4275 * T) - 35.75) *( v ** 0.16)
print(W)