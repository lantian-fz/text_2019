#define _CRT_SECURE_NO_WARNINGS 1

#include "list.h"

DListNode *Node(DataType x)
{
	DListNode *s = (DListNode*)malloc(sizeof(DListNode));
	assert(s);
	s->data = x;
	s->prev = NULL;
	s->next = NULL;
	return s;
}

void DListInit(DList *list)//初始化
{
	DListNode *s = Node(0);//初始化为0
	list->first = s;
	list->last = s;
	list->last->next = NULL;
	list->size = 0;
}

void DListPushBack(DList *list, DataType x)//尾插法创建双向链表
{
	assert(list);
	assert(list->first);
	DListNode *s = Node(x);
	list->last->next = s;
	//s->next = NULL;
	s->prev = list->last;
	list->last = s;
	list->size++;
}

void DListPushFront(DList *list, DataType x)//头插法创建双向链表
{
	assert(list);
	assert(list->first);
	DListNode *s = Node(x);
	s->next = list->first->next;
	if (s->next!=NULL)
		s->next->prev = s;
	list->first->next = s;
	s->prev = list->first;
	if (list->size == 0)
		list->last = s;
	list->size++;
}

void DListShow(DList *list)//显示双向链表
{
	assert(list);
	assert(list->first);
	DListNode *p = list->first->next;
	while (p)
	{
		printf("%u ", p->data);
		p = p->next;
	}
	printf("\n");
}

size_t DListLen(DList *list)//求表长
{
	assert(list->first);
	return list->size;
}

DListNode *DListFindData(DList *list, DataType x)//按值查找元素
{
	assert(list);
	assert(list->first);
	DListNode *p = list->first->next;
	while (p!=NULL)
	{
		if (p->data == x)
			return p;
		p = p->next;
	}
	return p;
}

DListNode *DListFindSite(DList *list, size_t x)//按位置查找
{
	assert(list);
	assert(list->first);
	DListNode *p = list->first;
	if (x > list->size)
		return NULL;
	while (x--)
		p = p->next;
	return p;
}

int DListPushRear(DList *list, DListNode *s, DataType key)//后插运算
{
	assert(list);
	assert(list->first);
	DListNode *p = Node(key);
	if (s == NULL)
		return 0;
	if (s->next != NULL)
	{
		p->next = s->next;
		s->next->prev = p;
		s->next = p;
		p->prev = s;
		list->size++;
	}
	else
		DListPushBack(list, key);
	return 1;
}

int DListPushFormer(DList *list, DListNode *s, DataType key)//前插运算
{
	assert(list);
	assert(list->first);
	DListNode *p = Node(key);
	if (s == NULL)
		return 0;
	s->prev->next = p;
	p->prev = s->prev;
	s->prev = p;
	p->next = s;
	list->size++;
	return 1;
}

int DListPushSite(DList *list, size_t x, DataType key)//按位置插入
{
	assert(list);
	assert(list->first);
	if (x == list->size + 1)
		DListPushBack(list, key);
	else
	{
		DListNode *q = DListFindSite(list, x);
		if (q == NULL)
			return 0;
		else
			DListPushFormer(list, q, key);
	}
	return 1;
}

int DListSiteAlter(DList *list, size_t x, DataType key)//按位置修改
{
	assert(list);
	assert(list->first);
	DListNode *q = DListFindSite(list, x);
	if (q == NULL)
		return 0;
	else
		q->data = key;
	return 1;
}
int DListDataAlter(DList *list, DataType x, DataType key)//按元素修改，将所有x修改为key，返回修改x的个数
{
	assert(list);
	assert(list->first);
	DListNode *q = list->first->next;
	int count = 0;
	while (q != NULL)
	{
		if (q->data == x)
		{
			q->data = key;
			count++;
		}
		q = q->next;
	}
	return count;
}

int DListSiteDelete(DList *list, size_t x)//按位置删除
{
	assert(list);
	assert(list->first);
	DListNode *q = DListFindSite(list, x);
	if (q == NULL)
		return 0;
	else
	{
		if (list->last == q)
		{
			q->prev->next = NULL;
			list->last = q->prev;
			free(q);
			q = NULL;
		}
		else
		{
			q->prev->next = q->next;
			q->next->prev = q->prev;
			free(q);
			q = NULL;
		}
		list->size--;
	}
	return 1;
}

int DListDataDelete(DList *list, DataType key)//按元素删除，返回删除x的个数
{
	assert(list);
	assert(list->first);
	DListNode *q = list->first;
	int count = 0;
	while (q->next != NULL)
	{
		if (q->next->data == key)
		{
			DListNode *p = q->next;
			if (list->last == q->next)
			{
				p->prev->next = NULL;
				list->last = p->prev;
				free(p);
				p = NULL;
			}
			else
			{
				p->prev->next = p->next;
				p->next->prev = p->prev;
				free(p);
				p = NULL;
			}
			list->size--;
			count++;
			continue;
		}
		q = q->next;
	}
	return count;
}

void DListEmpty(DList *list)//清除所有元素
{
	assert(list->first);
	while (list->size)
		DListSiteDelete(list, 1);
}

void DListReverse(DList *list)//逆置
{
	assert(list->first);
	if (list->size == 0 || list->size == 1)
		return;
	else
	{
		DListNode *p = list->first->next;
		DListNode *q = p->next;
		list->last = p;
		p->next = NULL;
		while (q!=NULL)
		{
			p = q;
			q = q->next;
			p->next = list->first->next;
			p->prev = list->first;
			p->next->prev = p;
			list->first->next = p;
		}
	}
}

void DListEmptyPlus(DList *list)//销毁
{
	assert(list);
	assert(list->first);

	DListEmpty(list);
	if (list->first != NULL)
	{
		free(list->first);
		list->first = NULL;
	}
}

void DListSort(DList *list)//排序
{
	assert(list);
	assert(list->first);
	if (list->size == 0 || list->size == 1)
		return;
	else
	{
		DListNode *p = list->first->next;
		DListNode *q = p->next;
		list->last = p;
		p->next = NULL;
		while (q != NULL)
		{
			DListNode *tmp = list->first->next;
			p = q;
			q = q->next;
			while (tmp != NULL && tmp->data < p->data)
				tmp = tmp->next;
			if (tmp == NULL)
			{
				p->prev = list->last;
				list->last->next = p;
				list->last = p;
				p->next = NULL;
			}
			else
			{
				p->next = tmp;
				p->prev = tmp->prev;
				tmp->prev = p;
				p->prev->next = p;	
			}
		}
	}
}