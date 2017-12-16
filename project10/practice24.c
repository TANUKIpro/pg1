#include<stdio.h>
#include<stdlib.h>

int main(){
  printf("i, j is int type. x, y is float type\n");

  int i, j;
  float x, y;

  printf("i : ");
  scanf("%d", &i);

  printf("j : ");
  scanf("%d", &j);

  printf("x : ");
  scanf("%f", &x);

  printf("y : ");
  scanf("%f", &y);

  printf("\n");
  printf("i + j = %d\ni - j = %d\n", i+j, i-j);
  printf("x * y = %.2f\nx / y = %.2f\n", x*y, x/y);

  system("pause");
  return 0;
}
