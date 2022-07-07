//采用了结构体来进行运算。
#include <stdio.h>
#define N 100
struct stu{
        char name[20];
        char class[100];
        int sore;
    };
int main(void)
{
    int i,n;
    struct stu s[N]; //说明这是一个结构体数组
    scanf("%d",&n); //这个是为了输入学生的个数
    for(i=0;i<n;i++){ //输入
        scanf("%s%s%d",s[i].name,s[i].class,&s[i].sore);
    }
    //来进行比较成绩
    int max = s[0].sore; //用开始的值是最大值也是最小值
    int min = s[n-1].sore;

     for(i=0;i<n;i++){
        if(min > s[i].sore)   min = i;
        if(max < s[i].sore)  max = i-1; //记住下标，为了输出
     }

    //两次输出
            printf("%s %s\n",s[max].name,s[max].class);
            printf("%s %s\n",s[min].name, s[min].class);

    return 0;
}
