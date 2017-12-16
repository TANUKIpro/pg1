#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int seisu;
	float jissu;
	char moji;
	//MEMO::int型は数字を、float型は小数点、cha(charactor)型は文字を宣言する//
	seisu = 15;
  jissu = 123.45;
	moji = 'B';

	printf("seisu = %d\njissu = %.2f\nmoji = %c\n",seisu,jissu,moji);
	//''%.[切り捨てる小数点の数]f''で小数点以下の行数を制御できる//
	system("pause");
	return 0;

}
