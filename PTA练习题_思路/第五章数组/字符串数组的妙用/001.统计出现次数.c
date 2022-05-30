/*7-6 统计字符出现次数
本题要求编写程序，统计并输出某给定字符在给定字符串中出现的次数。
输入格式：
输入第一行给出一个以回车结束的字符串（少于80个字符）；第二行输入一个字符。
输出格式：
在一行中输出给定字符在给定字符串中出现的次数。
输入样例：
programming is More fun!
m
输出样例：
2
*/
#include<stdio.h>
#include<string.h>
#include<math.h>
int main(void)
{
    int i=0,j,k=0;
    char str[80];
    while((str[i] = getchar())!='\n'){
        i++; //这点用的真的是漂亮，老师讲过的
    }
    char x; //这个是用来查询重复的数字的
    scanf("%c",&x);
    for(j=0;j<i;j++){ //来进行循环，如果存在就加1，最后在数值输出
        if(str[j] == x)
            k++;
    }
    printf("%d",k);
    return 0;
}
