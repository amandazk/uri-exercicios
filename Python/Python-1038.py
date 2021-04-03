# Escreva um programa que leia o código de um item e a quantidade 
# deste item. A seguir, calcule e mostre o valor da conta a pagar.

codigo, quantidade = map(int, input().split())

if codigo == 1:
    preco = quantidade * 4.00
elif codigo == 2:
    preco = quantidade * 4.50
elif codigo == 3:
    preco = quantidade * 5.00
elif codigo == 4:
    preco = quantidade * 2.00
elif codigo == 5:
    preco = quantidade * 1.50

print("Total: R$ %.2f" %preco)