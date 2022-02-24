/*就是多了一些数据类型而已*/
#include <stdio.h>
int main(void)
{
	int num1;
	int num2;
	double ave;
	puts("请输入两个整数。");
	printf("整数x:");
	scanf_s("%d",&num1);
	printf("整数y:");
	scanf_s("%d", &num2); //注意此时不再是%d,改变了。
	//其实还有那个float是个单精度的，但是在这没有用
	ave = num1 + num2 / 2.0;
	printf("这些数的平均数是%.2f", ave); 
	return 0;
}
/*
第二章，介绍的三目运算符分别是 * / % 以及括号的优先级
同时介绍的好友就是数据类型， int是为整数型，double 是为浮点型。
对于double的介绍，首先是设置未知量是double，其次是scanf中也是要进行的将%d换成%f这个其实是精确到小数点的六位数，但是
你可以进行控制如%.2f这是小数点两位，如%3.2f这个还会考虑到你的数据的全部位数，有的将会消失没如果数据数字不够会怎么办，那么就会用空格来代替。








*/
