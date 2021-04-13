#include <stdio.h>
 
int main() {
 
    int distancia_total;
    double combustivel_total, consumo_medio;
 
    scanf("%d %lf", &distancia_total, &combustivel_total);

    consumo_medio = distancia_total / combustivel_total;
    printf("%.3lf km/l\n", consumo_medio);

    return 0;
}