//7-3 输出所有的大写字母
/*顺序输出给定字符串中所出现过的大写英文字母；若无大写英文字母则输出“Not Found”。

输入格式:
输入为一个以回车结束的字符串（少于80个字符）。

输出格式:
按照输入的顺序在一行中输出所出现过的大写英文字母。若无大写英文字母则输出“Not Found”。

输入样例:
FIRSTNAME and SECONDNAME
输出样例:
FIRSTNAMESECONDNAME
输入样例:
firstname
输出样例:
Not Found */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define N 80
int main(void)
{
    char a[N];
    gets(a);
    int i,flag=0;
    i=0;

    while(a[i]!='\0'){

        if(a[i]>='A'&&a[i]<='Z'){
           flag++;
           printf("%c",a[i]);
        }
        i++;
        
    }
    if(flag==0) printf("Not Found");
    return 0;
}
