#ifndef _ARRAY_H
#define _ARRAY_H
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
typedef struct{
	void ** contents;
	int nextEmpty;
	size_t size, elementSize;
} Array;

void initArray(Array*, size_t, size_t); //Array Object, Capacity, elementSize
void addArray(Array*, void*);
void removeArray(Array*, int);
void freeArray(Array*);

#endif
