//Com base na tabela abaixo, escreva um programa que leia o código de um item e a quantidade deste item. A seguir, calcule e mostre o valor da conta a pagar.
//
//      Código      Especificação               Preço
//      1               Cachorro - quente       4,00
//      2               X-salada                     4,50
//      3               X-bacon                      5,00
//      4               Torrada simples          2,00
//      5               Refrigerante                1,50

#include <stdio.h>
 
int main() {
 
    int cod, qtd;
    double valor;
    scanf("%d %d", &cod, &qtd);

    if (cod == 1){
        valor = qtd * 4.0;
    } else if (cod == 2){
        valor = qtd * 4.5;
    } else if (cod == 3){
        valor = qtd * 5.0;
    } else if(cod == 4){
        valor = qtd * 2.0;
    } else {
        valor = qtd * 1.5;
    }

    printf("Total: R$ %.2lf\n", valor);
     
    return 0;
}