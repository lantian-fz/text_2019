#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//int main()
//{
//	int a[] = {5,3,2,1};
//	printf("%d\n",sizeof(a));//16 a��ʾ��������
//	printf("%d\n",sizeof(a+0));//4  �൱�ڵ�һ��Ԫ�صĵ�ַ
//	printf("%d\n", sizeof(*a));//4  �൱�ڵ�һ��Ԫ�صĳ���
//	printf("*a = %d\n", (*a));//5  
//	printf("%d\n",sizeof(a+1));//4 �൱�ڵڶ���Ԫ�صĳ���
//	printf("*(a+1) = %d\n", *(a + 1));//3 
//	printf("%d\n",sizeof(a[1]));//4 ��2��Ԫ�س���
//	printf("%d\n",sizeof(&a));//4 a�ĵ�ַ������4
//	printf("%d\n",sizeof(*&a));//16 �൱��a
//	printf("%d\n",sizeof(&a+1));//4 ��ַ�ĳ�����32λƽ̨�϶���4
//	printf("%d\n",sizeof(&a[0]));//4
//	printf("%d\n",sizeof(&a[0]+1));//4
//	
//	printf("\n");
//	system("pause");
//	return 0;
//}

//int main()
//{
//	char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };//û�з� \0
//	//a b c d e f 
//
//	printf("%d\n", sizeof(arr));//6 ���ֻ������ĳ��ȣ����Գ���Ϊ 6*1
//	printf("%d\n", sizeof(arr+0));//4 ��ʾ��Ԫ�صĵ�ַ���ʳ���Ϊ4
//	printf("%d\n", sizeof(*arr));//1 arr��������Ԫ�صĵ�ַ�������ú��ʾ��Ԫ��
//	printf("%d\n", sizeof(arr[1]));//1 
//	printf("%d\n", sizeof(&arr));//4  ��ַ������32λƽ̨�¶�Ϊ4
//	printf("%d\n", sizeof(&arr+1));//4
//	printf("%d\n", sizeof(&arr[0]+1));//4
//
//	//printf("%d\n", strlen(arr));//δ֪��
//	//printf("%d\n", strlen(arr + 0));//δ֪��
//	////printf("%d\n", strlen(*arr));//err �Ž��� 'a'
//	////printf("%d\n", strlen(arr[1]));//err 
//	//printf("%d\n", strlen(&arr));//δ֪��x
//	//printf("%d\n", strlen(&arr + 1));//δ֪��y=x-6
//	//printf("%d\n", strlen(&arr[0] + 1));//δ֪��y=x-1
//
//	printf("\n");
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	char arr[] = "abcdef";//Ԫ�ظ�����7������ \0
//
//	printf("%d\n", sizeof(arr));//7 ������鳤�ȣ����� \0
//	printf("%d\n", sizeof(arr+0));//4 ��Ԫ�ص�ַ
//	printf("%d\n", sizeof(*arr));//1 �ַ� a �ĳ���
//	printf("%d\n", sizeof(arr[1]));//1 �ַ� b �ĳ���
//	printf("%d\n", sizeof(&arr));//4 ��ַ������32λƽ̨�¶�Ϊ4
//	printf("%d\n", sizeof(&arr+1));//4
//	printf("%d\n", sizeof(&arr[0]+1));//4
//
//	//printf("%d\n", strlen(arr));//6
//	//printf("%d\n", strlen(arr + 0));//6
//	////printf("%d\n", strlen(*arr));//err
//	////printf("%d\n", strlen(arr[1]));//err
//	//printf("%d\n", strlen(&arr));//6
//	//printf("%d\n", strlen(&arr + 1));//δ֪�� ָ��ָ����arr��������λ�ã��޷�ȷ������
//	//printf("%d\n", strlen(&arr[0] + 1));//5 ָ��ָ��ڶ���Ԫ�ص�λ��
//
//	printf("\n");
//	system("pause");
//	return 0;
//}

int main()
{
	char* p = "abcdef"; //pָ��洢��"abcdef"���ڴ棬�����a�ĵ�ַ
	
	//printf("%d\n", strlen(p));//6 pΪ��Ԫ�ص�ַ
	//printf("%d\n", strlen(p+1));//5 p+1 ָ��ָ��b�ĵ�ַ
	////printf("%d\n", strlen(*p));//err
	////printf("%d\n", strlen(p[0]));//err
	//printf("%d\n", strlen(&p));//x p�ĵ�ַ��δ֪��
	//printf("%d\n", strlen(&p+1));//y ͬ��
	//printf("%d\n", strlen(&p[0]+1));//5 ָ��ָ��b�ĵ�ַ

	//printf("%d\n", sizeof(p));//4 ��Ԫ�ص�ַ
	//printf("%d\n", sizeof(p+1));//4 �ڶ���Ԫ�ص�ַ
	//printf("%d\n", sizeof(*p));//1  ��һ��Ԫ��
	//printf("%d\n", sizeof(p[0]));//1 ��һ��Ԫ��
	//printf("%d\n", sizeof(&p));//4 ��ַ
	//printf("%d\n", sizeof(&p+1));//4
	//printf("%d\n", sizeof(&p[0]+1));//4

	int a[3][4] = {0};
	printf("%d\n",sizeof(a));//48  3*4*4
	printf("%d\n",sizeof(a[0][0]));//4 
	printf("%d\n",sizeof(a[0]));//16  a[0]�൱�ڵ�һ�е������� һ����4��Ԫ�� �ʴ�СΪ4*4
	printf("%d\n",sizeof(a[0]+1));//4 ��ַ
	printf("%p\n", &a[0][0]);
	printf("%p\n", a[0]+1);
	printf("%p\n", &a[0][1]);


	//printf("%d\n",sizeof(*(a[0]+1)));//4
	//printf("%d\n",sizeof(a+1));//4
	//printf("%d\n",sizeof(*(a+1)));//16
	//printf("%d\n",sizeof(&a[0]+1));//4
	//printf("%d\n",sizeof(*(&a[0]+1)));//16
	//printf("%d\n",sizeof(*a));//16
	//printf("%d\n",sizeof(a[3]));//16

	printf("\n");
	system("pause");
	return 0;
}