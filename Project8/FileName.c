#include <stdio.h>
int main()
{
	int ��Ʈ����ũ, �ƿ�, ���̽� = 0;
	int a, b, d, i = 0;
		printf("���ھ߱�");
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
					printf("����:%d\n", a++);
					scanf("%d", &d);
					printf("\n");
				}while (d > 0.001);
				printf("�ٽ� �ۼ��ϼ���");
				printf("\n");
			
			}
}