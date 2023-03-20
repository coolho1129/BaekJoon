#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define SWAP(a, b, tmp) \
    {                   \
        tmp = a;        \
        a = b;          \
        b = tmp;        \
    }
#define MAX_ELEMENTS 1000002

int N;
typedef struct {
    int key;
} element;
element heap[MAX_ELEMENTS];

void adjust(int root, int n) {
    int child, rootkey;
    element temp;
    temp = heap[root];
    rootkey = heap[root].key;
    child = 2 * root;

    while (child <= n) {
        if ((child < n) && (heap[child].key < heap[child + 1].key))
            child++;
        if (rootkey > heap[child].key)
            break;
        else {
            heap[child / 2] = heap[child];
            child *= 2;
        }
    }
    heap[child / 2] = temp;
}

void heapSort(int n) {
    int i, j;
    element temp;

    for (i = n / 2; i > 0; i--)
        adjust(i, n);
    for (i = n - 1; i > 0; i--) {
        SWAP(heap[1], heap[i + 1], temp);
        adjust(1, i);
    }
}

int main() {
    scanf("%d", &N);
    int n = 0;
    element item;
    for (int i = 1; i <= N; i++) {
        scanf("%d", &heap[i].key);
    }

    heapSort(N);
    for (int i = 1; i <= N; i++)
        printf("%d\n", heap[i].key);

    return 0;
}
