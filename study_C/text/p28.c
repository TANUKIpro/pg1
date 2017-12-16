#include<stdio.h>
#include<stdlib.h>

int main()
{
  int a = 1;
  printf("The first is %d\n", a);

  a++;
  printf("Next is %d\n", a);      //「++」は変数の値を1増やす

  a--;
  printf("and Next is %d\n", a);  //「--」は変数の値を1減らす

  system("pause");
  return 0;
}
