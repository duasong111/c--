#include <stdio.h>
void put_stars(int n);
int main(void)
{
	int i;
	int len;
	printf("请输入行数：");
	scanf_s("%d", &len);
	for (i = 1; i <= len; i++){   //for(i =len；i>0;i--)看一下这个，其实就是在进行于反方向的星星画图。
		put_stars(i);  //这个为啥是i呢，因为是i在逐渐的增加啊。

		putchar('\n'); //每一行输完来进行换行
	}

	return 0;
}
void put_stars(int n)
{
	while (n-- > 0) {
		putchar('*'); //这直接就是一行啊
	}
}

/*
int i, j;
int len;
for (i = 1; i <= len; i++) {
	for (j = 1; j < i; j++)//这个就不能对齐了。
		putchar('*');
	putchar('\n'); //这个其实和上述利用函数体的效果是一样的。
}   */
