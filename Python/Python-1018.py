# Leia um valor inteiro. A seguir, calcule o menor número de notas possíveis (cédulas) 
# no qual o valor pode ser decomposto. As notas consideradas são de 100, 50, 20, 10, 5, 2 e 1. 
# A seguir mostre o valor lido e a relação de notas necessárias.

x = int(input())
print("%d" %x)

cem = x/100
x = x % 100
cin = x / 50
x = x % 50
vinte = x / 20
x = x % 20
dez = x / 10
x = x % 10
cinco = x / 5
x = x % 5
dois = x / 2
x = x % 2
um = x / 1
x = x % 1

print("%d nota(s) de R$ 100,00" %cem)
print("%d nota(s) de R$ 50,00" %cin)
print("%d nota(s) de R$ 20,00" %vinte)
print("%d nota(s) de R$ 10,00" %dez)
print("%d nota(s) de R$ 5,00" %cinco)
print("%d nota(s) de R$ 2,00" %dois)
print("%d nota(s) de R$ 1,00" %um)