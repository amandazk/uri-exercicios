# Leia a hora inicial, minuto inicial, hora final e minuto final de um jogo. 
# A seguir calcule a duração do jogo.

# Obs: O jogo tem duração mínima de um (1) minuto e duração máxima de 24 horas.

start_hour,start_min,end_hour,end_min = map(int,input().split())

dif = ((end_hour*60)+end_min)-((start_hour*60)+start_min)
if dif<=0:
    dif += 24*60

time = dif // 60
minute = dif % 60
print(f"O JOGO DUROU {time} HORA(S) E {minute} MINUTO(S)")