#include<stdio.h>
#include<stdlib.h>

int main(){
  int i, score, score_sum=0, n;
  int S=0, A=0, B=0, C=0, F=0;
  printf("n : ");
  scanf("%d", &n);

  for(i=0;i<n;i++){
    printf("[%d]score : ", i+1);
    scanf("%d", &score);

    score_sum = score_sum + score;
    //S[100~90],A[89~80],B[79~70],C[69~60],F[59~0]

      if(score<=100 && 90<=score){S++;}
      else if(score<=89 && 80<=score){A++;}
      else if(score<=79 && 70<=score){B++;}
      else if(score<=69 && 60<=score){C++;}
      else if(score<=59){F++;}
      else{printf("Error\n");}
  }
  printf("score_sum = %d    score_average = %.2f\n", score_sum,(float)score_sum/(float)n);
  printf("S:%d A:%d B:%d C:%d F:%d\n",S,A,B,C,F);

  system("pause");
  return 0;
}
