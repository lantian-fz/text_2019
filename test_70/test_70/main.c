#define _CRT_SECURE_NO_WARNINGS 1
//����һ���ǿ����飬���ش������е������������������ڣ��򷵻���������������Ҫ���㷨ʱ�临�Ӷȱ�����O(n)��
//ʾ�� 1:����: [3, 2, 1]     ���: 1      ����: ����������� 1.
//ʾ�� 2:����: [1, 2]        ���: 2      ����: ���������������, ���Է��������� 2 .
//ʾ�� 3:����: [2, 2, 3, 1]  ���: 1      ����: ע�⣬Ҫ�󷵻ص������������ָ��������Ψһ���ֵ�����
//��������ֵΪ2���������Ƕ��ŵڶ���

#include <stdio.h>

int thirdMax(int* nums, int numsSize)
{
	int count = 0;
	int max = nums[0];
	int max_third = 0;
	for (int i = 1; i < numsSize; i++)
	{
		if (nums[i]>max)
			max = nums[i];
	}
	if (numsSize > 2)
	{
		max_third = max;
		for (int i = 0; i < numsSize; i++)
		{
			if (max_third>nums[i])
				count++;
			if (count == numsSize - 3)
				return nums[i];
		}
	}
	return max;
}

void main()
{
	int arr[] = { 3,2,1};
	int sz = sizeof(arr) / sizeof(arr[0]);
	printf("%d\n", thirdMax(arr, sz));
}