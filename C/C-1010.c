// Neste problema, deve-se ler o código de uma peça 1, o número de peças 1, 
// o valor unitário de cada peça 1, o código de uma peça 2, o número de peças 2 
// e o valor unitário de cada peça 2. Após, calcule e mostre o valor a ser pago.

// O arquivo de entrada contém duas linhas de dados. Em cada linha haverá 3 valores, 
// respectivamente dois inteiros e um valor com 2 casas decimais.

#include <stdio.h>
 
int main() {

    int cod_1, num_1, cod_2, num_2;
    double valor_1, valor_2, valor_pago;

    scanf("%d %d %lf", &cod_1, &num_1, &valor_1);
    scanf("%d %d %lf", &cod_2, &num_2, &valor_2);

    valor_pago = (num_1 * valor_1) + (num_2 * valor_2);
 
    printf("VALOR A PAGAR: R$ %.2lf\n", valor_pago);
 
    return 0;
}