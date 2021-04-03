# Calcule o consumo médio de um automóvel sendo fornecidos a distância total 
# percorrida (em Km) e o total de combustível gasto (em litros).
# O arquivo de entrada contém dois valores: um valor inteiro X representando 
# a distância total percorrida (em Km), e um valor real Y representando o total 
# de combustível gasto, com um dígito após o ponto decimal.

distancia = int(input())
combustivel = float(input())

consumo = distancia / combustivel

print("%0.3f km/l" %consumo)

