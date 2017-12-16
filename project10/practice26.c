#include<stdio.h>
#include<stdlib.h>

int main(){
  //v[m/s] = g[m/s^2]*t[s], y[m] = 1/2*g*t^2
  float G = 9.8, t;

  for(float t = 0.1;t<1.0;t=t+0.1){
    printf("t = %.1f, v = %.3f, y = %.3f\n", t, G*t, ((float)1/2)*G*t*t);
  }
  system("pause");
  return 0;
}
