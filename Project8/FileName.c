#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	int ��Ʈ����ũ = 0, �ƿ� = 0, �� = 0;
	int a = 0, b = 0, d = 0, i = 0, c = 0, r = 0, f = 9;
	printf("���ھ߱�");
	printf("\n");

	srand((unsigned int)time(NULL));
	while (a == b || c == a || c == b )
	{
		a = rand() % 10;
		b = rand() % 10;
		c = rand() % 10;
		continue;
	}
	
	char ����[4] = { a + 48, b + 48, c + 48, 0 };
	/*sprintf(����, " %d", num1);
	_itoa(rand() % 1000, ����, 10);*/
	for (i = 0; i < 9; i++)
	{

		printf("����:%d\n", i + 1);
		int num4;
		int num6;
		int num5;

		��Ʈ����ũ = 0;
		scanf("%1d%1d%1d", &num4, &num5, &num6);
		if (a == num4)
		{
			(��Ʈ����ũ++);
		}
		if (b == num5)
		{
			(��Ʈ����ũ++);
		}
		if (c == num6)
		{
			(��Ʈ����ũ++);
		}printf("��Ʈ����ũ:%d\n", ��Ʈ����ũ);
		if (��Ʈ����ũ == 3)
		{
			break;
		}

		�� = 0;
		if (a == num5 || a == num6)
		{
			(��++);
		}
		if (b == num4 || b == num6)
		{
			(��++);
		}
		if (c == num5 || c == num4)
		{
			(��++);
		}
		printf("��:%d\n", ��);
		/*
		�ƿ� = 0;
		if (a == num5 || a == num6)
		{
			(�ƿ�++);
		}
		if (b == num4 || b == num6)
		{
			(�ƿ�++);
		}
		if (c == num5 || c == num4)
		{
			(�ƿ�++);
		}*/
		�ƿ� = 3 - (��Ʈ����ũ + ��);
		printf("�ƿ�:%d\n", �ƿ�);
	}
	return 0;
 }