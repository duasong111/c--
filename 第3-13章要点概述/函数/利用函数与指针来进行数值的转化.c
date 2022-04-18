#include <stdio.h>
void swap(int* pa, int* pb);
int main(void)
{
	int num1, num2;
	printf("请输入num1,num2的数值：");
	scanf_s("%d %d", &num1, &num2);
	printf("此时a=%d，b=%d\n", num1, num2);
	swap(&num1, &num2);
	printf("转化之后a=%d，b=%d", num1, num2);
	return 0;
}//指针的作用就是为了去取他们的地址符号
void swap(int* pa, int* pb)
{
	int tmp = 0;
	tmp = *pa;
	*pa = *pb;
	*pb = tmp;
}
//实参是可以是常量 变量 表达式函数
// 形参 --形式上的参数


/*

当实参传递给形参的时候
形参其实就是实参的一份临时拷贝
对于形参的修改是不会改变实参的，


函数的调用
 --传值调用
     ：将数值传递给形参，对形参的修改是不会影响实参的
 --传址调用
     ：1，就是把函数外部的创建变量的内存地址传递给函数参数的一种函数盗用的形式
	   2，传参方式就是让函数和函数外部的变量建立起真正的联系，
	     也就是函数内部可以直接操作函数外部的变量

*/
