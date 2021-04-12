#include <stdio.h>
int main()
{
    int start_hour,start_min,end_hour, end_min, duration_hour, duration_min, duration;

    scanf("%d %d %d %d", &start_hour, &start_min, &end_hour, &end_min);

    duration = ((end_hour*60)+end_min)-((start_hour*60)+start_min);
    if (duration<=0){
        duration += 24*60;
    }

    duration_hour = duration / 60;
    duration_min = duration % 60;
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", duration_hour, duration_min);

    return 0;
}