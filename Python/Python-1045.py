# Leia 3 valores de ponto flutuante A, B e C e ordene-os em ordem decrescente, de modo 
# que o lado A representa o maior dos 3 lados. A seguir, determine o tipo de triângulo 
# que estes três lados formam, com base nos seguintes casos, sempre escrevendo uma mensagem adequada:

# se A ≥ B+C, apresente a mensagem: NAO FORMA TRIANGULO
# se A2 = B2 + C2, apresente a mensagem: TRIANGULO RETANGULO
# se A2 > B2 + C2, apresente a mensagem: TRIANGULO OBTUSANGULO
# se A2 < B2 + C2, apresente a mensagem: TRIANGULO ACUTANGULO
# se os três lados forem iguais, apresente a mensagem: TRIANGULO EQUILATERO
# se apenas dois dos lados forem iguais, apresente a mensagem: TRIANGULO ISOSCELES

valores = input().split()
valores = list(map(float,valores))

A,B,C = sorted(valores)[::-1]

continua = True

if(A >= B+C):
    print("NAO FORMA TRIANGULO")
    continua = False

if(A**2 == (B**2) + (C**2) and continua):
    print("TRIANGULO RETANGULO")

if(A**2 > (B**2) + (C**2) and continua):
    print("TRIANGULO OBTUSANGULO")

if(A**2 < (B**2) + (C**2) and continua):
    print("TRIANGULO ACUTANGULO")

if(A == B and B == C and continua):
    print("TRIANGULO EQUILATERO")

if((A == B or B == C) and not (A == B and B == C) and continua):
    print("TRIANGULO ISOSCELES")