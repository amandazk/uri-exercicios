#include <stdio.h>
 
int main() {
 
    int anos, meses, dias, idade;
    scanf("%d", &idade);

    anos = idade / 365;
    meses = (idade % 365) / 30;
    dias = (idade % 365) % 30;

    printf("%d ano(s)\n", anos);
    printf("%d mes(es)\n", meses);
    printf("%d dia(s)\n", dias);

    return 0;
}