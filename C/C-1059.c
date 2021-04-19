#include <stdio.h>

void numeroPar(int, int);

int main()
{
    numeroPar(2, 100);
    return 0;
}

void numeroPar(int primeiro, int ultimo)
{
    if(primeiro > ultimo)
        return;
    
    printf("%d\n", primeiro);

    numeroPar(primeiro + 2, ultimo);
}