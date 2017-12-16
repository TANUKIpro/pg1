#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
  /* radian[rad] = θ[°]*π / 180.0 */
  float x;

  printf("x[°] : ");
  scanf("%f", &x);

  printf("sin(%.2f) = %.3f\n", x, sin(x*M_PI/180.0));

  system("pause");
  return 0;
}
