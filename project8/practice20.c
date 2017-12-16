#include<stdio.h>
#include<stdlib.h>

int sqrXY(int x, int y){
  int equation;
  equation = x*x + y*y;
  return equation;
}

int main(){
  int x, y, ans;
  printf("EQUATION X^2 + Y^2 \nX : ");
  scanf("%d", &x);

  printf("y : ");
  scanf("%d", &y);

  ans = sqrXY(x, y);
  printf("\nans = %d\n", ans);

  return 0;

}
