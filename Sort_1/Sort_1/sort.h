#ifndef _SORT_H_
#define _SORT_H_

#include <stdio.h>
#include <stdlib.h>

void Print(int arr[], int sz);
void InsertionSort1(int *arr, int left, int right);//直接插入排序 直接交换
void InsertionSort2(int *arr, int left, int right);//直接插入排序 数据覆盖
void InsertionSort3(int *arr, int left, int right);//直接插入排序 加哨兵位

#endif