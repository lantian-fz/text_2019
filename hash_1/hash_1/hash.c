#define _CRT_SECURE_NO_WARNINGS 1

#include "hash.h"

void Init()
{
	for (int i = 0; i < P; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			hash_table[i].data[j] = -1;
		}
		hash_table[i].next = NULL;
	}
}

int insert_new_element(int new_element)
{
	int x = new_element%P;
	int i = 0;
	bucket_node *p = &hash_table[x];
	for (i = 0; i < 3; i++)
	{
		if (hash_table[x].data[i] == -1)
		{
			hash_table[x].data[i] = new_element;
			return 0;
		}
	}
	while (p->next)
	{
		p = p->next;
		for (i = 0; i < 3; i++)
		{
			if (p->data[i] == -1)
			{
				p->data[i] = new_element;
				return 0;
			}
		}
	}

	bucket_node *s = (bucket_node *)malloc(sizeof(bucket_node));
	if (s == NULL)
		return -1;
	for (i = 0; i < 3; i++)
		s->data[i] = -1;
	s->next = NULL;
	s->data[0] = new_element;
	p->next = s;
	return 0;
}