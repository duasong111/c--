//n个数字的纸片放在口袋中，可以从口袋中抽取四次的机会，每次记录纸片上的数字然后放回，若总和是m，你赢，否则你输，你尝试了n多次都是输了
//这时候写一个程序来判断自己是否有赢得可能.
//例子：n=3,m = 10 k={1,3,5} 输出yes
//n=3,m=9,k={1,3,5} 输出no
#include <stdio.h> 
const int MAX_N = 50;  //还有这个来定义宏 ，这个难道会更加的借阅时间吧
int main(void)
{
	int n, m, k[MAX_N];
	scanf_s("%d %d", &n, &m);
	for (int i = 0; i < n; i++) {
		scanf_s("%d", &k[i]); //限定输入的数字
	}
 
	bool  f = false;  //布尔 //设置一个旗杆
	for (int a = 0; a < n; a++) {
		for (int b = 0; b < n; b++) {
			for (int c = 0; c < n; c++) {
				for (int d = 0; d < n; d++) { //通过枚举法来进行判断
					if (k[a] + k[b] + k[c] + k[d] == m)
						f = true; //判断
				}
			}
		}
	}
	if (f) puts("Yes");
	else puts("No");
	return 0;
}
