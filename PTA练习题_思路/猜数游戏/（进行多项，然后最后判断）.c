#include <stdio.h>
#define NUMBER 4
int main(void)
{
	int i = 0;
	int j = 0;
	int arr[NUMBER];  //定义数组则是为了储存输入的六个数字
	int  aim, limit;
	scanf_s("%d %d", &aim, &limit);  //limit：限制最大输出
	for (int j = 0; j < NUMBER; j++) {
	//利用for循环进行变量的储存。
		scanf_s("%d", &arr[j]);
	} 
	//变量的输出！
  for (int j = 0; j < NUMBER; j++) {
	 // for(int n=0;n<limit;n++){ //不是二重循环的
			printf("%d", arr[j]); //输出arr[0---j]
			do {
				if (arr[j] < 0) {
					printf("Game Over");
					break;  //结束循环了
				}
				i++; /*每一次循环，猜数增加一次*/
				limit--;
				
				//这个是跳出do-while循环的条件
			} while (arr[j] != aim && limit > 0);
			//跳出
			//for(int j= 0;j<3;j++){}	
			if (arr[j] > aim)
			{
				printf("对于%dToo big\n",aim);
			}
			else if (arr[j] < aim){
				printf("对于%dToo small\n",aim);
			}
	  }
			
			if (arr[j] != aim) {
				printf("Game Over");
			} 
			else {//猜的值和目标值相同
				switch (i) {
				case 1: printf("Bingo!"); break;
				case 2:
				case 3: printf("Lucky You!"); break;
				default: printf("Good Guess!"); break;
				   }
				   //应该放到大循环的

			   }
	//	}		
	return 0;
}
