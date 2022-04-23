#include<stdio.h>
int main() {
    int T, i;
    int run = 10;//兔子跑10min
    int t = 0;//兔子休息时间
    int s1 = 0, s2 = 0;//乌龟s1 兔子s2
    scanf_s("%d", &T);
    for(i = 0; i < T; i++) {  //利用for循环来进行刷
        s1 += 3;
        if (run == 0) { //兔子跑十分钟后才停下来
            run = 10;
            if (s1 < s2) { //如果兔子跑得远就休息三十分钟
                t = 30;
            }                                                                  //你就把他看成以十分钟为一个维度来进行研究
        }
        if (t > 0) { //休息时间减少
            t--;
        }
        if (t == 0) {  //没有休息时间 兔子跑十分钟 然后一直在for循环里循环
            s2 += 9;
            run--;
        }

    }
    if (s2 > s1) {
        printf("^_^ %d", s2);
    }
    else if (s2 == s1) {
        printf("-_- %d", s1);
    }
    else {
        printf("@_@ %d", s1);
    }
    return 0;
}
