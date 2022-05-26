//给定一个n×n的方阵，本题要求计算该矩阵除副对角线、最后一列和最后一行以外的所有元素之和。副对角线为从矩阵的右上角至左下角的连线。
#include <stdio.h>
#define N 10
#define M 10
int main()
{
     int arr[N][M] , i ,j;
     int m, sum = 0;
     scanf("%d",&m);
     for(i=0;i<m;i++){  //单纯的输入
        for(j=0;j<m;j++){
            scanf("%d",&arr[i][j]);
        }
     }
      for(i=0;i<m;i++){ //有条件的来控制输出
        for(j=0;j<m;j++){
                if((i + j == m-1) ||(i==m-1)||( j==m-1)) continue ;
            sum +=arr[i][j];
        }
     }
        printf("%d",sum);
    return 0;
}
