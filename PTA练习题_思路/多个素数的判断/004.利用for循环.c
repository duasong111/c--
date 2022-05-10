#include <stdio.h>
#include <math.h> 
int prime(int num);
int main(void)
{
	int num,limit;
	printf("请输入多个整数：");
	scanf_s("%d", &limit);
	for(int i=1;i<= limit;i++){
	scanf_s("%d",&num); //我这个样子不是来进行逐步调用判断的吗
	if (prime(num)) { //if（1）是可以执行的
		printf("Yes");
		putchar(' ');
	}
	else {
		printf("No");
		putchar(' ');
	}
  }
	return 0;
}
int prime(int num) //判断是否是素数
{
	int flag = 1, i;
	for (i = 2; i < sqrt(num); i++) {//这个减少循环的次数
		if (num % i == 0) {
			flag = 0;
			break;
		}
		return (flag);
	}
}
