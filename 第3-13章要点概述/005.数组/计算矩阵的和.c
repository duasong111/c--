#include <stdio.h>
int main(void) 
{
	int m,n;
	int i, j;
	int arr[10][7];  //十行七列的二维数组
	int sum[10]; //初始值为0
	scanf("%d%d", &m, &n);
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			scanf("%d", &arr[i][j]);  //输入
			//sum[i] += arr[i][j];
		}
	}
	for (i = 0; i < m; i++) {
		sum[i] = 0;
		for (j = 0; j < n; j++) {
			sum[i] += arr[i][j];
		}
	}
	for (i = 0; i < m; i++) {
			printf("%d", sum[i]);
			putchar('\n');
	}
	return 0;
}
