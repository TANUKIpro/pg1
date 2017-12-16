#include<stdio.h>
#include<stdlib.h>

int main(void)
{
  int seisu = 15;
  float jissu = 123.430;
  char moji = 'B';
/*
  seisu = 15;
  jissu = 123.430;
	moji = 'B';
*/
  printf("seisu = %+8.4d\n", seisu);
  printf("jissu = %+10.3f\n", jissu);  //小数点も行数に入るぞ！！
  printf("moji = %5.c\n", moji);

  system("pause");
  return 0;

}
