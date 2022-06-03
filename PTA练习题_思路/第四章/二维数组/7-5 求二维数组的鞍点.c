/*求二维数组 arr[5][4]中的鞍点。鞍点是指数组arr中arr[i][j]元素值在第i行中最小，且在第j列中最大。试编写一程序找出数组arr中所有的鞍点，并输出其下标值。如果没有鞍点，打印输出Not Found。

输入格式:
输入5行4列的二维数组。

输出格式:
输出该二维数组中所有的鞍点，并输出其对应的行下标和列下表值。如果没找到鞍点，输出Not Found。

输入样例:
20 15 43 75
165 183 88 95
6 0 -5 7
35 8 9 16
10 7 15 33
输出样例:
88 [1,2]
输入样例:
1 2 3 4
5 6 7 8
9 10 11 17
13 14 15 16
20 18 19 12
输出样例:
Not Found*/
#include<stdio.h>
#define N 10
int main()
{
    int a[5][4],i,j,flag=0,max[N],min[N];
    for (i=0;i<5;i++)
        for (j=0;j<4;j++)
        scanf("%d",&a[i][j]);
        min[i]=a[i][0];
    for (i=0;i<5;i++)
    {
        min[i]=a[i][0];
        for (j=0;j<4;j++)
        {
            if (min[i]>=a[i][j])
                min[i]=a[i][j];
        }
    }
    for (j=0;j<4;j++)
    {
        max[j]=a[0][j];
        for (i=0;i<5;i++)
        {
            if(max[j]<=a[i][j])
                max[j]=a[i][j];
        }
    }
     for (i=0;i<5;i++)
     {
         for (j=0;j<4;j++)
             if(min[i]==max[j])
             {
                 printf("%d [%d,%d]",min[i],i,j);
                 flag=1;
             }
     }
     if (flag==0)
         printf("Not Found");
        return 0;
    }
