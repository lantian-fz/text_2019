#define _CRT_SECURE_NO_WARNINGS 1
//����һ���������飬������������Ҳ�и�����������һ������������������һ�������顣
//������������ĺ͵����ֵ��Ҫ��ʱ�临�Ӷ�ΪO(n)��
//��������{1,-2,3,10,-4,7,2,-5},�����������Ϊ{3,10,-4,7,2},���Ϊ������ĺ�18
#include <stdio.h>
#include <stdlib.h>

int MAX_Arry(int* arr, int sz)
{
	int MAX = arr[0];
	int sum = arr[0];

		int i = 1;
	if (arr == NULL || sz <= 1)
		return 0;
	for (i = 1; i < sz; i++)
	{
		if (sum < 0)  //���ǰһ���������С��0��������￪ʼ�µ�������
			sum = arr[i];
		else
		{
			sum += arr[i];//�������
		}
		if (sum > MAX)//��¼��ÿ���������к����ʱ��ֵ
			MAX = sum;
	}
	return MAX;
}
int main()
{
	int arr[] = { 1, -2, 3, 10, -4, 7, 2, -5 };
	int len = sizeof(arr) / sizeof(arr[0]);
	printf("%d\n", MAX_Arry(arr, len));

	printf("\n");
	system("pause");
	return 0;
}