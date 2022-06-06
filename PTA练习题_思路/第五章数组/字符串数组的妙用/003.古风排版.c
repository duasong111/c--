#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define N 2000
int main(void)
{
	char b[N][N],a[N];
	int i,j,k,t=0,h,t1=0;
	scanf("%d",&k);
	getchar(); //防止回车键不影响
	gets(a);
	t=strlen(a);
	h= (k+t - 1) / k; //每一行有的字符

//核心代码
	for(i=h -1;i>=0;i--){
		for(j=0;j<k;j++){
			if(t <=t1) b[j][i]=' ';
			else b[j][i] = a[t1++];
		}
	}
	for(i=0;i<k;i++){
        for(j=0;j<h;j++) printf("%c",b[i][j]);
        printf("\n");
	}
	return 0;
}
