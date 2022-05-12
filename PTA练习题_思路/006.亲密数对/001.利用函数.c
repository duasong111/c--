//判断6---10000之间的亲密数对.
#include <stdio.h>
#include <math.h>

int GetFactorSum(int n)
{
    int i, sum = 0;
    for (i = 1;  i <=sqrt(n); i++)  //减小循环的次数
    {
        if (n % i == 0) //此时说明不是素数
        {
            if (i == 1 || i * i == n)
                sum += i; //将所有因数求和
            else
                sum += i + n / i;
        }
    }
    return sum;
}

int main()
{
    int i, num;
    for (i = 2; i <= 100000; i++)
    {
        num = GetFactorSum(i);
        if (GetFactorSum(num) == i && i < num)
            printf("%d->%d\n", i, num);
    }
    return 0;
}
