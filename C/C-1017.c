#include <stdio.h>
 
int main() {
 
    int tempo_viagem, velocidade_media;
    float quantidade_litros;

    scanf("%d %d", &tempo_viagem, &velocidade_media);

    quantidade_litros = (tempo_viagem * velocidade_media) / 12.0;

    printf("%.3lf\n", quantidade_litros);

    return 0;
}