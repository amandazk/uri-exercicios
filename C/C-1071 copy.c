#include <stdio.h>

int main() {
    int x, y, z, i;
    int a = 0;
    
    scanf("%d %d", &x, &y);
    if(x < y)
    {
        z = x;
        x = y;
        y = z;
    }


    for(i = y+1; i < x; i++)
    {
        if(i % 2 != 0)
            a += i;
    }
    printf("%d\n", a);
    return 0;
}