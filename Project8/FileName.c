#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	int 스트라이크 = 0, 아웃 = 0, 볼 = 0;
	int a = 0, b = 0, d = 0, i = 0, c = 0, r = 0, f = 9;
	printf("숫자야구");
	printf("\n");

	srand((unsigned int)time(NULL));
	while (a == b || c == a || c == b )
	{
		a = rand() % 10;
		b = rand() % 10;
		c = rand() % 10;
		continue;
	}
	
	char 숫자[4] = { a + 48, b + 48, c + 48, 0 };
	/*sprintf(숫자, " %d", num1);
	_itoa(rand() % 1000, 숫자, 10);*/
	for (i = 0; i < 9; i++)
	{

		printf("라운드:%d\n", i + 1);
		int num4;
		int num6;
		int num5;

		스트라이크 = 0;
		scanf("%1d%1d%1d", &num4, &num5, &num6);
		if (a == num4)
		{
			(스트라이크++);
		}
		if (b == num5)
		{
			(스트라이크++);
		}
		if (c == num6)
		{
			(스트라이크++);
		}printf("스트라이크:%d\n", 스트라이크);
		if (스트라이크 == 3)
		{
			break;
		}

		볼 = 0;
		if (a == num5 || a == num6)
		{
			(볼++);
		}
		if (b == num4 || b == num6)
		{
			(볼++);
		}
		if (c == num5 || c == num4)
		{
			(볼++);
		}
		printf("볼:%d\n", 볼);
		/*
		아웃 = 0;
		if (a == num5 || a == num6)
		{
			(아웃++);
		}
		if (b == num4 || b == num6)
		{
			(아웃++);
		}
		if (c == num5 || c == num4)
		{
			(아웃++);
		}*/
		아웃 = 3 - (스트라이크 + 볼);
		printf("아웃:%d\n", 아웃);
	}
	return 0;
 }