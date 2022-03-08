//版本一
//出现的问题
//明白'0' 和 0 是不一样的,这俩差距是一点半点的，差距大了 ----'0' 的值是48
//'0'----'9'的特点，其实他们还是很有意思的，他们虽然和0差距很远，但是呢他们每个字符之间的差值是“1”，这点还是很好的
//
//计算字符出现的次数
#include <stdio.h>
int main(void)
{
	int i, ch;
	int cnt[10] = { 0 }; //进行数组中的数字进行初始化为0
	while ((ch = getchar()) != EOF) {
		switch (ch) {
		case '0':cnt[0]++; break;  //其实左边的那个形式是可以改变的
		case '1':cnt[1]++; break;
		case '2':cnt[2]++; break;
		case '3':cnt[3]++; break;
		case '4':cnt[4]++; break;
		case '5':cnt[5]++; break;
		case '6':cnt[6]++; break;
		case '7':cnt[7]++; break;
		case '8':cnt[8]++; break;
		case '9':cnt[9]++; break;
		}
	}
	puts("数字字符出现的次数");
	for (i = 0; i < 10; i++)
		printf("%d : %d\n", i, cnt[i]);

	return 0;
}

//版本二
/*//同样来检验那个数字字符的多少的
#include <stdio.h>
int main(void)
{
	int i, ch;
	int arr[10] = { 0 };
	while ((ch = getchar()) != EOF) {
		if (ch >= '0' && ch <= '9')
			arr[ch - '0']++; //这个就是相当这个数组对应的位置进行储存
	}   //字符和字母是不一样的
	puts("数字字符出现的次数");
	for (i = 0; i < 10; i++)
		printf("%d : %d\n", i, arr[i]);

	
	return 0;
}*/
