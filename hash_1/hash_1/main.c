#define _CRT_SECURE_NO_WARNINGS 1
//������һ���������������Hash��Hash��Ĵ洢��λ��ΪͰ��
//ÿ��Ͱ�ܷ�3����������һ��Ͱ��Ҫ�ŵ�Ԫ�س���3��ʱ��
//��Ҫ���µ�Ԫ�ش�������Ͱ�У�ÿ�����ͰҲ�ܷ�3��Ԫ�أ�
//������Ͱʹ������������
//��Hash��Ļ�Ͱ��ĿΪ����P��Hash���hash������Pȡģ��
//���붨�����£�
//#define P 7
//#define NULL_DATA -1
//struct bucket_node
//{
//	int data[3];
//	struct bucket_node *next;
//};

//���ڼ���hash_table�Ѿ���ʼ�����ˣ�
//insert_new_element()����Ŀ���ǰ�һ���µ�ֵ����hash_table�У�
//Ԫ�ز���ɹ�ʱ����������0�����򷵻�-1����ɺ�����
#include "hash.h"

int main()
{
	Init();
	int arr[] = { 14, 14, 21, 28, 35, 293, 35, 24, 149, 19, 63, 16, 103, 77, 5, 153, 145, 356, 51, 68, 705, 453 };
	int sz = sizeof(arr) / sizeof(arr[0]);

	for (int i = 0; i < sz; i++)
	{
		insert_new_element(arr[i]);
	}


	printf("\n");
	system("pause");
	return 0;
}