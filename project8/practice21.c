#include<stdio.h>
#include<stdlib.h>

int max_num(double x, double y, double z){
  if(x > y && x > z){          //x
    return x;
  }else if(y > x && y > z){    //y
    return y;
  }else if(z > x && z > y){    //z
    return z;
  }
}

int main(){
  double x, y, z, ans;
  printf("MAXIMAM VALUE of X, Y, Z\n");
  printf("X : ");
  scanf("%lf", &x);

  printf("Y : ");
  scanf("%lf", &y);

  printf("Z : ");
  scanf("%lf", &z);

  ans = max_num(x, y, z);
  printf("\nans = %f\n", ans);

  return 0;
}
