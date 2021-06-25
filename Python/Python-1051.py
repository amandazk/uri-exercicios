salario = float(input())
imposto = 0

if salario > 4500:
    imposto = (1000 * 0.08) + (1500 * 0.18)
    diferenca = salario - 4500
    imposto += diferenca * 0.28
elif salario > 3000:
    imposto = 1000 * 0.08
    diferenca = salario - 3000
    imposto += diferenca * 0.18
elif salario > 2000:
    diferenca = salario - 2000
    imposto = diferenca * 0.08

if salario > 2000.00:
    print("R$ %.2f" %imposto)
else:
    print('Isento')