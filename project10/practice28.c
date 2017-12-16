#include<stdio.h>
#include<stdlib.h>

int true = 0;
int add_look[100];
int array_add(int array[], int add){  //空の要素にそれぞれの評価の人数を格納するための関数
  static int E_size = 0;          //静的メモリの確保
  array[E_size] = add;
  E_size++;
  return E_size;}
/*
void plt_histogram(int N){
  for(int i=0;i<N;i++){
    printf('*');
  }
  printf("\n");
}
*/
int main(){
  int i, j, score, score_sum=0, n, rank_num=0;
  int S=0, A=0, B=0, C=0, F=0, /*add_look[100],*/ add, Eva_array_size;
  char Eva_array[] = {'S', 'A', 'B', 'C', 'F'}; /*char型で全評価の配列要素を定義*/

  /*add_look[100]は100個の要素をもつ配列を宣言している.ローカルで中身不定、グローバルで要素が全て0で初期化されるらしい
    add_look[0]~add_look[99]が利用可能になるということ.*/

  printf("n : ");
  scanf("%d", &n);

  for(i=0;i<n;i++){
    printf("[%d]score : ", i+1);
    scanf("%d", &score);

    score_sum = score_sum + score;
    /*TODO:この時点でaddできるようにしたい*/
    /*S[100~90],A[89~80],B[79~70],C[69~60],F[59~0]*/
      if(score<=100 && 90<=score)     {S++; add = S; array_add(add_look,add);}
      else if(score<=89 && 80<=score) {A++; add = A; array_add(add_look,add);}
      else if(score<=79 && 70<=score) {B++; add = B; array_add(add_look,add);}
      else if(score<=69 && 60<=score) {C++; add = C; array_add(add_look,add);}
      else if(score<=59)              {F++; add = F; array_add(add_look,add);}
      else{printf("Error\n");}
  }
  printf("score_sum = %d    score_average = %.2f\n", score_sum,(float)score_sum/(float)n);
  /*TODO:それぞれの配列に対応する人数の格納*/

  rank_num = sizeof Eva_array;
  //printf("%d\n", rank_num);
  /*
  for(int k=0;k<rank_num;k++){
    add = Eva_array[k]; array_add(add_look,add);
  }
  */
/*
      add = S; array_add(add_look,add);
      add = A; array_add(add_look,add);
      add = B; array_add(add_look,add);
      add = C; array_add(add_look,add);
      add = F; array_add(add_look,add);
*/
printf("S:%d A:%d B:%d C:%d F:%d\n",S,A,B,C,F);
printf("%d,%d,%d,%d,%d\n", add_look[0], add_look[1], add_look[2], add_look[3], add_look[4]);

    Eva_array_size = array_add(add_look, add);
  /*S,A,B,C,Fにはそれぞれの人数の値が保持されているのでそれを配列にする.{S,A,B,C,F}といった具合に
    配列の要素をfor文で[0]から[4](S~F)を取り出して、histgram関数の引数にその値を返せば、その分の「*」が出力されるはず...*/
  for(j=0;j<Eva_array_size-1;j++){
    printf("%c:%d\n",Eva_array[j], add_look[j]);
  }
  system("pause");
  return 0;
}
