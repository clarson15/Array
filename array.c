#include "array.h"
void initArray(Array* a, size_t arraySize, size_t elementSize){
	a->contents = malloc(sizeof(void*)*arraySize);
	a->size = arraySize;
	a->elementSize = elementSize;
	a->nextEmpty = 0;
}

void addArray(Array *a, void* element){
	if(a->nextEmpty >= a->size){
		a->contents = realloc(a->contents, sizeof(void*)*a->size*2);
		a->size*=2;
	}
	a->contents[a->nextEmpty] = malloc(a->elementSize);
	memcpy(a->contents[a->nextEmpty], element, a->elementSize);
	a->nextEmpty++;
}

void removeArray(Array *a, int index){
	if(index >= a->nextEmpty) return;
	free(a->contents[index]);
	for(int b = index; b < a->nextEmpty; b++){
		a->contents[b] = a->contents[b+1];
	}
	a->nextEmpty--;
	free(a->contents[a->nextEmpty]);
}
void freeArray(Array *a){
	int b;
	for(b = 0; b < a->nextEmpty; b++){
		free(a->contents[b]);
	}
	free(a->contents);
}
