//这个是switch的集锦
#include <stdio.h>
int main(void)
{
	int num;
	printf("请输入一个整数:");
	scanf_s("%d", &num);

	switch (num % 3) {
	case 0: puts("该数能够被3整除。");   break;
	case 1: puts("该数被整除后的余数是1.");  break;
	case 2: puts("该数被整除后的余数是2.");  break;
	}
	/*
	
	switch(sw){

	case 1 : puts("A");   puts("B"); break;
	case 2 : puts("C");
	case 5 : puts("D"); break;
	case 6 : 
	case 7 : puts("E");  break;
	default : puts("F");  break;

	}
	
	
	*/

	return 0;
}

//总结一下，其实在你用到default或者用不到的时候，你最好都加一下，便于完整
//那个break的目的是进行强制结束， 其实就和那个 return 0 的效果差不多吧啊。
