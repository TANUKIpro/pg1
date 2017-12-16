#include<stdio.h>
#include<stdlib.h>

int main(void)
{
  int a = 10;
  float b = 12.345, c = (float)a/3;

  printf("a=%f\n", a);  //>>> a=-1.#QNANO
  printf("b=%d\n", b);  //>>> b=-5677928
  printf("c=%f\n", c);  //>>> c=3.00000

  printf("\na=%f\n", (double)a);
  printf("b=%d\n", (int)b);
  printf("c=%f\n", c);

  system("pause");
  return 0;

}
