#include <stdio.h>
#include <math.h>
 
int main() {

    double a, b, c, raiz_1, raiz_2, delta;

    scanf("%lf %lf %lf", &a, &b, &c);

    delta = pow(b, 2) - (4 * a * c);
    if (a == 0 || delta < 0){
        printf("Impossivel calcular\n");
    } else {
        raiz_1 = (-b + sqrt(delta))/ (2.0 * a);
        raiz_2 = (-b - sqrt(delta))/ (2.0 * a);
        printf("R1 = %.5lf\n", raiz_1);
        printf("R2 = %.5lf\n", raiz_2);
    }
 
    return 0;
}