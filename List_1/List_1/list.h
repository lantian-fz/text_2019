#define _CRT_SECURE_NO_WARNINGS 1
#ifndef _LIST_H_
#define _LIST_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#define MAX 8

typedef struct SeqList
{
	int* base;
	int capcacity;
	int sz;
}SeqList;

void ListInit(SeqList* seq, int cap);
void ListPushBack(SeqList* seq);//尾插法
void ListPushFront(SeqList* seq);//头插法
void ListShow(SeqList* seq);//显示
void ListLength(SeqList* seq);//求表长
void ListFind(SeqList* seq);//查找
void ListChange(SeqList* seq);//修改
void ListReverse(SeqList* seq);//逆置
void ListSort(SeqList* seq);//排序
void ListInsert(SeqList* seq);//插入
void ListDelete(SeqList* seq);//删除
void ListFree(SeqList* seq);//清空
void ListExit(SeqList* seq);//退出

void ListFindPos(SeqList* seq);//按位置查找
void ListFindVal(SeqList* seq);//按元素查找

void ListDeletePos(SeqList* seq);//按位置删除
void ListDeleteVal(SeqList* seq);//按元素删除

#endif