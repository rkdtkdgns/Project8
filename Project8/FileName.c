#include <stdio.h>
#include <stdlib.h>
int main()
{
	int 스트라이크 = 0, 아웃 = 0, 볼 = 0;
	int a = 0, b = 0, d = 0, i = 0, c = 0;
	printf("숫자야구");
	printf("\n");


	a = rand() % 5;
	b = rand() % 5;
	c = rand() % 5;

	srand((unsigned int)time(NULL));
	char 숫자[4] = { a + 48, b + 48, c + 48, 0 };
	/*sprintf(숫자, " %d", num1);
	_itoa(rand() % 1000, 숫자, 10);*/
	int num1;
	num1 = atoi(숫자);
	("%d\n", num1);
	for (i = 0; i < 9; i++)
	{

		printf("라운드:%d\n", i + 1);
		int num4;
		int num5;
		int num6;
		for (a = 0; a < d; 스트라이크++);
		{
		scanf("%1d%1d%1d", &num4, &num5, &num6);
		
			printf("스트라이크:%d\n", 스트라이크++);
			(a == num4);
			{
				(스트라이크++);
			}
			(b == num5);
			{
				(스트라이크++);
		
			}
			(c == num6);
			{
				(스트라이크++);
		    
			}
			
		}
		
	}
	return 0;
}