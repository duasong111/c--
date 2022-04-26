#include <stdio.h>
int main(void)
{     //alone -- money
   char c1, c2, c3, c4, c5;
 int retry;
 do {
    printf("请输入五个字符:");
 scanf("%c%c%c%c%c", &c1, &c2, &c3, &c4, &c5);
 if( c1 == 'a' ){
 c1 = c1 + 12;   // 请输入 a   + 12 --m
 c2 = c2 + 3;    // 请输入 l   +3    --o
 c3 = c3 - 1;    // 请输入 o   -1    --n
 c4 = c4 - 9;    // 请输入 n   -9    --e
 c5 = c5 + 20;   // 请输入 e   +20   --y
 printf("加密后：%c%c%c%c%c\n", c1, c2, c3, c4, c5);
 }
 else if (c1 == 'b') {
  c1 = c1 + 7;      // 请输入 b
  c2 = c2 + 3;      // 请输入 e
  c3 = c3 + 1;     // 请输入 g
  c4 = c4 - 1;      // 请输入 i
  c5 = c5 - 6;     // 请输入 n
  printf("加密后：%c%c%c%c%c\n", c1, c2, c3, c4, c5);
 }
 else if (c1 = 'c') {
  c1 = c1 + 4;   // 请输入 c
  c2 = c2 + 10;    // 请输入 h
  c3 = c3 + 4;    // 请输入 a
  c4 = c4  + 0;    // 请输入 r
  c5 = c5 +  7;   // 请输入 m
  printf("加密后：%c%c%c%c%c\n", c1, c2, c3, c4, c5);
 }
 else if(c1 = 'd'){
  c1 = c1 + 12;   // 请输入 d
  c2 = c2 + 3;    // 请输入 a
  c3 = c3 - 1;    // 请输入 n
  c4 = c4 - 9;    // 请输入 c
  c5 = c5 + 20;   // 请输入 e
  printf("加密后：%c%c%c%c%c\n", c1, c2, c3, c4, c5);
 }
 else if(c1 = 'e'){
  c1 = c1 + 14;    // 请输入 e
  c2 = c2 + 1;     // 请输入 v
  c3 = c3  + 0;      // 请输入 e
  c4 = c4  - 21;      // 请输入 r
  c5 = c5 + 5;   // 请输入 y
  printf("加密后：%c%c%c%c%c\n", c1, c2, c3, c4, c5);
 }
 else if(c1 = 'f'){
  c1 = c1 + 1;   // 请输入 f
  c2 = c2 + 21;     // 请输入 a
  c3 = c3 - 20;     // 请输入 u
  c4 = c4 - 13;      // 请输入 l
  c5 = c5 + 0;   // 请输入 t
  printf("加密后：%c%c%c%c%c\n", c1, c2, c3, c4, c5);
 }
 else {
        printf("有内鬼！请终止交易！！！");
 }   //但是不执行，也不知道到底是为了啥？？
 printf("想再玩一次吗？<Yes....1/ No....0>:");
 scanf("%d",&retry);
   getchar();                                   //最重要的就是这一行，当你没有他的时候就会出现报错的。
 }while(retry == 1);
 return 0;
}
