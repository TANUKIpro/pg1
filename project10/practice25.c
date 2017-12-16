#include<stdio.h>
#include<stdlib.h>

int main(){
  int counter = 0, n, sum = 0, true = 1;
  printf("n : ");
  scanf("%d", &n);

  while(true){
    counter++;
    sum = sum + counter;
    if(counter == n){break;}
  }
  printf("ans = %d\n", sum);

  system("pause");
  return 0;
}
