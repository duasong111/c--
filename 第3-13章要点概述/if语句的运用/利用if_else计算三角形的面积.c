#include<stdio.h>	//标准输入输出头文件
#include<math.h>	//需用数学公式sqrt【平方根计算】
void main()
{
	float a,b,c,p;	//边长和面积可为小数
	double S;
	printf("请输入三边长度:\n");	//每次输入以Enter键结束
	scanf("%f %f %f", &a,&b,&c);	//输入变量
	if(a+b>c && b+c>a && a+c>b)		//判断任意两边之和是否大于第三边   这个当时是没有想到的。
	{
		p=(a+b+c)/2;
		S=sqrt(p*(p-a)*(p-b)*(p-c));	//sqrt开平方，计算面积
		printf("此三角形面积为:%7.2f\n",S);		//宽度为7，其中.2表示小数点后保留2位
	}
	else
	{
		printf("您输入的三边不构成三角形!\n");
	}
}
