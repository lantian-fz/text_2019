#define _CRT_SECURE_NO_WARNINGS 1
//�θ�һ��ʮ������, �ӵ�λ����λ�����λ�����֡��Ӹ�λ����λ�����λ������
#include <stdio.h>

void ReversePrint(int n)
{
	printf("%d ", n % 10);
	if (n > 9)
		ReversePrint(n / 10);
}

void Print(int n)
{
	if (n > 9)
		Print(n / 10);
	printf("%d ", n % 10);
}

void ReverseShow(int n)//�ǵݹ�ķ�ʽ
{
	printf("�ӵ�λ����λ�����λ���֣�");
	while (n > 9)
	{
		printf("%d ", n % 10);
		n /= 10;
	}
	printf("%d\n", n);
}
void Show(int n)//int��Χ-2147483648 - 2147483647  ��-2^31-2^31
{
	int arr[10] = { 0 };
	int i = 0;
	for (i = 0; i < 10; i++)
		arr[i] = -1;
	i = 0;
	while (n>9)
	{
		arr[i++] = n % 10;
		n /= 10;
	}
	arr[i] = n;
	printf("�Ӹ�λ����λ�����λ���֣�");
	for (; i >= 0; i--)
		printf("%d ", arr[i]);
	printf("\n");
}

void main()
{
	int n = 0;
	printf("������һ��������");
	scanf("%d", &n);

	printf("�ӵ�λ����λ�����λ���֣�");
	ReversePrint(n);//�ݹ�
	printf("\n");
	ReverseShow(n);//�ǵݹ�

	printf("�Ӹ�λ����λ�����λ���֣�");
	Print(n);//�ݹ�
	printf("\n");
	Show(n);//�ǵݹ�

}