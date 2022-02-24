//题目要求的是让前者是后者的百分数表示。
#include <stdio.h>
int main(void)
{
	int num1, num2;
	puts("请输入两个整数。");
	printf("整数x:");
	scanf_s("%d",&num1);
	printf("整数y:");
	scanf_s("%d", &num2);
	printf("整数x是整数y的%d%%", 100 * num1 / num2);
	 //  (num1 / num2) * 100
	return 0;
}
//其实我起初的思路是第十二行的。但是为什么不执行，原因在与int型是整数型，这里牵涉到了后边的那个数的类型
// 但是开始乘以100，这就不怕那个分数或者是小数了， 最后无论如何都是整数，这样就有效的分数表示。
