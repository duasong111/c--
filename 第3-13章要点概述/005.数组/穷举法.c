#include <stdio.h>
int main(void)
{  //穷举法
	int sum;
	float v;
	//找到了目标数字弄出来
	for (int i = 9; i < 10; i++) {
		for (int j = 5; j < 10; j++) {
			for (int k = 8; k < 10; k++) {
				for (int l = 5; l < 10; l++) {
					for (int m = 9; m < 10; m++) {
						if (i == m && j == l&&j==5) { //利用j,k来排除不符合值
						//	printf("%d%d%d%d%d\n", i, j, k, l, m);
							sum = i * 10000 + j * 1000 + k * 100 + l * 10 + m * 1;
							v = (sum - 95859) / 2.0;
							printf("该车的速度为%.2fKM/h 新的对称数为%d\n", v, sum);
							break;
						}
					}
				}
			}
		}
	}
	//printf("该车的速度为%.2fKM/h 新的对称数为%d",v,sum);
	return 0;
//但是这个效率不高，因为竞赛的时候会对时间有着严格的控制，
