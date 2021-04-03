# Escreva um programa que leia o número de um funcionário, 
# seu número de horas trabalhadas, o valor que recebe por hora 
# e calcula o salário desse funcionário. A seguir, mostre o 
# número e o salário do funcionário, com duas casas decimais. 

numero = int(input())
horas = int(input())
valor_por_hora = float(input())

salario = horas * valor_por_hora

print("NUMBER = %d" %numero)
print("SALARY = U$ %.2f" %salario)