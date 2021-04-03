# Leia 3 valores de ponto flutuante e efetue o cálculo das raízes da equação de Bhaskara. 
# Se não for possível calcular as raízes, mostre a mensagem correspondente “Impossivel calcular”, 
# caso haja uma divisão por 0 ou raiz de numero negativo.

import math
a, b, c = map(float, input().split())

delta = (b*b) - (4*a*c)
if a == 0 or delta < 0:
    print("Impossivel calcular")
else:
    delta=math.sqrt(delta)
    r1 = (-b+delta)/(2*a)
    r2 = (-b-delta)/(2*a)
    print("R1 = %.5f" %r1)
    print("R2 = %.5f" %r2)