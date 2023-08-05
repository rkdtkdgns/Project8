#include <stdio.h>
int main()
{
	int 스트라이크, 아웃, 베이스 = 0;
	int a, b, d, i = 0;
		printf("숫자야구");
		printf("\n");
		srand(time(NULL));
		for (int i = 0; i < 3; i++)
		{
			int random = rand() % 5;
			printf("%d ", random);
		}
			for (a=1; a<8; a++)
			{
				do
				{
					printf("라운드:%d\n", a++);
					scanf("%d", &d);
					printf("\n");
				}while (d > 0.001);
				printf("다시 작성하세요");
				printf("\n");
			
			}
}