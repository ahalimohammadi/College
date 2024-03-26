# 1.2.19    practice 19

print('Specify the resulting values by entering them')
x0 = input("Enter x0: ")
v0 = input("Enter v0: ")
t = input("Enter t: ")
x0 = int(x0)
v0 = int(v0)
t = int(t)
g = 9.80665
y = x0 + (v0 * t) - (g * (t ** 2) / 2)
print("Place is equal to: ", y)