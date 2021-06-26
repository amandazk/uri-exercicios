sum = 0.0
cont = 0

for i in range(0, 6):
    valor = float(input())
    if valor > 0:
        sum += valor
        cont += 1

print("{} valores positivos".format(cont))
print("%0.1f"%(sum/cont))