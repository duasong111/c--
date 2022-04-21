//本题目要求计算存款利息，计算公式为interest=money×(1+rate) year−money，其中interest为存款到期时的利息（税前），money是存款金额，year是存期，rate是年利率。
#include <stdio.h>
#include <math.h>
int main()
{
    float money, year, rate, interest;
    scanf("%f %f %f", &money, &year, &rate);
    interest = money * pow(1 + rate, year) - money;  //这个像不像刚才那个，就是说来计算他的幂函数
    printf("interest = %.2f\n", interest);           //pow（1 + rate ， year）让他乘以本金 最后减去 本金 = 利息
    return 0;
}
