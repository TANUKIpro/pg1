#include<stdio.h>
#include<stdlib.h>

int main(){
  // x[cm] = y[g] / k (k = 40[g/cm])
  printf("x[cm] = y[g] / k (k = 40[g/cm])\n");
  int x, y, k = 40;

  printf("y[g] : ");
  scanf("%d", &y);

  printf("x = %d, y = %d\n", y/k, y);

  system("pause");
  return 0;
}
