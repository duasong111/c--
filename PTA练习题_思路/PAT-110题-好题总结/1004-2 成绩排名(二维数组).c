//其实二维数组你运用的不是特别的熟练的
//看那个第13行，就是在二维数组的输入的过程中，没有必要将其全部给打下来，就是输入每一个数组名称就行了。
//多多的学习，多多的看人家写的
//多想几种方法

#include <stdio.h>
int main(void)
{
    int n;
   int i,j=0,k=0;
    scanf("%d",&n);
    int sore[n];
      char a[n][20],b[n][100];
      for(i=0;i<n;i++){
        scanf("%s %s %d",a[i],b[i],&sore[i]);
        if(sore[j] < sore[i])
                    j=i;
        if(sore[k]> sore[i])
                        k=i;
        }
        printf("%s %s\n",a[j],b[j]);
	    printf("%s %s",a[k],b[k]);
    return 0;
}
