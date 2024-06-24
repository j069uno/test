#include <stdio.h>

int main(void)
{
  int n;

  printf("n = ");
  scanf("%lf", &n); //%dを%lfに変更した

  if( n & 1 == 0 ){
    printf("%d は偶数です\n", n);
  }else{
    printf("%d は奇数です\n", n);
  }
  return 0;
}
