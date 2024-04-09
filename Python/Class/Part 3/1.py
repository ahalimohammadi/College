n = int(input("Enter n: "))
for i in range (n):
    id = int(input("Enter id: "))
    h = int(input("Enter h: "))
    hp = int(input("Enter hp: "))
    if h > 40:
        ov = (h - 40) * (3 / 2) * hp
        p = 40 * hp + ov
    else:
        ov = 0
        p = h * hp
    print("id = ", id, "ov = ", ov, "p = ", p)