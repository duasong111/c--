// 我感觉这里百年要删除的东西真的是太多了，就比如所那个do循环，其实你就可以删除一部分的。
#include <stdio.h>
#define NUMBER 80
int main(void)
{
	int i, j;
	int num;
	int tensu[NUMBER];
	int bunpu[11] = { 0 };
	printf("请输入学生的人数：");
	do {
		scanf_s("%d", &num);
		if (num < 1 || num > 100)
			printf("请重新输入\n");
	} while (num < 1 || num > 100);

	printf("请输入%d人分数.\n", num);
	for (i = 0; i < num; i++) {
		printf("%2d号：", i + 1);
		do {
			scanf_s("%d", &tensu[i]);
			if (tensu[i] < 0 || tensu[i] > 100)
				printf("请输入1--100的数字");
		} while (tensu[i] < 0 || tensu[i] > 100);
		bunpu[tensu[i] / 10]++;
	}
	puts("\n ---分布图--");
	printf("      100:");
	for (j = 0; j < bunpu[10]; j++)
		putchar('*');
	putchar('\n');

	for (i = 9; i >= 0; i--) {
		printf("%3d  - %3d:", i * 10, i * 10 + 9);
		for (i = 0; j < bunpu[i]; j++)
			putchar('*');
		putchar('\n');
	}
	return 0;
}
