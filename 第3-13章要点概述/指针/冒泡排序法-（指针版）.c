//利用指针来进行排列的数
#include <stdio.h>
#define NUMBER 3
int a[NUMBER];
void swap(int* n1, int* n2, int* n3);
int main(void)
{
	int num1, num2, num3;
	puts("请输入三个整数");
	printf("整数A"); scanf_s("%d", &num1);
	printf("整数B"); scanf_s("%d", &num2);
	printf("整数C"); scanf_s("%d", &num3);

	swap(&num1, &num2, &num3);

	return 0;
}
void swap(int* n1, int* n2, int* n3)
{
	int a[3] = { *n1, *n2, *n3 };
	int i, j;
	for (i = 0; i < 2; i++) {
		for (j = 2; j > i; j--) {
			if (a[j - 1] > a[j]) {//开始说条件了
				int tmp = a[j - 1];
				a[j - 1] = a[j];
				a[j] = tmp;
			}
		}
	}
	puts("按照升序排列");
	for (i = 0; i < 3; i++)
		printf("%2d号%d:\n", i + 1, a[i]);
}
