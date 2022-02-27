//这是一个简单的概率游戏
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int retry;
	int ans;
	srand(time(NULL));  //随机数这个没有弄错
	do {
	ans = rand() % 8; // switch 中有几个就弄几个
//printf("随机数是%d", ans);

	switch (ans)  //直接就是它
	{
	case 0: puts("大吉!");  break;
	case 1: puts("中吉!");  break;
	case 2: puts("小吉!");  break;
	case 3: puts("吉!");  break;
	case 4: puts("末吉!");  break;
	case 5: puts("凶 !");  break;
	case 6: puts("考试要挂科!");  break;
	case 7: puts("真TM的牛逼 !");  break;
	} //你要是不用do循环，这就是一次的占卦
	printf("想再来吗？ yes...1/ no...0 \n");
	scanf_s("%d", &retry);
	} while (retry == 1);

	return 0;
}
