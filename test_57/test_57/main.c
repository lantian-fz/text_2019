#define _CRT_SECURE_NO_WARNINGS 1
//����һ������ nums ��һ��ֵ val������Ҫԭ���Ƴ�������ֵ���� val ��Ԫ�أ������Ƴ���������³��ȡ�
//��Ҫʹ�ö��������ռ䣬�������ԭ���޸��������鲢��ʹ�� O(1) ����ռ����������ɡ�
//Ԫ�ص�˳����Ըı䡣�㲻��Ҫ���������г����³��Ⱥ����Ԫ�ء�
//ʾ�� 1:���� nums = [3, 2, 2, 3], val = 3,
//����Ӧ�÷����µĳ��� 2, ���� nums �е�ǰ����Ԫ�ؾ�Ϊ 2��
//
//ʾ�� 2:���� nums = [0, 1, 2, 2, 3, 0, 4, 2], val = 2,   0 1 2 3 0 4 2 2
//����Ӧ�÷����µĳ��� 5, ���� nums �е�ǰ���Ԫ��Ϊ 0, 1, 3, 0, 4��
#include <stdio.h>

int removeElement(int nums[], int numsSize, int val)
{
	for (int i = 0; i < numsSize; i++)
	{
		if (nums[i] == val)
		{
			for (int j = i + 1; j < numsSize; j++)
			{
				nums[j - 1] = nums[j];
			}
			numsSize--;
			i--;
		}
	}
	return numsSize;
}

void main()
{
	int nums[] = { 0, 1, 2, 2, 3, 0, 4, 2 };
	int sz = sizeof(nums) / sizeof(nums[0]);
	int val = 2;
	int newsz = removeElement(nums, sz, val);
	printf("�µĳ��� = %d\n",newsz);
	printf("nums��ǰ%d��Ԫ��Ϊ��", newsz);
	for (int i = 0; i < newsz; i++)
	{
		printf("%d ", nums[i]);
	}
	printf("\n");
}