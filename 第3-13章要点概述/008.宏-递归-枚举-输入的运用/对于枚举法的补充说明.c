//枚举法的补充说明
//观察R-4的末尾，是不是有一个day。然后我在main函数中我就没有在声明，这就是他的特点，
//以及这个是可以进行那个遍历的，但是我执行的却不对，其实你在R-5中进行声明，然后这个不是一个数值，只能是一个变量
//你讲那个day看成变量i，然后将那个数字numN来看做正常在for中的那些数字，理论上时可以实现那个遍历的。
#include <stdio.h>
enum week { num1 = 1, num2, num3, num4, num5 }day;
int main(void)
{  /*                //可以在此去赋予变量
	enum week day;//其实就是相当于一个指针
	day = num2;
	printf("%d", day);  */
	for (day = num1; day <= num5; day++) {
		printf("枚举的遍历%d", day);
	}

	return 0;
}
