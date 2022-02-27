//猜数游戏，未利用数组来显示所猜的数字。
/限制次数输出
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int aim;
	int ans;
	const int max_stage = 10; /*可以用define来定义*/
	int remain = max_stage;
	srand(time(NULL)); //这是一个随机种子
	ans = rand() % 1000;
	printf("请猜一个0---999的数字\n\n");
	do {
		
		printf("还剩下%d次机会。",remain);
		scanf_s("%d", &aim); /*开始进行猜数*/
		remain--; /*每一次循环，猜数减小一次*/
		if (aim > ans)
			printf("猜小一点\n");
		if (aim < ans)
			printf("猜大一点\n");
		
	} while (aim != ans && remain > 0);
	if (aim != ans) /*m末尾判断贼好，两种可能*/
		printf("很遗憾你瞎说了，正确的结果是%d", ans);
	else {
		printf("回答正确\n");  /*总数减去余数，用的次数*/
		printf("你用了%d次猜中。\n", max_stage - remain);
	}

	return 0;
}



