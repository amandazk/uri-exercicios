#include <stdio.h>
 
int main() {
    
    int tempo_segundos, horas, minutos;
    scanf("%d", &tempo_segundos);

    minutos = tempo_segundos / 60;
    tempo_segundos -= minutos * 60;
    horas = minutos / 60;
    minutos -= horas * 60;

    printf("%d:%d:%d\n", horas, minutos, tempo_segundos);

    return 0;
}