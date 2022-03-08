//首先getchar和putchar的区别，这俩都是单字节的但是为啥不同呢？？？
//对于getchar而言这个是单字节输出，然后存留在缓冲区，但是对于putchar而言而是单字节的输出
//EOF啥意思呢？ end of file 宏定义所定义的值为“-1”.
//啥时候这个循环会结束？ 当输入存在问题时或者这个循环结束时，都能结束.
//putchat(ch)为啥有时候会在括号里添加单引号呢？因为那个字节数 是0-128,但是这个鬼玩意我试了，但是还是没有搞懂 ！！！！！
#include <stdio.h>
int main(void)
{
	int ch;
	while ((ch = getchar()) != EOF)
		putchar(ch);


	return 0;
}
