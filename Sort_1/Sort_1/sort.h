#ifndef _SORT_H_
#define _SORT_H_

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void Print(int arr[], int left, int right);
void InsertionSort1(int *arr, int left, int right);//ֱ�Ӳ������� ֱ�ӽ���
void InsertionSort2(int *arr, int left, int right);//ֱ�Ӳ������� ���ݸ���
void InsertionSort3(int *arr, int left, int right);//ֱ�Ӳ������� ���ڱ�λ
void BinInsertSort(int *arr, int left, int right);//���ֲ�������
void TwoWayInsertSort(int *arr, int left, int right);//��·��������
void TestSort();//�����ٶȱȽ�

#endif