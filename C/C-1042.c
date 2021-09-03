// Leia 3 valores inteiros e ordene-os em ordem crescente. No final, mostre os valores em ordem crescente, uma linha em branco e em seguida, os valores na sequência como foram lidos.

#include <stdio.h>
 
int main() {
 
    int a, b, c;
    int x, y, z;
    int i;

    scanf("%d %d %d", &a, &b, &c);

    x = a;
    y = b;
    z = c;

    if (x >y){
        i = x;
        x = y;
        y = i;
    }
    
    if (x >z){
        i = x;
        x = z;
        z = i;
    }

    if (y >z){
        i = y;
        y = z;
        z = i;
    }

    printf("%d\n%d\n%d\n", x, y, z);
    printf("\n");
    printf("%d\n%d\n%d\n", a, b, c);
 
    return 0;
}