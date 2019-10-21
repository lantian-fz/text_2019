#ifndef _SORT_H_
#define _SORT_H_

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void Print(int arr[], int left, int right);
void InsertionSort1(int *arr, int left, int right);//直接插入排序 直接交换
void InsertionSort2(int *arr, int left, int right);//直接插入排序 数据覆盖
void InsertionSort3(int *arr, int left, int right);//直接插入排序 加哨兵位
void BinInsertSort(int *arr, int left, int right);//二分插入排序
void TwoWayInsertSort(int *arr, int left, int right);//二路插入排序
void TestSort();//排序速度比较

#endif