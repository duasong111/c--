#include <stdio.h>
int main(void)
{
	int num;
	int max, min;
	int i;
	printf("请输入第1个数字:");
	scanf_s("%d", &num);
	max = min = num;
	for (i = 2; i <= 10; i++) {
		printf("请输入第%d个数字:",i);
		scanf_s("%d", &num);
		//将其数值都开始为最大值和最小值
		if (max < num) {
			max = num;
		}
		else {
			max = max;
		}
		if (min > num) {
			min = num;
		}
		else {
			min = min;
		}
	}

	printf("最大的数值是%d,最小的数值是%d", max, min);
	return 0;
}
