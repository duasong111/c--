#include<stdio.h>
int main(void)
{
	int number = 0;
	int count = 0;
	int N = 0;
	int guess = 0;
	int i;
	scanf("%d %d",&number, &N);
	for (i=1;; i++) {//不限制循环次数
		scanf("%d", &guess);
		if (guess <0 || i>N) {
			printf("Game Over\n");
			break;
		}
		if (guess < number) {
			printf("Too small\n");
		}
		else if (guess > number) {
			printf("Too big\n");
		}
		else if (guess == number)
		{
			count++;
			if (count == 1) {
				printf("Bingo!\n");
			}
			else if (count > 1 && count <= 3)
			{	printf("Lucky You!\n");
		}
		else if (count > 3 && count <= N) {
			printf("Good Guess!\n");
		}
		break;
	}
	count++;
  }
	return 0;
}
