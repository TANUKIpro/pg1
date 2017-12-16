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
