#define _CRT_SECURE_NO_WARNINGS 1
//��д������θ���һ������n, �ж����ܷ�3, 5, 7���������������Ϣ֮һ��
//��ͬʱ��3, 5, 7����
//��ͬʱ������������������Ҫ����ָ������������
//�ܱ�����һ��������, Ҫ����ָ������һ��������
//���ܱ�������һ��������

#include <stdio.h>

int main()
{
	int n = 0;
	int arr1[] = { 3, 5, 7 };
	int arr2[3] = { 0 };
	int x = 0;//��¼���Ա�����������
	printf("��������n��");
	scanf("%d", &n);
	for (int i = 0,j=0; i < 3; i++)
	{
		if (n%arr1[i] == 0)
		{
			arr2[j++] = arr1[i];
			x++;
		}
	}
	switch (x)
	{
	case 0: 
		printf("���ܱ�������һ��������\n");
		break;
	case 1:
		printf("�ܱ�����һ����������%d\n", arr2[0]);
		break;
	case 2:
		printf("��ͬʱ������������������%d %d\n", arr2[0], arr2[1]);
		break;
	case 3:
		printf("��ͬʱ��3, 5, 7����\n");
		break;
	}

	return 0;
}