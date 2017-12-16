#include<stdio.h>
#include<stdlib.h>

int main(void)
{
  int true = 1;
  char key;

  printf("Quit KEY : [Q/q]\n");
  while(true){
    printf("KEY : ");
    scanf("%c%*c", &key);

    if(key == 'q' || key == 'Q'){
      break;
    }else{
      printf("%cが入力されました。\n", key);
    }
    printf("プログラム終了\n");
  }

  system("pause");
  return 0;
}
