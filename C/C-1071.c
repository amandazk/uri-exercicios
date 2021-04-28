#include <stdio.h>
#include <stdlib.h>

int somaImpares(int i,  int parada);
int main() {

  int x, y;
  scanf("%d %d", &x, &y);

  if (y < x) {
    int a = y; 
    y = x;
    x = a;
  }

  int soma = somaImpares(x + 1, y);
  printf("%d\n", soma);

  return 0;

}

int somaImpares(int i, int parada) {

  if (i < parada) {
    
    if (i % 2 == 1 || i % 2 == -1){
      return i + somaImpares(i + 1, parada);
    }
    else {
      return somaImpares(i + 1, parada);
    }
  }

  return 0;
}