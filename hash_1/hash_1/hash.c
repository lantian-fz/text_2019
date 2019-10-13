#define _CRT_SECURE_NO_WARNINGS 1

#include "hash.h"

void Init(bucket_node *ha[P],int sz)
{
	memset(ha, -1, sizeof(bucket_node)*P);
}

int insert_new_element(int new_element)
{
	int x = new_element%P;
	int i = 0;
	bucket_node *p = &hash_table[x];
	//if (p->next == NULL)
	//{
	while (new_element)
	{
		i = 0;
		while (i != 3)
		{
			if (p->data[i] == 0)
			{
				p->data[i] = new_element;
				new_element = 0;
				break;
			}
			i++;
			if (i == 3)
			{
				bucket_node *s = (bucket_node*)malloc(sizeof(bucket_node));
				p->next = s;
				p = p->next;
			}
		}
	}


	//}
	//else
	//{

	//}
}