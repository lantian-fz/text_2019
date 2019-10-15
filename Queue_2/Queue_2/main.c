#define _CRT_SECURE_NO_WARNINGS 1
//带头节点的链队列
#include "queue.h"

void Menu()
{
	printf("          选择\n");
	printf("*    1.入队    2.出队     *\n");
	printf("*    3.显示    4.求长度   *\n");
	printf("*    5.读队头  0.退出     *\n");
}

int main()
{
	int input = 0;
	Datatype x = 0;
	LinkQueue qu;
	LQueueInit(&qu);
	do
	{
		Menu();
		printf("请选择：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("请输入元素(以-1结束):");
			while (scanf("%d", &x), x != -1)
				LQueueEnter(&qu, x);
			break;
		case 2:
			if (LQueueDelete(&qu, &x))
				printf("%d\n", x);
			else
				printf("队列为空，出队失败\n");
			break;
		case 3:
			LQueueShow(&qu);
			break;
		case 4:
			printf("队列长度 = %d\n", LQueueLength(&qu));
			break;
		case 5:
			if (LQueueGetFront(&qu, &x))
				printf("%d\n", x);
			else
				printf("队列为空，读取队头元素失败\n");
			break;
		case 0:
			break;
		default:
			printf("没有这个选项!\n");
		}
	} while (input);


	printf("\n");
	system("pause");
	return 0;
}