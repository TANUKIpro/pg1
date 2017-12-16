#include<stdio.h>
#include<stdlib.h>

int main(void)
{
  char s[100];

  s[0] = 'H';
  s[1] = 'e';
  s[2] = 'l';
  s[3] = 'l';
  s[4] = 'o';
  s[5] = '\n';
  s[6] = '\0';  // \0とは、確保したメモリの数よりも少ない配列を記憶するときに、ここで文字列が終わりだということを示すものである。

  printf("%s\n", s);

  system("pause");
  return 0;
}
