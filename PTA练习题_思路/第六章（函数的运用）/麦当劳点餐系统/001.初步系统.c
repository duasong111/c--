
//麦当劳的点餐系统
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int arr[20]={0}; //全局变量
float money_storage[0] ={0};
void menu();
void check(int arr[],int n);
void charge(float money_storage[0] );
void list(int arr[],int n);
//void act();
int main()
{

    menu();
   // 我将点餐程序放在了那个mian的主函数中
   int judge,i=0;
    printf("请输入您想要的商品编号(结束选购请输入0)\n");
    do{
        printf("输入您选择的编号:");
        scanf("%d",&arr[i]);
        i++;
        printf("继续选购 <Yes..1/No..0>");
        scanf("%d",&judge);
    }while(judge!=0&&arr[i]<10); //结束选购
    printf("点餐结束\n");
    check(arr,i);//结算程序
    charge(money_storage);//找零
    list(arr,i);
    return 0;
}
void menu(){
puts("*****菜单如下*******");
puts("编号  商品名称   售价");
puts(" 1    大杯可乐   ￥5.9");
puts(" 2    大杯咖啡   ￥9.9");
puts(" 3    大冰淇凌   ￥12");
puts(" 4    汉堡王     ￥15");
puts(" 5    风味薯条   ￥12");
puts(" 6    脆皮鸡     ￥56");
puts(" 7    鸡块饭     ￥22");
puts(" 8    鸡块全家桶 ￥55");
puts(" 9    麻辣鸡腿   ￥17");
putchar('\n');
}
void check(int arr[],int n){
 float money =0;
 int i;
 for(i=0;i<n;i++){
    if(arr[i]==1) money += 5.9;
    if(arr[i]==2) money += 9.9;
    if(arr[i]==3) money += 12;
    if(arr[i]==4) money += 15;
    if(arr[i]==5) money += 12;
    if(arr[i]==6) money += 56;
    if(arr[i]==7) money += 22;
    if(arr[i]==8) money += 55;
    if(arr[i]==9) money += 17;
 }
 printf("您需要付的总金额为%.2f",money);
 
 money_storage[0] = money; //将钱存在这里
 putchar('\n');
}
void charge(float money_storage[0] ){
    float money2,back_money;
 printf("您实付金额:");
 scanf("%f",&money2);
 back_money =money2 - money_storage[0] ;
 printf("应找零钱为%.2f\n",back_money);
}
void list(int arr[],int n){
    int i;
 printf("***本次您购买了如下商品****\n");
 for(i=0;i<n;i++){
    if(arr[i]==1) puts("大杯可乐*1");
    if(arr[i]==2) puts("大杯咖啡*1");
    if(arr[i]==3) puts("大冰淇凌*1");
    if(arr[i]==4) puts("汉堡王*1");
    if(arr[i]==5) puts("风味薯条*1");
    if(arr[i]==6) puts("脆皮鸡*1");
    if(arr[i]==7) puts("鸡块饭*1");
    if(arr[i]==8) puts("鸡块全家桶*1");
    if(arr[i]==9) puts("麻辣鸡腿*1");
 }
 printf("下次还来哈！");
}

