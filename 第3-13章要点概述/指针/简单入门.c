//其实指针也没有想象的那么难而已，就是一个单纯的知道地址符号，然后呢就是指针被赋予了相同的值。
//其实我感觉只要函数学的好，指针一点都不怕。
#include <stdio.h>
void swap(int* px, int* py);
int main(void)
{
	int na, nb;
	puts("请输入两个整数。");
	printf("整数A：");  scanf_s("%d", &na);
	printf("整数B：");  scanf_s("%d", &nb);
	swap(&na, &nb);
	puts("互换了两个数值。");
	printf("整数A是%d。\n", na);
	printf("整数B是%d。\n", nb);
	return 0;
}
void swap(int* px, int* py)
{
	int tmp = *px;
	*px = *py;
	*py = tmp;
}
