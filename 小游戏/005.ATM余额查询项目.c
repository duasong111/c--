#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char username[10][10] = { "tonny","andy","alice","nancy","mike","kate","brandy","lucy","candy","molly" };
	char password[10][10] = { "000000","111111","222222","333333","444444","555555","666666","777777","888888","999999" };
	int rmb[10] = { 345,567,1789,2098,4567,17890,2345,12,0,10023 };
	int i , j,flag =0,c=3;
    char name[10], keyword[10];
  do {
    printf("请输入您的名字:");
    gets(name);
   printf("请输入您的密码:");
   gets(keyword);
  for(i=0;i<10;i++){
   if(strcmp(name,username) == 0 &&strcmp(password,keyword) == 0 )  {
    printf("%s的账户中有%d的余额",username[i],rmb[i]);
   flag++;
   break;
    }
        else printf("密码输入错误,请重新输入:\n");
        break;
     }
    c--;
 }while(flag==0&&c>0);
 if(flag==0) printf("登录失败,账户锁定！！");
    return 0;
}
