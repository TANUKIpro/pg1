#include<stdio.h>
#include<stdlib.h>

int main(void)
{
  int seisu;
  float jissu;
  char moji;

  printf(" seisu, jissu, moji\n");

  scanf("%d", &seisu);
  scanf("%f", &jissu);
  scanf("%*c%c", &moji);
  printf("\n");

  printf(" seisu = %d\n jissu = %.3f\n moji = %c\n",seisu, jissu, moji);

  return 0;
}
////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

int main(void)
{
  int a, b;

  printf("a, b\n");
  scanf("%d", &a);
  scanf("%d", &b);

  if(a > b){
    printf("a ha b ijo\n");
  }else{
    printf("a ha b yorichisaidesu\n");
  }
  return 0;
}
/////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

int main(void)
{
  int i, wa = 0, seki = 1;
  for(i=1;i<=10;i++){
    wa = wa + i;
    seki = seki * i;
  }

  printf("wa = %d\nseki = %d\nheikin = %f\n",wa, seki, (float)wa / i);
  return 0;
}
