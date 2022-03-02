#include <time.h>
#include <stdio.h>

 int sleep(unsigned long x)
{
	clock_t c1 = clock(), c2;
	do {
		if ((c2 = clock()) == (clock_t)-1)
			return 0;
	} while (1000.0 * (c2 - c1) / CLOCKS_PER_SEC < x);
	return 1;
} //前边的依旧是不变的，就是那个进行睡眠的函数。
 int main(void)
 {
	 int i;
	 clock_t c;  //其实就是一个引入一个函数
	 for (i = 10; i > 0; i--) {
		 printf("\r%2d", i); //r的目的是将新的数字更换到本行开头
	 fflush(stdout); //强制刷新
	 sleep(1000);  //时间间隔是1s
	 }
	 printf("\r\aFIRE!!\n"); //最后的刷新
	 c = clock();  //末尾计时
	 printf("程序开始运行前后经过了%.1f秒。\n", (double)c / CLOCKS_PER_SEC);
	 //这两段的目的就是为了计算起始和结束的时间。

  return 0;
 }
//这里的那个来运用clock函数来进行获取程序启动前后搜经历的时间
