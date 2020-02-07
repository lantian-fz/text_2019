#define _CRT_SECURE_NO_WARNINGS 1
//�������������������� nums1 �� nums2���� nums2 �ϲ��� nums1 �У�ʹ�� num1 ��Ϊһ���������顣
//˵�� :��ʼ�� nums1 �� nums2 ��Ԫ�������ֱ�Ϊ m �� n��
//����Լ��� nums1 ���㹻�Ŀռ䣨�ռ��С���ڻ���� m + n�������� nums2 �е�Ԫ�ء�
//ʾ�� :���� :nums1 = [1, 2, 3, 0, 0, 0], m = 3
//	        nums2 = [2, 5, 6], n = 3
//      ��� : [1, 2, 2, 3, 5, 6]
#include <stdio.h>

void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n)
{
	//����nums1���㹻�Ŀռ䣬�ǿ��ԱȽ����������������Ԫ�غ����Ĵ��±�m+n-1������Ԫ��
	//���������Ѿ�����Ԫ��֮����Ҫ�Ƚ�m+n-1��
	int x = m - 1; 
	int y = n - 1; 
	int count = m + n - 1;
	while (y >= 0)
	{
		if (x < 0)
		{
			nums1[count--] = nums2[count--];
		}
		else
		{
			if (nums1[x] >= nums2[y])
				nums1[count--] = nums1[x--];
			else
				nums1[count--] = nums2[y--];
		}
	}
}
int func(int a)
{
	int b;
	switch (a)
	{
	case 1: b = 30;
	case 2: b = 20;
	case 3: b = 16;
	default: b = 0;
	} 
	return b;
}

void test()
{
	printf("%d\n", func(1));
}

void main()
{
	//int nums1[6] = { 1,2,3};
	//int nums2[3] = { 2,5,6 };
	//int m = 3;
	//int n = 3;
	//merge(nums1, sizeof(nums1) / sizeof(nums1[0]), m, nums2, sizeof(nums2) / sizeof(nums2[0]), n);
	//for (int i = 0; i < (m + n); i++)
	//{
	//	printf("%d ", nums1[i]);
	//}

	//int *p, a = 10;
	//p = &a;
	//printf("%d\n", &*p);
	test();

	printf("\n");
}