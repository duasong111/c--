//extern:这个其实是对于外部文件的引用：此变量/函数是在别处定义的，要在此处引用
//以及-R24我不确定为什么要在数组里添加那个数字，但是不添加就不行，添加的数字是100也行，到底是为什么呢？？？？？
#include <stdio.h>
#define NUMBER 5
int tensu[5]; //此处定义数组的数量是5
int top(void);//也是没有引入参量的函数
int main(void)
{
	extern int tensu[];  //提前申明在外出定义了。
	int i;
	printf("请输%d名同学的分数。\n", NUMBER);
	for (i = 1; i <= NUMBER; i++) {
		printf("%d:", i );
		scanf_s("%d", &tensu[i]);  //进行多个储存
	}
	printf("最高分=%d\n", top()); //调用函数
	return 0;
}
int top(void)
{
	extern int tensu[];//提前申明在外出定义了。
	int i;
	int max = tensu[0]; //为啥这要有一个初始数值呢？
	for (i = 1; i < NUMBER; i++)
		if (tensu[i] > max)
			max = tensu[i];
	return max;
}
