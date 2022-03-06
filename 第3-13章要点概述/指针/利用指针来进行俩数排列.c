//来进行对数值的排列
#include<stdio.h>
void sort2(int* n1, int* n2);
void swap(int* num1, int* num2);
int main(void)
{
	int na, nb,nc;
	puts("请输入两个整数");
	printf("整数A："); scanf_s("%d", &na);
	printf("整数B："); scanf_s("%d", &nb);
	sort2(&na, &nb);  //此时我的去地址符好有什么问题吗

	puts("这两个数字按照排列进行的");
	printf("整数A是%d\n", na);
	printf("整数B是%d\n", nb);
	return 0;
}
int sort2(int* n1, int* n2)
{
	
	if (*px > * py)
		swap(px, py); 
}
void swap(int* num1, int* num2)
{
	int tmp = *num1;
	*num1 = *num2;
	*num2 = tmp;
}
//刚才就让爷睡着了也没有搞出来，现在清醒了给你搞出来了，
//哈哈哈哈哈哈哈哈哈哈
