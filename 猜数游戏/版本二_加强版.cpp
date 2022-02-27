//在此利用了数组，来进行对你所输入的数值进行储蓄
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#define MAX_STAGE 10  //利用数组
int main(void)
{
	int i;   //方便在put的输出内容
	int stage;  //进行数值的储存
	int no;     //输入变量
	int ans;  //这个是哪个不确定的数字
	int num[MAX_STAGE];  //数组的个数是10
//	const int max_stage = 10;
//	int remain = max_stage;
	srand(time(NULL));//设置种子
	ans = rand() % 1000;
	printf("请在1---999中猜出一个数：\n\n");
	stage = 0;
	do {
		printf("还剩下%d次机会,是多少呢？", MAX_STAGE - stage);
		scanf_s("%d", &no);
		num[stage++] = no; /*理解成给数组开始起个编号名*/
		if (no > ans)
			printf("猜大了 \n");
		else if (no < ans)
			printf("猜小啦 \n");
	} while (no != ans && stage < MAX_STAGE);

	if (no != ans)
		printf("很遗憾，没有猜对,正确的答案是%d\n", ans);
	else
	{
		printf("猜对了");
		printf("您用了%d次机会。\n", stage);
	}
	puts("\n---输入记录---");
	for (i = 0; i < stage; i++) //贼喜欢这个for循环。
		printf("%2d：%4d %d\n", i + 1, num[i], num[i] - ans);
	return 0;   //说实话这个真的很人性化。
}
