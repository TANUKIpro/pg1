#include<stdio.h>
#include<stdlib.h>

int main(void)
{
  int a = 10, b = 20;
  printf(" Callback to TRUE=1, FALSE=0\n");

  printf("  a=%d b=%d\n", a, b);
  printf("  a<b >>> %d\n", a<b);
  printf("  a>b >>> %d\n", a>b);
  printf("  a==b >>> %d\n", a==b);
  printf("  a=b >>> %d\n", a=b);
  printf("  a=%d, b=%d\n", a, b);

  system('pause');
  return 0;
}
