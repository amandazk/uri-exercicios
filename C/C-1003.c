// Leia dois valores inteiros, no caso para variáveis A e B. 
// A seguir, calcule a soma entre elas e atribua à variável SOMA. A seguir escrever o valor desta variável

#include <stdio.h>
 
int main() {

    int A, B;
    scanf("%d %d", &A,&B);
    int SOMA = A + B; 
 
    printf("SOMA = %d\n", SOMA);

    return 0;
}