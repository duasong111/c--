//这个是幂函数的计算。
#include <stdio.h>
double power(double a, int b); //注意函数名
int main(void)
{
	double a;//双精度
	int b;
	printf("a的值：");  scanf_s("%lf", &a);
	printf("b的值：");  scanf_s("%d", &b);

	printf("%.2f的%d次幂是%.3f", a, b, power(a, b));

	return 0;
}
double power(double x, int n)
{
	int i;  //为了for循环的准备的。
	double temp = 1.0;
	for (i = 1; i <= n; i++)  //在此用for循环是为了多次进行吧
		temp *= x; //temp = temp * x
	return temp;

}
