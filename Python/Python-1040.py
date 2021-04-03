n1, n2, n3, n4 = map(float, input().split())
media = ((n1 * 2) + (n2 * 3) + (n3 * 4) + (n4 * 1)) / 10
print("Media: %.1f" %media)

if media >= 7.0:
    print("Aluno aprovado.")
elif media >= 5.0 and media <= 6.9:
    print("Aluno em exame.")
    exame = float(input())
    print("Nota do exame: %.1f" %exame) 
    if ((media + exame) / 2.0)  >= 5.0:
        print("Aluno aprovado.")
    else:
        print("Aluno reprovado.")
    print("Media final: %.1f" %((media + exame) / 2.0))
else:
    print("Aluno reprovado.")