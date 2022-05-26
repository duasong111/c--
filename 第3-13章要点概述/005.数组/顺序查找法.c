#include <stdio.h>
#define N 100
int main(void)
{
    int arr[N], num, cycle;
    int i, j;
    scanf("%d%d", &num, &cycle);
    for (i = 0; i < num; i++) {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < num - 1; i++) {
        for (j = 0; j < cycle; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for (i = 0; i < num; i++)
        printf("%d ", arr[i]);

    return 0;
}
