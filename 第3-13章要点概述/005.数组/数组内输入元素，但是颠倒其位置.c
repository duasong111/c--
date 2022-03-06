//也是进行多个数组输入，但是顺序颠倒了。
//其实这个是挺好的，去作用的是在第二个的for循环
//选择中间量，谈话在定义一个新的变量，然后采用赋值符来进行大旋转，最后就是能得到顺序不同的那个数字了。
#include <stdio.h>
int main(void)
{
	int i;
	int v[7];
	for (i = 0; i < 7; i++) {
		printf("数组%d：", i);
		scanf_s("%d", &v[i]);//进行多个数字的储存
	}
	for (i = 0; i < 3; i++) {
		int tmp = v[i];//拦腰斩断，然后来进行逆运算。
		v[i] = v[6 - i];
		v[6 - i] = tmp;
	}
	printf("您好！请看，您输入的数字倒了 \n");
	for (i = 0; i < 7; i++)
		printf("v[%d]   %d\n", i, v[i]);


	return 0;
}
