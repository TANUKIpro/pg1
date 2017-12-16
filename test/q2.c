#include<stdio.h>
#include<stdlib.h>

int main(void)
{
  int a, b;

  printf("a, b\n");
  scanf("%d", &a);
  scanf("%d", &b);

  if(a > b){
    printf("a ha b ijo\n");
  }else{
    printf("a ha b yorichisaidesu\n");
  }
  return 0;
}
