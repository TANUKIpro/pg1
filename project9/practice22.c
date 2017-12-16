#include<stdio.h>
#include<stdlib.h>

int hikaku(int x, int y){
  if(x < y){
    return 1;
  }else if(x == y){
    return 2;
  }else if(x > y){
    return 3;
  }
}

int main(){
  int x, y, result;
  printf("x, y\nx : ");
  scanf("%d",&x);

  printf("y : ");
  scanf("%d",&y);

  result = hikaku(x, y);
  printf("result = %d\n",result);

  return 0;
}
