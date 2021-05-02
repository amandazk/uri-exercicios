#include<stdio.h>

int fib(int n, int *contador)
{
    (*contador)++;
    if (n < 2){
        return n; 
    }
    else {
        return (fib(n - 1, contador) + fib(n - 2, contador));
    }
}

int main ()
{
    int n;
    scanf("%d", &n);

    int i, x, resultado, contador;
    for (i = 0; i < n; i++){
        scanf("%d", &x);
        
        contador = 0;
        resultado = fib(x, &contador);

        printf("fib(%d) = %d calls = %d\n", x, contador - 1, resultado);
    }

    return 0;
}