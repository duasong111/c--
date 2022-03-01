//这个是可以求出数组的个数，显得更加的高级一些
#include <stdio.h>
int main(void)
{
	int i;
	int a[] = { 1,2,3,4,5 };   /*这个数组里边那个数字是不影响的，无论你输入的是0 还好亦或者你输入的是100，其实是都没有影响的*/
	int na = sizeof(a) / sizeof(a[0]);//来求数组的个数
   //其实也就是李永乐一个简单的字节的除法
	printf("数组a的元素的个数是%d。\n", na);

	for (i = 0; i < na; i++)
		printf("a[%d] = %d\n", i, a[i]);

	return 0;
}
