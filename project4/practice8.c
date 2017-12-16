#include<stdio.h>
#include<stdlib.h>

int main(void)
{
  int seisu;
  float jissu;
  char moji;

printf("int = 15, float = 123.43, char = c\n\n");

  printf("Pless enter to '15'  ");
  scanf("%d",&seisu );
  printf("int==>%d\n\n",seisu );

  printf("Pless enter to '123.43'  ");
  scanf("%f",&jissu );
  printf("float==>%6.2f\n\n",jissu );

  printf("Pless enter to 'c'  ");
  scanf("%*c%c",&moji );          //scanf関数のバグ回避 *%*sで一文字飛ばす
  printf("char==>%c\n\n",moji);
  //printf("seisu=%d\njissu1=%f\njissu2=%f", seisu, jissu1, jissu2 );

/*
  scanf("%d", &seisu);
  printf("%d\n",seisu );
*/
  system("pause");
  return 0;
}
