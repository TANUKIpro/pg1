#include<stdio.h>
#include<stdlib.h>

int main(void)
{
  int wa = 0, seki = 1, counter = 0, true = 1;

  while(true){
    counter++;
    wa = wa + counter;
    seki = seki * counter;
    if(counter >= 10){
      break;
    }else{
      continue;
    }
  }
  printf("WA = %8d\nSEKI = %8d\nWA no Heikin = %.3f", wa, seki, (float)wa / counter);
  return 0;
}
