//在此运用到了goto语句，其实我感觉这个语句真的nice，只能直接返回你想要的东西
//
//这个是币值的转换,先搞懂这个，然后在利用自己的方法来做新的
#include<stdio.h>
int main() {
    int n;
     scanf_s("%d", &n);  //你所输入的变量钱数
  //  do {  //限制你所输入的位数
    //    scanf_s("%d", &n);  //你所输入的变量钱数
    //} while (n >= 100000000 || n < 0);
    int i = 0;        //for循环
    int k = 1;
    int t = n;    //将变量值赋值给t
    while (t > 0) {
        t /= 10;    
        i++;      //判断位数
        k *= 10; //那看t有多大了
    }
    i++;  //位数多了1
    k = k / 10; // 对应于上边的，循环次数多了一次
    int j;
    int s;   //此时t的值就是n的值
    for (j = 1; n > 0; j++) {
        s = n / k;   //输出最高位的首位数字
        switch (s) {
        case 0:printf("a"); goto show;
        case 1:printf("b"); goto show;
        case 2:printf("c"); goto show;
        case 3:printf("d"); goto show;
        case 4:printf("e"); goto show;
        case 5:printf("f"); goto show;
        case 6:printf("g"); goto show;
        case 7:printf("h"); goto show;
        case 8:printf("i"); goto show;
        case 9:printf("j"); goto show;
        }
    show:
        n = n % k;  //最高位
        k /= 10;    //低一位
        i--;        //低一位的输出

        switch (i) {  //输出最高位的数字
        case 9:if (s != 0) printf("Y"); continue;
        case 8:if (s != 0) printf("Q"); continue; // ？？？？
        case 7:if (s != 0) printf("B"); continue;
        case 6:if (s != 0) printf("S"); continue;
        case 5:if (s != 0) printf("W"); continue;
        case 4:if (s != 0) printf("Q"); continue;
        case 3:if (s != 0) printf("B"); continue;
        case 2:if (s != 0) printf("S"); continue;
        }
    }
}
