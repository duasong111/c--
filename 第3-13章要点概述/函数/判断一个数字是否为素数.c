//题目是来判断一个数字是否为闰年
//-先打印1-100的数字
//也就是相当于一个js的那个布尔值一样
//切记不要再函数里输出。函数的功能要保持单一和干净，
//如果满足你的条件就让他在哪个后边输出.
#include<stdio.h>
int prime_bnumber(int x); //我的作用就是判断
int main(void)
{
	int i = 0;
	for (i = 2; i <= 100; i++) {//这是打印了1-100的数字
		//那就开始去找了。
		if (prime_bnumber(i) == 1) {
			printf("%d\n", i);  //如果是素数，就在此输出

		}

	}
	return 0;
}
int prime_bnumber(int x)
{
	int j = 0;
	for (j = 2; j < x; j++) {
		if (x % j == 0) {
			return 0; //这个是满足条件的情况下
		}             //这个说明具有公因子的情况下
	}
	return 1;
}
