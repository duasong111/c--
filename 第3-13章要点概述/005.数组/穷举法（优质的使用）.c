#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define N 5
int main() {
    int arr[N];
    int count = 1;
    int i;
    for(i = 95860; i < 100000; i++) { //各个位数
       
        arr[0] = i / 10000;
        arr[1] = i / 1000 % 10;
        arr[2] = i / 100 % 10;
        arr[3] = i / 10 % 10;
        arr[4] = i % 10;           //条件和里程数
        count++;
        if (arr[0] == arr[4] && arr[1] == arr[3])
        {   
            printf("车速为%d Km/h，此时对称数为%d", count / 2, i);
            break;
        }
       }
   
    return 0;
}
