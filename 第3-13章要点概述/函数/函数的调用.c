//其实函数具有函数调用符号的，就是在引用函数名的过程就是在调用函数。


#include <stdio.h>
int max(int n1,int n2);
int main(void)
{
	int num1, num2;
	printf("整数1：");  scanf_s("%d", &num1);
	//printf("整数2：");  scanf_s("%d", &num2);
	printf("这两个数字比较大的是%d", max(num1, 5));
	return 0; // 此时调用的函数，其实内部是实参。
}
int max(int n1, int n2)
{
	 //此时在函数体中就不需要重新定义那个变量了
	  /*if (n1 > n2)
		return n1;
	else
		return n2;
		*/
		  //其实用这个则是更加的简便
	return  (n1 > n2) ? n1 : n2;
}
