#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<stdlib.h>
#define SWAP(a,b,t){t=a;a=b;b=t;}

int set[1000000];

int binarySearch(int *set,int find,int start,int end) {
	int low = start;
	int high = end;
	int middle;
	while (low <= high) {
		middle = (low + high) / 2;

		if (set[middle] == find) {
			return 1;
		}
		else if (set[middle] < find) {
			low= middle+1;
		}
		else {
			high = middle-1;
		}
	}

	return 0;
}

void QuickSort(int* array, int left, int right) {

	int pivot, i, j,temp;


	if (left < right) {
		i = left;
		j = right + 1;
		pivot = array[left];
		do {

			do i++; while (array[i] < pivot);
			do j--; while (array[j] > pivot);
			if (i < j)
				SWAP(array[i], array[j],temp);
		} while (i < j);
		SWAP(array[left], array[j],temp);
		QuickSort(array, left, j - 1);
		QuickSort(array, j + 1, right);
	}
	else
		return;





}

int main() {

	int a, b, num,count;
	scanf("%d %d", &a, &b);
	count = a + b;
	for (int i = 0; i < a; i++) {
		scanf("%d", &set[i]);
	}
	QuickSort(set, 0, a);
	
	for (int i = 0; i < b; i++) {
		scanf("%d", &num);
		if (binarySearch(set, num, 0, a))
			count -= 2;
	
	}

	printf("%d", count);
}