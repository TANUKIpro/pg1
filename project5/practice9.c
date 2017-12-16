#include<stdio.h>
#include<stdlib.h>

int main(void)
{
  int a, b;

  printf("Pless type to 2 num : \n");
  scanf("%d",&a);
  scanf("%d",&b);

  if(a == b){
    printf("%d=%d\n",a,b);
  }
  else if(a > b){
    printf("%d > %d\n",a,b);
  }
  else if(a < b){
    printf("%d < %d\n",a,b);
  }
  else{
    printf("Error\n");
  }
  system("pause");
  return 0;
}
