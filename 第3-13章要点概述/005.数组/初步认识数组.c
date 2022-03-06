// 初步的定义数组
#include <stdio.h>
int main(void)
{
	int i;
	int v[5];
	
	for (i = 0; i <= 5; i++)
		v[i] = i + 1;// 是不是逻辑存在问题啊！！！
	for (i = 1; i <= 5; i++)
		printf("v[%d] = %d\n", i, v[i]);

	return 0;
}
