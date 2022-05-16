//给出一个日期，进而来判断曾经的天数的是周几
#include <stdio.h>
void main()
{	
	int year,month, day;
	printf("请按照以下格式输入年,月,日：");
	scanf_s("%d,%d,%d",&year,&month,&day);
	if ((month == 1) || (month == 2)) {
		month += 12;
		year--;
	}
	int w;
	w = ((day+1) + 2 * month + 3 * (month + 1) / 5 + year + year / 4 - year / 100 + year / 400);
	//printf("%d/%d/%d 这一天是%s\n", year, month, day, weekname[w]);
	switch (w % 7) {
	case 0:printf("星期日\n"); break;
	case 1:printf("星期一\n"); break;
	case 2:printf("星期二\n"); break;
	case 3:printf("星期三\n"); break;
	case 4:printf("星期四\n"); break;
	case 5:printf("星期五\n"); break;
	case 6:printf("星期六\n"); break;
	}
}
