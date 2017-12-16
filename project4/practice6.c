#include<stdio.h>
#include<stdlib.h>

int main(void)
{
  int seisu;
  float jissu1;
  double jissu2;

printf("int = 15, float1 = 123.45, float2 = 54.321\n\n");

  printf("Pless enter to '15'  ");
  scanf("%d",&seisu );
  printf("int()==>%d\n\n",seisu );

  printf("Pless enter to '123.45'  ");
  scanf("%f",&jissu1 );
  printf("float()==>%6.2f\n\n",jissu1 );

  printf("Pless enter to '54.321'  ");
  scanf("%lf",&jissu2 );                //double型の時、scanf関数ではlfを用いる
  printf("double()==>%.3lf\n\n",jissu2);
  //printf("seisu=%d\njissu1=%f\njissu2=%f", seisu, jissu1, jissu2 );

/*
  scanf("%d", &seisu);
  printf("%d\n",seisu );
*/
  system("pause");
  return 0;
}
