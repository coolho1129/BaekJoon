#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include<math.h>
#define SWAP(a,b,t) {t=a;a=b;b=t;}
#define TRUE 1
#define FALSE 0

int sorted[1000000];
void merge(int list[], int left, int mid, int right) {
	int i, j, k, l;
	i = left;
	j = mid + 1;
	k = left;
	while (i <= mid && j <= right) {
		if (list[i] <= list[j])
			sorted[k++] = list[i++];


		else
			sorted[k++] = list[j++];

	}

	if (i > mid) {
		for (l = j; l <= right; l++) {
			sorted[k++] = list[l];
		}
	}
	else {
		for (l = i; l <= mid; l++) {
			sorted[k++] = list[l];
		}

	}

	for (l = left; l <= right; l++) {
		list[l] = sorted[l];
	}

}

void merge_sort(int list[], int left, int right) {
	int mid;
	if (left < right) {
		mid = (left + right) / 2;
		merge_sort(list, left, mid);
		merge_sort(list, mid + 1, right);
		merge(list, left, mid, right);


	}

}

int isDuplicate(int arry[], int N, int r) {
	for (int i = 0; i < N; i++) {
		if (arry[i] == r) {
			return TRUE;
		}

	}
	return FALSE;
}
 
int BinarySearch(int* arr, int start, int end, int key) {
	while (start <= end){
		
		int mid = (start + end) / 2;

		if (key == arr[mid])
		{
			return mid;
		}
		else if (key > arr[mid])
			start = mid + 1;
		else
			end = mid - 1;
	}

}


int main() {
	int N, index = 0;
	scanf("%d", &N);
	int* input = calloc(N, sizeof(int));
	int* temp = calloc(N, sizeof(int));
	int* output = calloc(N, sizeof(int));

	for (int i = 0; i < N; i++) {
		scanf("%d", &input[i]);
		temp[i] = input[i];
	}
	
	merge_sort(temp, 0, N - 1);

	for (int i = 0; i < N; i++) {
		if (temp[i] != temp[i + 1]) {
			output[index++] = temp[i];
		}
	}
	
	
	for (int i = 0; i < N; i++) {
		printf("%d ", BinarySearch(output, 0, index - 1, input[i]));
	}
	

	return 0;
}