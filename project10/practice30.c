#include<stdio.h>
#include<stdlib.h>
#define MAX 10

int main(){
  double k;
  printf("MAX : 10\n");

  printf("k : ");
  scanf("%lf", &k);

  if(MAX>k)  {printf("small\n");}
  if(MAX==k) {printf("equal\n");}
  if(MAX<k)  {printf("large\n");}

  system("pause");
  return 0;
}
