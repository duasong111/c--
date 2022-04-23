#include<stdio.h>
int main()
{
    int T;
    int t = 0;//时间
    int a = 0, b = 0;//a为乌龟，b为兔子
    int btime = 0;//兔子的时间
    int rest = 0;//兔子是否在休息的状态
    scanf("%d", &T);
    while(t!=T)
    {
        a += 3;//乌龟跑
        if (!rest)//如果兔子不在休息
        {
            b += 9;//兔子跑
            btime++;//兔子时间+
        }
        t++;//时间+
        if (t % 10 == 0 && !rest)
        {
            if (b > a)//如果兔子在乌龟前面
            {
                rest = 1;//休息
                btime += 30;//兔子时间+30
            }
        }
        if (t == btime)//时间赶上兔子时间
        {
            rest = 0;
        }
    }
    if (a > b)
    {
        printf("@_@ %d", a);
    }
    if (a < b)
    {
        printf("^_^ %d", b);
    }
    if (a == b)
    {
        printf("-_- %d", a);
    }
    return 0;
}
