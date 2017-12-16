#include<stdio.h>
#include<stdlib.h>

int main(void)
{
  int i, wa = 0, seki = 1;
  for(i=1;i<=10;i++){
    //printf("callback\n");
    wa = wa + i;
    seki = seki * i;

    printf("%d\n%d\n", wa, seki);
    printf("-------------\n");
  }
  printf("wa = %d\nseki = %d\nWA no Heikin = %.1f\n", wa, seki, (float)wa / 10);

  system("pause");
  return 0;
}
