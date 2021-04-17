#include <stdio.h>
 
int main() {
 
    int x;
    int cem, cin, vinte, dez, cinco, dois, um;
    scanf("%d", &x);
    printf("%d\n", x);

    cem = x/100;
    x = x % 100;
    cin = x / 50;
    x = x % 50;
    vinte = x / 20;
    x = x % 20;
    dez = x / 10;
    x = x % 10;
    cinco = x / 5;
    x = x % 5;
    dois = x / 2;
    x = x % 2;
    um = x / 1;
    x = x % 1;

    printf("%d nota(s) de R$ 100,00\n", cem);
    printf("%d nota(s) de R$ 50,00\n", cin);
    printf("%d nota(s) de R$ 20,00\n", vinte);
    printf("%d nota(s) de R$ 10,00\n", dez);
    printf("%d nota(s) de R$ 5,00\n", cinco);
    printf("%d nota(s) de R$ 2,00\n", dois);
    printf("%d nota(s) de R$ 1,00\n", um);

    return 0;
}