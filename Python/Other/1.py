x = input('Please enter a number: ')
x = int(x)
for i in range(2, x - 1):
    if x % i != 0:
        print("Your number is Prime :)")
    else:
        print("Your number isn't Prime :(")
        break