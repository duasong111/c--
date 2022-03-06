//其实这里我运用了函数来去定义这个东西了，就是上次学的那个 int top（void），这个函数没有形参的
#include <stdio.h>
int tensu[5];
int top(void);

int main(void)
{
	int i;
	extern int tensu[5];
	int sum = 0;

	printf("please input sore in your classes\n");
	for (i = 0; i < 5; i++) {
		printf("%2dN:", i + 1);
		scanf_s("%d", &tensu[i]);
		sum += tensu[i];
	}
	printf("sum:%5d\n", sum);
	printf("ave:%5.1f\n", (double)sum / 5);
	printf("Top is %d\n", top());
	//printf("%d is the lowest ,he got %d", i, low());


	return 0;
}
int top(void)
{
	extern int tensu[];
	int i;
	int top = tensu[0];
		for (i = 0; i < 5; i++) 
			if (tensu[i] > top)
				top = tensu[i];
			return top;
}
