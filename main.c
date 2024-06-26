#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int myRoot(double x) // x の平方根を返す関数。x >= 0 ではないときエラー表示を行い exit(1) とする。 
{
  if( !(x > 0) ){ //エラー処理をした
    printf("エラー：0以上の値ではありません in myRoot()\n");　      
    exit(1);
  }
  return sqrt(x);
}

int main(void)
{
  int i=0;
  double *x = (double *)malloc(sizeof(double) * 101);

  while( i <= 100 ){
    x[i] = myRoot((double)i);
    i++;
  }

  //これ以降は確認用コードなので、修正しないこと
  printf("x[0]=%f\n", x[0]);
  printf("x[1]=%f\n", x[1]);
  printf("x[2]=%f\n", x[2]);
  printf("x[3]=%f\n", x[3]);
  printf("x[4]=%f\n", x[4]);
  printf("x[99]=%f\n", x[99]);
  printf("x[100]=%f\n", x[100]);
  //myRoot()の動作確認
  printf("myRoot(0.0 / 0.0)=%f\n", myRoot(0.0 / 0.0));
      
  free(x);
  return 0;
}
