//关于if语句，其实目的就是进行比较，因为程序并不会简单的按照你的想法进行，你所做的就是多方面考虑。
#include <stdio.h>
int main(void)
{
	/*计算三个或多个数值比较大的*/
	int num1, num2, num3, max;
	printf("整数1是：");  scanf_s("%d", &num1);
	printf("整数2是：");  scanf_s("%d", &num2);
	printf("整数3是：");  scanf_s("%d", &num3);
	max = num1;
	if (num2 > max) max = num2;
	if (num3 > max) max = num3;  /*谁的数值大谁就优先最后输出*/
	printf("这三个数最大的数是%d", max);
	
 //扩展提醒(别忘记if的老搭档是else)：
/*  
   如果是进行两个数的比较还可以采用
   max = ( num1 > num2) ? num1 : num2; 这个是让其进行选择
   以及
   printf("两个数的差是%d\n",(n1 > n2) ? n1 - n2: n2 - n1);
   逻辑（或/与）运算符 ||或     && 与
*/	
	return 0;
}
