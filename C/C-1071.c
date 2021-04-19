#include <stdio.h>

int somaImpares();

int main() {

    int x, y, i, s=0, t;
    scanf("%d %d", &x, &y);

    somaImpares(x,y);
    return 0;
}

int somaImpares(int x, int y) {

    int t,s;

    if(x > y)
    {
      t = x;
      x = y;
      y = t;
    }
    if(x < y) {
        x++;
    }
    if(x % 2 != 0){
        s += x;
    }
    printf("%d\n",s);
    return 0;
    
}