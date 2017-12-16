#include<stdio.h>
#include<stdlib.h>

int main(void)
{
  int i, num = 0, counter = 0, wa = 0; //num:Total //counter:何回足したか
  printf("num : ");
  scanf("%d", &num);

  for(i=1;i<=num;i++){
    if(i % 3 == 0){
      wa = wa + i;
      counter++;
    }
  }
  printf("wa = %d\nheikin = %f\n",wa, (float)wa / counter);
  return 0;

}
