#include <stdio.h>

/*
変数；データにつけるラベル

データ型
Int(整数) %d
float(実数) %f
char(1文字) %c

*/

int main(void) {
  int x = 10;
  float y = 5.2;
  char c = 'A';

  printf("x = %d, y = %f, c = %c\n", x, y, c);
  // 出力する文字列 = それぞれのデータ型を示す記号, 変数
  return 0;
}

int main(void) {
  printf("hello world!");
  return 0;
}
