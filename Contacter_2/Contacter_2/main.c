#define _CRT_SECURE_NO_WARNINGS 1

#include "contact.h"

void menu()
{
	printf("***        菜单       ***\n");
	printf("*   1.add     2.del     *\n");
	printf("*   3.search  4.modify  *\n");
	printf("*   5.show    6.sort    *\n");
	printf("*   7.empty   0.exit    *\n");

}

int main()
{
	int input = 0;

	Contact tmp;

	//初始化
	Initdata(&tmp);

	do
	{
		menu();

		printf("请选择：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			AddContact(&tmp);
			break;
		case 2:
			DelContact(&tmp);
			break;
		case 3:
			SearchContact(&tmp);
			break;
		case 4:
			ModifyContact(&tmp);
			break;
		case 5:
			printf("\n");
			ShowContact(&tmp);
			break;
		case 6:
			printf("\n");
			SortContact(&tmp);
			break;
		case 7:
			EmptyContact(&tmp);
			break;
		case 0:
			EmptyCapacity(&tmp);
			break;
		default:
			printf("你的选择有误，请重新选择！\n");
			break;
		}
	} while (input);

	printf("\n");
	system("pause");
	return 0;
}