#include <stdio.h>
#include <stdlib.h>
#include <time.h> 
#define MAX_STAGE 10
int sleep(unsigned long x);
int main(void)
{ 
	int stage;
	int success = 0;  //计数成功的次数
	clock_t start, end; //计算所用的时间
	srand(time(NULL));
	printf("来记忆一个四位数的数值吧。\n");
	start = clock();  //目的是来计时
	for (stage = 0; stage < MAX_STAGE; stage++) {
		int x;
		int no = rand() % 900000 + 1000; //范围是100-9000
		printf("%d", no);
		fflush(stdout);//引用那个库函数吧
		sleep(500); //刷新
		printf("\r请输输入：");
		fflush(stdout);
		scanf_s("%d", &x);
		if (x != no)
			printf("\a回答错误！\n");
		else {
			printf("\a回答正确！\n");
			success++;  //获得自增一
		}		
	}
	end = clock();
	printf("%d次中答对了%d次\n", MAX_STAGE, success);
	printf("用时%.1f秒。\n", (double)(end - start) / CLOCKS_PER_SEC);
	return 0;
}
int sleep(unsigned long x) {
	clock_t c1 = clock(), c2;
	do {
		if ((c2 = clock()) == (clock_t)-1)
			return 0;
	} while (1000.0 * (c2 - c1) / CLOCKS_PER_SEC < x);
	return 1;
}
