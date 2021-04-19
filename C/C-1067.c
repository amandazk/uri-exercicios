#include <stdio.h>

void numeroImpar(int, int);

int main()
{
    int numero;
    scanf("%d", &numero);
    
    numeroImpar(1, numero);
    return 0;
}

void numeroImpar(int primeiro, int ultimo)
{
    if(primeiro > ultimo)
        return;
    
    printf("%d\n", primeiro);

    numeroImpar(primeiro + 2, ultimo);
}