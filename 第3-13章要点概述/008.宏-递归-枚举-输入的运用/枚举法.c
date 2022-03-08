//枚举
//注意以下几点
//首先在enum中所定义的可以直接来赋予数值，然后后序排列的则是依次加一
//其次,enum 是可以来定义变量的,R16就是，但是你不能忘记那个枚举的名称
//同样是可以去引用那个函数，switch，指针等一系列常规的操作
#include<stdio.h>
/* 定义枚举类型 */
enum DAY { MON = 1, TUE, WED, THU, FRI, SAT, SUN };

void main()
{
    /* 使用基本数据类型声明变量，然后对变量赋值 */
    int x, y, z;

   
    /* 使用枚举类型声明变量，再对枚举型变量赋值 */
    enum DAY yesterday, today, tomorrow;
      //就是相当于那个大量的赋值宏定义啊
    yesterday = MON;
    today = TUE;
    tomorrow = WED;

    printf("%d %d %d \n", yesterday, today, tomorrow);
}

//这个是加强版本的
/*
#include <stdio.h>
enum animal { Dog, Cat, Monkey, Invaid };
void dog(void)
{
	puts("汪汪!!");
}
void cat(void)
{
	puts("喵喵!!");
}
void monkey(void)
{
	puts("哈哈!!");
}
int main(void)
{
	enum animal selected;
	do {
		switch (selected = select())
		{
		case Dog : dog();  break; //dog()这个其实是指针
		case Cat : cat();  break;
		case Monkey:monkey(); break;
		}
	} while (selected != Invaid);
	return 0;
}
enum animal select(void)
{
	int tmp;
	do {
		printf("0--狗 1--猫 2---猴子 3--结束");
		scanf_s("%d", &tmp);
	} while (tmp < Dog || tmp > Invaid);
	//return tmp;//我这个返回值有什么问题吗？
}
*/


