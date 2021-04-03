# Leia um valor inteiro, que é o tempo de duração em segundos de um 
# determinado evento em uma fábrica, e informe-o expresso no formato horas:minutos:segundos.

seconds = int(input())

minutes = int(seconds/60);
seconds -= minutes*60;
hours = int(minutes/60);
minutes -= hours*60;

print(f'{hours}:{minutes}:{seconds}')