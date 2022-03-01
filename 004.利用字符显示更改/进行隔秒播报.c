//这个是可以进行播报，其实改变printf（“”）内容就可以使用了
#include <time.h>
#include <stdio.h>
int sleep(unsigned long x);  //你若没有这个函数，那么sleep就不运行
int main(void)
{
	printf(" ----");
	fflush(stdout);

	sleep(3000);
	printf("\r-------");
	fflush(stdout);

	sleep(3000);
	printf("\r  ------- ");
	fflush(stdout);

	

	sleep(3000);
	printf("\r     -------  ");
	fflush(stdout); 

	return 0;
}
int sleep(unsigned long x)  //给他背下来，
{
	clock_t c1 = clock(), c2;
	do {
		if ((c2 = clock()) == (clock_t)-1)
			return 0;
	} while (1000.0 * (c2 - c1) / CLOCKS_PER_SEC < x);
	//这个也太神奇了吧。
	return 1;
}

//其实上班就是运用了一个函数，sleep函数.


