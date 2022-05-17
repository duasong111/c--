#include <stdio.h>
const int  MAX = 50;
int max(int num1, int num2);  //比较大小
int main(void)
{
	int n; //n > 3
	int a[MAX];
	int ans = 0;
	
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf_s("%d", &a[i]); //储存n个数字
	}
	for (int i = 0; i < n; i++){
		for (int j = i + 1; j < n; j++){
			for (int k = j + 1; k < n; k++){ //这个是避免重复
				int len = a[i] + a[j] + a[k];//周长
				int ma = max(a[i], max(a[j], a[k])); //所有最大值
				int rest = len - ma; //剩余绳子的长度和 

				if (ma < rest) {
					ans = max(ans, len); //肯定输出周长啊
				}//ans就是不满足的话输出的是0
			}
				
		}
			
	}
		
	printf("%d\n", ans);
	return 0;
}
int max(int num1, int num2) {
	if (num1 > num2)
		return num1;
	else
		return num2;
}
