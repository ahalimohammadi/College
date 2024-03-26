# 1.2.14    practice 14

print("Please enter mass1 and mass2 and radius to calculation the force")
mass1 = input("Please enter the mass1: ")
mass2 = input("Please enter the mass2: ")
radius = input("Please enter the radius: ")
mass1 = float(mass1)
mass2 = float(mass2)
radius = float(radius)
G = 9.8
force = G * mass1 * mass2 / (radius * radius)
print("The force is: ", force)