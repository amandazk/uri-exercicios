# Neste problema, deve-se ler o código de uma peça 1, o número de peças 1, 
# o valor unitário de cada peça 1, o código de uma peça 2, o número de peças 2 
# e o valor unitário de cada peça 2. Após, calcule e mostre o valor a ser pago.

peca1, numero1, unitario1 = input().split(" ")
peca2, numero2, unitario2 = input().split(" ")

preco = int(numero1) * float(unitario1) + int(numero2) * float(unitario2)
print("VALOR A PAGAR: R$ %.2f" %preco)