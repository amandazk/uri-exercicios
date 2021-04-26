#include <stdio.h>

void geraQuadrados(int);

int main() {
  
    int x;
    scanf("%d", &x);

    geraQuadrados(x);
    return 0;
}

void geraQuadrados(int x){

    if(x == 0){
        return; // termina o programa
    }
    
    if (x % 2 == 0){
        geraQuadrados(x - 2);
    }
    printf("%d^2 = %d\n", x, (x * x));
}

