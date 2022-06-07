#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void enter_string(char str[80]);
void delect_string(char str[],char ch);
void print_string(char str[]);
int main()
{
    char c;
    char str[80];
    enter_string(str);
    printf("请输入待删除的字符：\n");
    scanf("%c",&c);
    delect_string(str,c);
    print_string(str);
   
    return 0;
}
void enter_string(char str[80]){
printf("请输入字符串：\n");
gets(str);
}
void delect_string(char str[],char ch){
  int i,j;
  for(i=j=0;str[i]!='\0';i++)
    if(str[i]!=ch)
    str[j++]= str[i];
  str[j]='\0'; //这个是末尾进行补零
}
void print_string(char str[]){
printf("输出新的字符串：\n");
puts(str);
}
