#include <time.h>
#include <stdio.h>

int  sleep(unsigned long x)
{
    clock_t c1 = clock(), c2;
    do {
        if ((c2 = clock()) == (clock_t)-1)
            return 0;
    } while (1000.0 * (c2 - c1) / CLOCKS_PER_SEC < x);
    return 1;
}
int main()
{
    int start;

    do
    {
        printf("Please enter the number to start\n");
        printf("the countdown (1 to 100):");
        scanf_s("%d", &start);
    } while (start < 1 || start>100);

    do
    {
        printf("T-minus %d\n", start);
        start--;
        sleep(3000);
    } while (start > 0);
    printf("Zero!\n Go!\n");
    return(0);
}

//这个其实和你写的那个倒计时出不多，但是他运用的东西好像比你更多一些啊 。
