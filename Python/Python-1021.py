# Leia um valor de ponto flutuante com duas casas decimais. 
# Este valor representa um valor monetário. A seguir, calcule 
# o menor número de notas e moedas possíveis no qual o valor 
# pode ser decomposto. As notas consideradas são de 100, 50, 20, 10, 5, 2. 
# As moedas possíveis são de 1, 0.50, 0.25, 0.10, 0.05 e 0.01. 
# A seguir mostre a relação de notas necessárias.

x = float(input())
x = x + 0.001

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
moeda1 = x / 1
x = x % 1
moeda2 = x / 0.50
x = x % 0.50
moeda3 = x / 0.25
x = x % 0.25
moeda4 = x / 0.10
x = x % 0.10
moeda5 = x / 0.05
x = x % 0.05
moeda6 = x / 0.01
x = x % 0.01

print("NOTAS:")
print("%d nota(s) de R$ 100.00" %cem)
print("%d nota(s) de R$ 50.00" %cin)
print("%d nota(s) de R$ 20.00" %vinte)
print("%d nota(s) de R$ 10.00" %dez)
print("%d nota(s) de R$ 5.00" %cinco)
print("%d nota(s) de R$ 2.00" %dois)
print("MOEDAS:")
print("%d moeda(s) de R$ 1.00" %moeda1)
print("%d moeda(s) de R$ 0.50" %moeda2)
print("%d moeda(s) de R$ 0.25" %moeda3)
print("%d moeda(s) de R$ 0.10" %moeda4)
print("%d moeda(s) de R$ 0.05" %moeda5)
print("%d moeda(s) de R$ 0.01" %moeda6)
