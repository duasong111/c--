//说明：其实在引入第一个函数的时候，是一件特别的有趣的事情，他就是直接的引入函数名称，但是并没有赋予任何的参数（形参和实参都没），然后在第一个函数中在进行定义，其实专业很好。
//说明：第二个函数实现倒置的原因就是,求余，然后输出，到最后没有来，然后你的这个数字就能显示出来了。
#include <stdio.h>
int scan_print(void);
int change(int num); //这俩货有啥不同呢？
int main(void)
{
	int num1 = scan_print();//这个是直接的引用
	printf("这个数字的倒过来是%d", change(num1));

	return 0;
}
int scan_print(void)
{
	int num2;
	printf("请输入一个整数：");
	do {
		scanf_s("%d",&num2);
		if (num2 <= 0)
			printf("这个数字小于0，不符合标准哦");
	} while (num2 < 0); //这是让其继续的循环
	return num2;
}
int change(int num)
{
	int tmp = 0;// 刚才的错误其实在这呢？？？
	do {
		tmp = 10 * tmp + num % 10; //这个是为了求尾数
		num /= 10;
	} while (num > 0);
	return tmp;
