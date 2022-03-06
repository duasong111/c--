//特别注意是R26-32的关系。
//冒泡排序法，这个是没有涉及指针的
#include <stdio.h>
#define NUMBER 5
int stu[NUMBER];
void arr(int stu[], int T);
int main(void)
{
	extern int stu[]; //声明外部数组。
	int i;
	printf("请编辑五名的分数\n");
	for (i = 0; i < NUMBER; i++) {
		printf("同学%2d:", i + 1);
		scanf_s("%d", &stu[i]);
	}
	//我要干啥啊！！！！  --引入函数
	arr(stu, NUMBER);
	//我还没编辑我的要求呢？？
	puts("按照升序排列。");
	for (i = 0; i < NUMBER; i++)
		printf("%2d号：%d\n", i + 1, stu[i]);
	return 0;
}
void arr(int stu[], int T)
{
	int i, j;  //记得去复盘
	for (i = 0; i < T -1; i++) {
		for (j = T -1; j > i; j--) {  //逆着来看待的啊
			if (stu[j - 1] > stu[j]) { // 这个是为了后位变换
				int tmp = stu[j];
				stu[j] = stu[j - 1];
				stu[j - 1] = tmp;
			}
		}
	}
}
