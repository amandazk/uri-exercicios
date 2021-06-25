x = 0
for i in range(0, 6):
    valor = float(input())
    if valor > 0:
        x += 1

print("{} valores positivos".format(x))