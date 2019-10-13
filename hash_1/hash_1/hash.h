#ifndef _HASH_H_
#define _HASH_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define P 7
#define NULL_DATA -1

typedef struct bucket_node
{
	int data[3];
	struct bucket_node *next;
}bucket_node;

bucket_node hash_table[P];

//void Init(bucket_node *ha[P], int sz);

int insert_new_element(int new_element);

#endif 