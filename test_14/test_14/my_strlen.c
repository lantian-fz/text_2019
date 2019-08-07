#define _CRT_SECURE_NO_WARNINGS 1

#include "my_strlen.h"

unsigned int my_strlen(const char* str)
{
	if (*str != '\0')
		return 1 + my_strlen(str + 1);
	else
		return 0;
}