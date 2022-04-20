#include <stdio.h>
void add(int *p);//利用指针，因为此时取得是其地址符
int main(void)
{

  int num = 0;
  add(&num); // 调用函数
  printf("%d",num);
   add(&num); // 调用函数
  printf("%d",num);
   add(&num); // 调用函数
  printf("%d",num);
   add(&num); // 调用函数
  printf("%d",num);
  return 0;
}
void add(int *p)
  {
(*p)++;  //考虑到算术运算符的优先级。
}
