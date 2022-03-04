//这个函数是采用二次调用，采用了两次，其实你要注意的是第十行的那个格式。
#include <stdio.h>
int diff(int a, int b);
int squ(int x);
int main(void)
{
	int num1, num2;
	printf("整数1：");  scanf_s("%d", &num1);
	printf("整数2：");  scanf_s("%d", &num2);
	printf("则这两个数字的平方差是%d", diff(squ(num1),squ(num2)));

	return 0;
}
int diff(int a, int b)
{
	return (a > b) ? a - b : b - a;
}
int squ(int x)
{
	return x * x;  //这个就是内部所包裹的，
}
