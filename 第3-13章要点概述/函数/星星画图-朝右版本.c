#include <stdio.h>
void put_stars(int ch,int n);
int main(void)
{
	int i;
	int len;
	printf("请输入行数：");
	scanf_s("%d", &len);
	for (i = 1; i <= len; i++) {
		put_stars(' ',len - i);  //这个单纯的输出空格
		put_stars('*',i); //单纯的输出*
		putchar('\n'); //单纯的换行
	}

	return 0;
}
void put_stars(int ch, int n)
{
	while (n-- > 0) {
		putchar(ch);  //这里指的是啥啊！！
	}
}
/*
//与此同时是对应于用for循环来玩的
for (i = 1; i <= len; i++) {
	for (j = 1; j <= len - i; j++)
		putchar(' ');//也是同样的道理，先进行那个空格的输出
	for (j = 1; j <= i; j++)
		putchar('*'); //其实这行和上个空格是相对应的，为了输出是len个空空
}
*/
