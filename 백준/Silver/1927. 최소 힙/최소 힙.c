#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<stdlib.h>
#define MAX_ELEMENTS 100002
#define HEAP_FULL(n) (n==MAX_ELEMENTS -1)
#define HEAP_EMPTY(n) (!n)

typedef struct {
	int key;
}element;

element heap[MAX_ELEMENTS];

void push(element item, int* n) {
	int i;
	if (HEAP_FULL(*n)) {
		fprintf(stderr, "The heap is full.\n ");
		exit(EXIT_FAILURE);
	}
	i = ++(*n);

	while ((i != 1) && (item.key < heap[i / 2].key)) {
		heap[i] = heap[i / 2];
		i /= 2;
	}
	heap[i] = item;

}

int pop(int* n) {
	element item, temp;
	int parent, child;

	if (HEAP_EMPTY(*n)) {
		return 0;
	}

	item = heap[1];
	temp = heap[(*n)--];
	parent = 1;
	child = 2;

	while (child <= *n) {
		if ((child < *n) && heap[child].key > heap[child + 1].key) {
			child++;
		}
		if (temp.key <= heap[child].key) {
			break;
		}
		heap[parent] = heap[child];
		parent = child;
		child *= 2;
	}
	heap[parent] = temp;
	return item.key;
}

int main() {

	int N,n = 0;
	element item;
	scanf("%d", &N);
	
	for (int i = 0; i < N; i++) {
		scanf("%d", &item.key);
		
		if (item.key) {
			push(item, &n);
		}
		else{
			printf("%d\n", pop(&n));		
		}
	}
    return 0;
}