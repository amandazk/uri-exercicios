#include <stdio.h>
#include <stdlib.h>

int somaImpares();
int main() {

  int x, y;
  scanf("%d %d", &x, &y);
  somaImpares(x , y, 0);
  return 0;
}
int somaImpares(int x, int y,int total) {

  int a, b = 0;

  if(x==y){
    printf("%d\n",total);
    return 0;
  }
  else if(y > x)
  {
    a = x; // não adianta colocar x + 1
    x = y;
    y = a;
  }

  if(y % 2 != 0 || y % 2 == -1) {
    b += y;
    y++;
    somaImpares(x, y, b);
  }
  else if(y % 2 == 0){
    y++;
    somaImpares(x, y,total);
  }
  return total;
}