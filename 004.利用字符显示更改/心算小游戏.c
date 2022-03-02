#include <time.h>
#include <stdlib.h>
#include <stdio.h>
int main(void)
{
	int a, b, c;
	int x; //这个是你所输入的数值
	clock_t start, end;
	double req_time;
	srand(time(NULL)); //在此运用了随机数的种子

	a = 100 + rand() % 900;
	b = 100 + rand() % 900;
	c = 100 + rand() % 900;  //来求随机变量的数

	printf("%d + %d + %d 等于多少？", a, b, c);
	start = clock();
	while (1) {
		scanf_s("%d", &x);
		if (x = a + b + c)
			break;
		printf("输入错误!! \n请重新输入:");
	}   //这个是无限循环，只有输入正确的结果才能跳出
	end = clock();
	req_time = (double)(end - start) / CLOCKS_PER_SEC;
	printf("用时%.1f秒。\n", req_time);

	//下面的就是来进行对你的速度进行点评了
	if (req_time > 30.0)
		printf("花的时间太长了。\n");
	else if (req_time > 17.0)
		printf("还行吧。\n");
	else
		printf("真快啊。\n");
	return 0;

}
