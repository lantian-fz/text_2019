#define _CRT_SECURE_NO_WARNINGS 1
//给定两个有序整数数组 nums1 和 nums2，将 nums2 合并到 nums1 中，使得 num1 成为一个有序数组。
//说明 :初始化 nums1 和 nums2 的元素数量分别为 m 和 n。
//你可以假设 nums1 有足够的空间（空间大小大于或等于 m + n）来保存 nums2 中的元素。
//示例 :输入 :nums1 = [1, 2, 3, 0, 0, 0], m = 3
//	        nums2 = [2, 5, 6], n = 3
//      输出 : [1, 2, 2, 3, 5, 6]
#include <stdio.h>

void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n)
{
	//由于nums1有足够的空间，那可以比较两个数组最后两个元素后，最大的从下标m+n-1处放置元素
	//两个数组已经有序，元素之间需要比较m+n-1次
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