//仅一行。比赛开始时间，题目提交Accepted时间以及提交错误次数（≥0) 这个是一个让人有想法的题目
//这个思路特别的重要。因为你开始输入的是时间，但是尼最后所得到的确实数值，这个特别的重要！！！
//那怎样将那个像时间的数转换成那个确确实实的数字呢？
#include<stdio.h>
int main()
{
int hour1,minute1,hour2,minute2,t;

scanf("%d:%d %d:%d %d",&hour1,&minute1,&hour2,&minute2,&t);
   //其实在此就是这弄的将输入的全部变成数字，然后小时乘以 60 得到分钟，且后一项减去前一项。
printf("%d",(hour2 - hour1) * 60 + (minute2 - minute1) * 1 + t * 20);
           //上，就是我所说道的那种。
return 0;
}
