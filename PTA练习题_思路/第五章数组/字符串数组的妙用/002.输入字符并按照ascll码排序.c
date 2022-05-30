/*
本题要求编写程序，将给定字符串去掉重复的字符后，按照字符ASCII码顺序从小到大排序后输出。

输入格式：
输入是一个以回车结束的非空字符串（少于80个字符）。

输出格式：
输出去重排序后的结果字符串。

输入样例：
ad2f3adjfeainzzzv
输出样例：
23adefijnvz
*/
#include<stdio.h>
#include<string.h>
#include<math.h>
//目的：将出现的字符按照ASCELL码的大小进行排序
int main(void)
{
    char i;
    int str[130] ={0}; //将这些元素都赋初始值为0
    while((i=getchar())!='\n')
    {
      str[i]++;
    }
    for(i=0;i<127;i++){
        if(str[i] > 0){
            printf("%c",i);
        }
    }
    return 0;
}
