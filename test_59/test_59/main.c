#define _CRT_SECURE_NO_WARNINGS 1
//����һ�����������һ��Ŀ��ֵ�����������ҵ�Ŀ��ֵ�������������������Ŀ��ֵ�������������У����������ᱻ��˳������λ�á�
//����Լ������������ظ�Ԫ�ء�
//ʾ�� 1:���� : [1, 3, 5, 6], 5     ��� : 2
//ʾ�� 2 :���� : [1, 3, 5, 6], 2    ��� : 1
//ʾ�� 3 :���� : [1, 3, 5, 6], 7    ��� : 4
#include <stdio.h>

int searchInsert(int nums[], int numsSize, int target)
{
	int i = 0;
	for (i = 0; i < numsSize; i++)
	{
		if (nums[i] >= target)
			break;
	}
	return i;
}

void main()
{
	int nums[] = { 1, 3, 5, 6 };
	int sz = sizeof(nums) / sizeof(nums[0]);
	int target = 7;

	printf("%d\n",searchInsert(nums,sz,target));
}