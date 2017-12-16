#include<stdio.h>
#include<stdlib.h>

int main(void)
{
  int a, b;
  printf("pless type to 1st num : ");
  scanf("%d",&a);

  printf("pless type to 2nd num : ");
  scanf("%d",&b);

/*
  if(a%2 == 0){
    printf("gu-su-\n");
  }else{
    printf("kisu-\n");
  }
*/

  if( a%2 == 0 || b%2 == 0){    //片方が偶数
    if( a%2 == 0 && b%2 == 0){  //両方とも偶数
      printf("%d + %d = %d\n",a,b,a+b);
    }else{
      printf("%d - %d = %d\n",a,b,a-b);
    }
  }else{
    printf("%d / %d = %d\n",a,b,a/b );
  }
  system("pause");
  return 0;
}
