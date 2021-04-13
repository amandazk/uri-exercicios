#include <stdio.h>
#include <stdlib.h>
 
int main() {
 
    int a, b, c;
    int maior_ab, maior_real;
    scanf("%d %d %d", &a, &b, &c);

    maior_ab = (a+b+abs(a-b)) / 2;
    if (c > maior_ab) {
        maior_real = c;
    } else {
        maior_real = maior_ab;
    }

    printf("%d eh o maior\n", maior_real);
 
    return 0;
}