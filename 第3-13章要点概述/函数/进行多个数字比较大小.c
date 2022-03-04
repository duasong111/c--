//其实在三个数字的时候，你是有令的，你另一个新的变量，然后等于其中的一个数字，然后max等于那个最大的，
// 留一个小问题，冒泡排序法怎样的去写。
#include <stdio.h>
int diff(int x1, int x2);
int max(int n1, int n2, int n3, int n4);
int main(void)
{
	int num1, num2, num3, num4;
	printf("整数1：");  scanf_s("%d", &num1);
	printf("整数2：");  scanf_s("%d", &num2);
	printf("整数3：");  scanf_s("%d", &num3);
	printf("整数4：");  scanf_s("%d", &num4);

	printf("则这四个数中最大的数字是%d", max(num1, num2, num3, num4));

	return 0;
}
int diff(int x1, int x2)
{
	return (x1 > x2) ? x1 : x2; //返回那个比较大的数字
}
int max(int n1, int n2, int n3, int n4)
{
	return diff(diff(n1, n2), diff(n3, n4));
	//这个是让其两两进行比较，最大者输出。
}
