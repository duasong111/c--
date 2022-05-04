//这个也是要进行解决的.
//等待着你的修改.
#include <stdio.h>
#define NUMBER 10
int main(void)
{
	int arr[NUMBER]; //限制最多储存的数字是10
	int i,j, num;
	int right = 0;
	//printf("您打算输入多少个数字：");
	scanf_s("%d", &num);
	for (i = 0; i < num; i++) {//输入的数字次数小于num
		scanf_s("%d", &arr[i]); //输入了“num”个数字
	}
	//下一步就是判断一个数字是否为素数
	//int result = fu
	//show:
	for (i = 0; i < num; i++) {
		for (j = 2; j < arr[i]; j++) {
			if (arr[i] % j == 0) {
				//goto right ;
			//	printf("No");    //这个说明不是素数
	//你的目的是进行多次的循环然后再进行输出的
				//goto show;
			}
			else {
				return right = 1;
			}
		}
	}
	 //那这样我也是只能判断一次的，但是我的目的是判断两次啊。
	if (right == 0) {
		printf("No\n");
	}
	else  {
		printf("Yes\n");
	}
	return 0;
}
