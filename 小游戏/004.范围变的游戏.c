#include <stdio.h>
#include <stdlib.h>
#include <time.h> 
#define LEVEL_MIN 3
#define LEVEL_MAX 20
int main(void)
{
	int stage;
	printf("请输入你想输入随机数的位数3-20位");
	scanf_s("%d", &stage);
	srand(time(NULL));
	for(int j = 1;j< stage;j++){
	char no[LEVEL_MAX + 1];
	char x[LEVEL_MAX * 2];

	no[0] = '1' + rand() % 9;
	for (int i = 1; i < stage; i++) {
		no[i] = '1' + rand() % 9;  //都是随机数，也没法限制啊
	}
	no[stage] = '\0';  //没有这个说明则最后一位是没有结束语的

	printf("%s\n", no);
	}
	return 0;
