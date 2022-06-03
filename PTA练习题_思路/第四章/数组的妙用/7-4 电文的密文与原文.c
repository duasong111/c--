/*有一电文，字符串长度N<=80，已按下列规律译成译码：
A→Z a→z
B→Y b→y
C→X c→x
… …
即第一个字母变成第26个字母，第i个字母变成第(26-i+1)个字母，非字母字符不变。编写一个程序将密码译成原文，并输出原文。

输入格式:
电文的密文。

输出格式:
电文的原文。

输入样例:
A2eTf
输出样例:
Z2vGu*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define N 80
int main(void)
{
    char a[N],g;
    gets(a);
    int i,t;
    i=0;
    t = strlen(a);
    while(a[i]!='\0'){

        if(a[i]>='A'&&a[i]<='Z'){
                g =155 - a[i];
           printf("%c",g);

        }
        else if(a[i]>='a'&&a[i]<='z'){
                g =219 - a[i];
            printf("%c",g); //直接输出
        }
       else {
            printf("%c",a[i]); //直接输出
        }
        i++;
    }
     
   

    return 0;
}
