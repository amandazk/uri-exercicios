impares = 0
pares = 0
positivos = 0
negativos = 0

for i in range(0, 5):
    valor = int(input())
    if valor % 2 == 0:
        pares += 1
    if valor % 2 != 0:
        impares += 1
    if valor > 0:
        positivos += 1
    if valor < 0:
        negativos += 1

print("{} valor(es) par(es)".format(pares))
print("{} valor(es) impar(es)".format(impares))
print("{} valor(es) positivo(s)".format(positivos))
print("{} valor(es) negativo(s)".format(negativos))
