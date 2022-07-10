#include <stdio.h>
#include <string.h>
void convto(char* s, int n, int b);
int main(void) {
	char s[80]; //数组
	int  base, old;
	printf("请输入十进制数：");
	scanf("%d", &old);
	printf("请输入转换的进制：");
	scanf("%d", &base);
	convto(s, old, base);
	printf("%s\n", s);
	getchar();
	return 0;
}
void convto(char* s, int n, int b) {
	char bit[] = { "0123456789ABCDEF" };
	int len;
	if (n == 0) {
		strcpy(s, ""); //这个是用空覆盖
		return;
	}
	convto(s, n / b, b);
	len = strlen(s);
	s[len] = bit[n % b];
	s[len + 1] = '\0';
}
