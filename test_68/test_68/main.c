#define _CRT_SECURE_NO_WARNINGS 1
//����һ���������͵����� nums�����дһ���ܹ��������顰�����������ķ�����
//���������������������������ģ����������������������Ԫ����ӵĺ͵����Ҳ�����Ԫ����ӵĺ͡�
//������鲻����������������ô����Ӧ�÷��� -1����������ж��������������ô����Ӧ�÷��������ߵ���һ����
//
//ʾ�� 1:����:nums = [1, 7, 3, 6, 5, 6]      ���: 3
//����: ����3 (nums[3] = 6) �������֮��(1 + 7 + 3 = 11)�����Ҳ���֮��(5 + 6 = 11)��ȡ�
//ͬʱ, 3 Ҳ�ǵ�һ������Ҫ�������������
//ʾ�� 2:����: nums = [1, 2, 3]              ���: -1
//����: �����в��������������������������
#include <stdio.h>

int pivotIndex(int* nums, int numsSize)
{
	int left = 0;
	int right = 0;
	for (int i = 0; i < numsSize; i++)
	{
		right += nums[i];
	}
	for (int i = 0; i < numsSize; i++)
	{
		right -= nums[i];
		if (i>0)
			left += nums[i - 1];
		if (left == right)
			return i;
	}
	return -1;
}

void main()
{
	int nums[] = { 1, 7, 3, 6, 5, 6 };
	int sz = sizeof(nums) / sizeof(nums[0]);
	printf("%d\n", pivotIndex(nums, sz));
}