/待解决.....
#include<stdio.h>
#define NUMBER  1000  //定义猴子的MAX数量
int main()
{
    int n,a[NUMBER], out = 0, num = 0, i;//out为出局的猴子
    int m = 3;  //每隔三个数走一直猴
    scanf_s("%d", &n);
    for (i = 0; i < n; i++)
    {
        a[i] = 0;//将所有猴子赋值为0
    }
    i = 0;
    while (out != n - 1)//????????
    {
        if (a[i] == 0)  //所有的元素都是0的时候
        {
            num++;  
        }
        if (num == m) //刚好等于间隔数字
        {
            num = 0;//num重新计数
            a[i] = 1;  //数字内的全体数字.
            out++;
        }
        i++; //来调查执行了多少次
        if (i == n)//最后一个猴子计数完重新计数
        {
            i = 0;
        }
    }
    for (i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            printf("%d", i + 1);//
        }
    }
    return 0;
}

