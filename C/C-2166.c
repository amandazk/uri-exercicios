#include <stdio.h>

double raiz(int n)
{
    if(n == 0){
        return 0;
    } else {
        return 1/(2 + raiz(n-1));
    }

}

int main()
{
    int n;
    scanf("%d", &n);

    double r = raiz(n);
    
    printf("%.10lf\n", r + 1.0);

    return 0;
}
