#include <stdio.h>
#define NUMBER 10
int a[10];
void  prime_judge(int arr[], int num);
int main(void)
{
	int arr[NUMBER]; //限制最多储存的数字是10
	int i, num;
	printf("您打算输入多少个数字：");
	scanf("%d", &num);
	for (i = 0; i < num; i++) {//输入的数字小于num
		scanf("%d", &arr[i]); //输入了“num”个数字
	}
	//判断
	prime_judge(arr, num);//函数调用数组的同时，只是数组名
	for (i = 0; i < num; i++) //其实只是判断是1 还是 0
		if (a[i] != 1)  printf("Yes "); //进行打印
		else  printf("No ");
	return 0;
}
void  prime_judge(int arr1[], int num) {
	int j = 0;   
	int i;
	for (i = 0; i < num; i++)
		for (j = 2; j < arr1[i]; j++)
			if (arr1[i] % j == 0)
				a[i] = 1; //将所有不是素数的来赋值为 1
}
