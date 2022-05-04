//待解决.老师说可以设置一个全局变量或者是来在函数进行输出.
#include <stdio.h>      //
#define NUMBER 10
int  prime_judge(int arr[],int num);
int main(void)
{
	int arr[NUMBER]; //限制最多储存的数字是10
	int i, num;
	printf("您打算输入多少个数字：");
	scanf_s("%d", &num);
	for (i = 0; i < num; i++) {//输入的数字小于num
		scanf_s("%d", &arr[i]); //输入了“num”个数字
	}
	//判断
	prime_judge(arr,num);//函数调用数组的同时，只是数组名
	                //取首位地址
	for (i = 0; i < num; i++) {  //这个是为多个输出
	if (prime_judge(arr,num) == 1) {
			printf("Yes\n");
		}
		else {
			printf("No\n");
		}
	}
	return 0;
}
int  prime_judge(int arr1[],int num) {
	int j = 0;   //我的数值传送不过来啊
	int i;
	for (i = 0; i < num; i++) {
	//难道这个是要我来进行指针和数组的结合,此时的数字还在进行递增.
		for (j = 2; j < arr1[i]; j++) {
			if (arr1[i] % j == 0) {
				return 0; //这个是满足条件的情况下
			}             //这个说明具有公因子的情况下
		}
		return 1;
	}
}
