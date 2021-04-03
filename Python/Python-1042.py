# Leia 3 valores inteiros e ordene-os em ordem crescente. No final, mostre os 
# valores em ordem crescente, uma linha em branco e em seguida, os valores na sequência como foram lidos.

n1, n2, n3 = map(int, input().split())
numeros = [n1,n2,n3]
numeros.sort()

print (numeros[0])
print (numeros[1])
print (numeros[2])
print ("")

print (n1)
print (n2)
print (n3)