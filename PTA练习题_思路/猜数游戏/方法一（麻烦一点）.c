/*
猜数字游戏是令游戏机随机产生一个100以内的正整数，用户输入一个数对其进行猜测，需要你编写程序自动对其与随机产生的被猜数进行比较，
并提示大了（“Too big”），还是小了（“Too small”），相等表示猜到了。如果猜到，则结束程序。程序还要求统计猜的次数，如果1次猜出该数，
提示“Bingo!”；如果3次以内猜到该数，则提示“Lucky You!”；如果超过3次但是在N（>3）次以内（包括第N次）猜到该数，则提示“Good Guess!”
；如果超过N次都没有猜到，则提示“Game Over”，并结束程序。如果在到达N次之前，用户输入了一个负数，也输出“Game Over”，并结束程序。*/
//这个问题你还没有达到你的预期值
#include <stdio.h>
#define NUMBER 6
int main(void)
{
	int i = 0;
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
				printf("Too big\n");
			}
			else if (arr[j] < aim){
				printf("Too small\n");
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
