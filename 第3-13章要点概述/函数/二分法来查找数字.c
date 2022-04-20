//二分查找的实例
/*
1，字节的计算，里边有一个 sz = sizeof（arr）/ sizeof(arr[0])来计算数组中元素的个数。
2，其实是在引用函数的途中，新增变量是 left，right 这个是为了得到那个mid ，因为你是二分法，你要每次都取其中间数值的。
3，还用到了之前函数引用的惯例，就是说符合的话等于一，不符合的话等于0 这个格式来进行判断，这时候你的函数的类型就应该运用的是int（float）类型。

*/

#include <stdio.h>
int binary_search(int arr[],int k, int sz);
int main(void)
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;  //这个是我要查找的数字
	int sz = sizeof(arr) / sizeof(arr[0]);
	int ret = binary_search(arr, k,sz);//定义函数
	if (ret == -1)
	{
		printf("查找不到该元素！\n");
	}
	else
	{
		printf("找到了，该元素的下标是%d", ret);//就是下标
	}
	return 0;
}
int binary_search(int arr[], int k, int sz)
{
	int left = 0;
	int right = sz - 1;
	while (left <= left) {//来进行缩小范围
		int mid = (left + right) / 2; //这个是中间
		if (arr[mid] < k) {
			left = mid + 1;
		}
		else if (arr[mid] > k) {
			right = mid - 1;
		}
		else {
			return mid;
		}
	}
	return -1;
}
