#include <stdio.h>
#include <stdlib.h>
#define  M 3
#define  N 4
//三行四列来进行对成绩的打印，求平均值和不及格的数值
void average(float (*p)[N]);
void search(float (*p)[N]);
int main()
{
    int i,j;
    float arr[M][N];
   float (*p)[N];
    for(i=0;i<M;i++){
        for(j=0;j<N;j++){
            scanf("%f",&arr[i][j]); //数值的输入
        }
    }
  //  p=arr;
    average(arr);
    search(arr);
    return 0;
}
void average(float (*p)[N]){
int i,j;
float sum[M]={0};
  for(i=0;i<M;i++){
        sum[i] = 0;
    for(j=0;j<N;j++){
       sum[i]=sum[i]+*(*(p+i)+j);
    }
  }
  for(i=0;i<M;i++){
    printf("%d course average is %.1f\n",i+1,sum[i]/N);
  }
}
void search(float (*p)[N]){
int i,j;
 for(i=0;i<M;i++){
    for(j=0;j<N;j++){
        if(*(*(p+i)+j) < 60)  printf("%d course %d student score is %.2f\n",i+1,j+1,*(*(p+i)+j));
    }
  }
  }
