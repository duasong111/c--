//人家为啥都要利用math函数来进行弄一下呢。
#include <stdio.h>
#include <math.h>

int main()
{
    int n, i, shaobing;
    long x;
    scanf("%d", &n);
    //输入的n个数
    while(n--)
    {
        scanf("%ld", &x);
        shaobing = 1;//哨兵的初始化
        for(i = 2; i <= sqrt(x); i++)//只需要计算到他的平方根就可以
        {
            if(x % i == 0)
            {
                shaobing = 0;
                break;
            }
        }
        if(x == 1 || shaobing == 0)
            printf("No\n");
        else
            printf("Yes\n");
    }
    return 0;
}
