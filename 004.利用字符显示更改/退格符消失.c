//这是利用退格符号来进行符号的消失
#include <time.h>
#include <stdio.h>

int sleep(unsigned long x)
{
	clock_t c1 = clock(), c2;
	do {
		if ((c2 = clock()) == (clock_t)-1)
			return 0;
	} while (1000.0 * (c2 - c1) / CLOCKS_PER_SEC < x);
	return 1;
}  //这个玩意只能在上边吗？ 这样多尴尬啊！！
int main(void)
{
	int i;
	printf("ABCDEwd");
	for (i = 0; i < 7; i++) {
		sleep(1000);
		printf("\b \b");
		fflush(stdout);
	}
	return 0;
}
//来利用这个来逐渐实现退格，逐渐的消失
//这时候介绍主角 “fflush(stdout)” 这个是进行强制的输出。
