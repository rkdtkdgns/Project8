#include <stdio.h>
int main()
{
	int 스트라이크 = 0, 아웃 = 0, 볼 = 0;
	int a = 0, b = 0, d = 0, i = 0;
		printf("숫자야구");
		printf("\n");
		srand(time(NULL));
		for (int i = 0; i < 3; i++)
		{
			int random = rand() % 5;
			printf("%d ", random);
			int i;
		}
			for (a=0; a<8; a++)
			{
					printf("라운드:%d\n", a+1);
					scanf("%03d", &d);
					printf("\n");
					if (i<9)
					{
						d = i;
						printf("스트라이크:%d\n", 스트라이크++);
					}
					else 
					{
						d > i;
						d < i;
						printf("아웃:%d\n", 아웃++);
					}
			}
}