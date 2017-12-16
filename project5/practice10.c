#include<stdio.h>
#include<stdlib.h>

int main(void)
{
  int point;
  printf("Type to your TEST POINT : ");
  scanf("%d",&point);

  if(100>=point && point>=90){
    printf("%d ==> S\n",point);
  }
  else if(89>=point && point>=80){
    printf("%d ==> A\n",point);
  }
  else if(79>=point && point>=70){
    printf("%d ==> B\n",point);
  }
  else if(69>=point && point>=60){
    printf("%d ==> C\n",point);
  }
  else if(59>=point && point>=0){
    printf("%d ==> F\n",point);
  }else{
    printf("Error. %d is not existence\n",point);
  }
  system("pause");
  return 0;
}
