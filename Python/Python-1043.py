# Leia 3 valores reais (A, B e C) e verifique se eles formam ou não um triângulo. 
# Em caso positivo, calcule o perímetro do triângulo.
# Em caso negativo, calcule a área do trapézio que tem A e B como base e C como altura, mostrando a mensagem

a, b, c = map(float, input().split())

if a + b > c and b + c > a and a + c > b:
    perimetro = a + b + c
    print("Perimetro = %.1f" %perimetro)
else:
    area = ((a + b) * c) / 2
    print("Area = %.1f" %area)