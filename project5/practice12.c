#include<stdio.h>
#include<stdlib.h>

int main(void)
{
  int a, b;
  printf("pless type to 1st num : ");
  scanf("%d",&a);

  printf("pless type to 2nd num : ");
  scanf("%d",&b);

  if(a == 1){
    printf(" A\n");
    if(b<=10){
      printf(" C\n");
    }
  }
  else if(b >= 10){
    printf(" D\n");
  }else{
    printf(" B\n");
  }
  system("pause");
  return 0;
}
