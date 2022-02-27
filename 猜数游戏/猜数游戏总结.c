## 做一个关于猜数游戏的总结报告

一，发展的历程

二， 怎样去这样做的

三， 能收获到什么？

------
这个是最简单的进程，我们再次运用了“if  else-if 以及else”

  //修改成能猜无数次的，添加do循环
	if (gus > aim)
		printf("您猜数比较大\a\n");
	else if (gus < aim)
		printf("您猜数比较小\a\n");
	else                         
		printf("恭喜你回答正确"); 
这个就能看出来其实存在很多的不足，你如说，只能循环一次，而且就玩一次
#include <stdio.h>
int main(void)
{
	int gus;
	int aim = 7;
	puts("请输入一个整数0--9：");
	int retry;
	do {
		puts("请输入您猜的数字:");
	scanf_s("%d", &gus);
	  //修改成能猜无数次的，添加do循环
	if (gus > aim)
		printf("您猜数比较大\a\n");
	else if (gus < aim)
		printf("您猜数比较小\a\n");
	else                         
		printf("恭喜你回答正确"); //（或break;）,这个是强制程序结束语句。
	printf("是否想再来一次！<yes...0/no...1>");
	scanf_s("%d", &retry);
	} while (gus != aim && retry != 1);  //这个是不猜对不让走的。
//printf("恭喜你猜对了");//这个岂不是都会输出了
   //那么设置成一个可以征求答案的呢？
	return 0;
}这个是添加了循环之后的，同时还是能征求你的同意，看你是否想继续玩，
但是在此之前却不是这个样子的，你的do循环会一直进行，至到你得到正确的结果为止。

能不能搞个随机数呢？
#include <stdio.h>
#include <time.h>
#include <stdlib.h> 这时候就运用到了随机数的库函数
但是这只是库函数，若想真正的得到随机数，你要做的则是播下一个种子
srand（time（NULL）） 这个是随机数的种子，当你后续当中，设置一个变量
如 int ans； 然后ans = rand（） % 1000；那么你得随机数的取值是在0---1000当中进行随机选择
若你想知道随机数的最大值是多少 很简单：printf（"随机数的最大值的范围是%d",RAND_MAX);

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
但是你还是不满足啊！
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define MAX_STAGE  4

int main(void)
{
	int i;
	int stage; //提醒你剩余的机会
	int no;
	int ans;
	int num[MAX_STAGE];  /*用到了数组*/

	srand(time(NULL));
	ans = rand() % 1000;

	printf("请猜一个0---999的整数.\n\n");

	stage = 0;  /*呼应生面的MAX_STAGE- stage 让你看到剩余的机会*/

	do {
		printf("还剩下%d次机会。", MAX_STAGE - stage);
		scanf_s("%d", &no);  //这是我猜的数字吧
		num[stage++] = no;  // ???

		if (no > ans)
			printf("猜小一点\n");
		else if (no < ans)
			printf("猜大一点\n");
	} while (no != ans && stage < MAX_STAGE);
	
	if (no != ans)
		printf("很遗憾，正确的答案是%d. \n", ans);
	else {
		printf("回答正确。\n");
		printf("您用了%d猜中了, \n", stage);
	}
	puts("\n----输入记录---");
	for (i = 0; i < stage; i++)
		printf(" %2d : %4d %+4d\n", i + 1, num[i], num[i] - ans);


	return 0;
}
这个是最终的版本
其实在此你添加了 #define MAX_STAGE  10；以及在后续的 int num[stage++]这个数组的定义,以及在最后的输出
for (i = 0; i < stage; i++)
		printf(" %2d : %4d %+4d\n", i + 1, num[i], num[i] - ans);
超级喜欢最后一行的运用数组来进行表示。
也是特别有新意，我们分析一下
	num[stage++] = no;  // ???
	这个其实就是在每个数组的前边来定义那个本组数的名称，同时也在自增。
	while (no != ans && stage < MAX_STAGE);
这个其实以上都有，这个是do循环的作用，为了看你到底猜中了没

没了
