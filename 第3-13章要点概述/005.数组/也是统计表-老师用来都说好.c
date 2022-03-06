#include <stdio.h>
#define NUMBER 5
int tensu[NUMBER];

#include<stdlib.h>

int main(void)
{
	int i;
	int sum = 0;

	printf("please input sore in your classes\n");
	for (i = 0; i < NUMBER; i++) {
		printf("%2dN:", i + 1);
		scanf_s("%d", &tensu[i]);
		sum += tensu[i];
	}
	int low = tensu[0], max = tensu[0];
	for (i = 0; i < NUMBER; i++)
	{
		if(tensu[i] < max)
		{
			max = tensu[i];
		}

		if (tensu[i] > low)
		{
			low = tensu[i];
		}
	}
	printf("sum:%5d\n", sum);
	printf("ave:%5.1f\n", (double)sum / NUMBER);

	printf("max is %d\n", max);
	printf("low is %d\n", low);
	system("pause");
	return 0;

	
}
