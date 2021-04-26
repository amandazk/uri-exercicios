#include <stdio.h>

void geraSequencia(int, int);

int main() {
  
    int x, y;

    geraSequencia(1, 60);
    return 0;
}

void geraSequencia(int x, int y){

  if (x >= 0 && y >= 0){ // condição para executar
    printf("I=%d J=%d\n", x, y);
    geraSequencia(x + 3, y - 5); // y-5 vai diminuindo até chegar a zero
  }
}