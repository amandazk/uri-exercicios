#include <stdio.h>
#include <stdlib.h>

int somaImpares();
int main() {

  int x, y;
  scanf("%d %d", &x, &y);
  somaImpares(x,y,0);
  return 0;
}
int somaImpares(int x, int y,int total) {

  int a, b = 0;
  // printf("\nx: %d",x);
  // printf("\ny: %d",y);
  // printf("\ntotal: %d",total);

  if(x==y){
    printf("\ntotal: %d",total);
    return 0;
  }
  
  else if(y > x)
  {
    a = x;
    x = y;
    y = a;
  }
  if(y % 2 != 0 || y % 2 == -1) {
    b += y;
    // printf("\ntotal: %d",total);
    y++;
    somaImpares(x, y,b);
  }
  else if(y % 2 == 0){
    y++;
    somaImpares(x, y,total);
  }
  // printf("\ntotal: %d",total);
  return total;
}