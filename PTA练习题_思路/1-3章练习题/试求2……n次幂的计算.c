#include <stdio.h>
#include <math.h>
int main(void)
{
    float num;
    scanf("%f", &num);
    pow(2, num);  //库函数 <math.h> 用来计算幂。
    printf("2^%.f = %.f", num, pow(2, num));
    return 0;
}
