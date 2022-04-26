#include <stdio.h>
void bullbe_sort(int arr[],int sz);
int main(void)
{
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	
	int sz = sizeof(arr) / sizeof(arr[0]);
	bullbe_sort(arr,sz);//利用数组来进行排序
	for (int i = 0; i < sz; i++) {
		printf("%d ", arr[i]);
	}
	return 0;
}
void bullbe_sort(int arr[],int sz) {
	int i = 0;
	//int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz - 1; i++) {//这是趟数
		int flag = 1; //这是假设这一趟是进行排序的
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++) {
			if (arr[j] > arr[j + 1]) {  //刚才是这出问题
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 0; //本次排序其实不完全有序

			}
		}
		if (flag == 1) {
			break;

		}

	}
}
