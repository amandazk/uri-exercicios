#include<stdio.h>
 
int fib (int); 
int cont = 0;

int main ()
{
    int a, b;
    scanf("%d %d", &a, &b);

    int resultado1 = fib(a);
    int resultado2 = fib(b);
    
    printf("fib(%d) = ? calls = %d\n", a, resultado1);
    printf("fib(%d) = ? calls = %d\n", b, resultado2);

    return 0;
}

int fib(int n)
{
    if (n < 2){
        return n;
    }
    else {
        return (fib(n - 1) + fib(n - 2));
    }
}