
//计算阶乘。.---1其实就是无限制的去调用函数，但是每次调用的数字减少一
//看见那个函数R-5，其实在R-16的时候也是再次的调用它，只不过数值是减少每次调用时减少1
#include <stdio.h>
int factorial(int num2);
int main(void)
{
	int num1;
	printf("请输入一个整数：");
	scanf_s("%d", &num1);
	printf("%d的阶乘是%d", num1, factorial(num1));
}
int factorial(int num2)
{
	if (num2 > 0)   //其实这个是无限的调用函数
		return num2 * factorial(num2 - 1);
	else
		return 1;
}
