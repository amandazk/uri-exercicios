# Leia a hora inicial e a hora final de um jogo. A seguir calcule a duração do jogo, 
# sabendo que o mesmo pode começar em um dia e terminar em outro, tendo uma duração 
# mínima de 1 hora e máxima de 24 horas.

start,end = map(int,input().split())

if start >= end:
    end +=24
start = end - start
print("O JOGO DUROU %d HORA(S)" %start)
