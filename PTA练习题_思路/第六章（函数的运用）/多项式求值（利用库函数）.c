/*
本题要求实现一个函数，计算阶数为n，系数为a[0] ... a[n]的多项式f(x)=∑ 
i=0
n
​
 (a[i]×x 
i
 ) 在x点的值。*/
 #include <math.h>
double f(int n, double a[], double x) {
    int i;
    double sum = 0,T=0;
    for (i = 0; i <= n; i++) {
        T = a[i] * pow(x, i);
        sum = sum + T;
    }
    return sum;
}
