#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<stdlib.h>
#define SWAP(a,b,t) {t=a;a=b;b=t;}
#define MAX 1000000


typedef struct coordinate {
	int x;
	int y;

}coordinate;

coordinate  sorted[MAX];

void merge(coordinate list[],int left,int mid,int right) {
	int i, j, k, l;
	i = left;
	j = mid + 1;
	k = left;
	while (i <= mid && j <= right) {
		if (list[i].y < list[j].y)
			sorted[k++] = list[i++];
		
		else if (list[i].y == list[j].y) {
			if (list[i].x < list[j].x)
				sorted[k++] = list[i++];
			else
				sorted[k++] = list[j++];
		}
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

void merge_sort(coordinate list[], int left, int right) {
	int mid;
	if (left < right) {
		mid = (left + right) / 2;
		merge_sort(list, left, mid);
		merge_sort(list, mid+1, right);
		merge(list, left, mid, right);

	
	}

}


int main() {
	int N;
	scanf("%d", &N);

	coordinate* input = calloc(N+1, sizeof(coordinate));
	coordinate temp;
	for (int i = 0; i <N; i++) {
		scanf("%d %d", &input[i].x, &input[i].y);
	}

	merge_sort(input, 0, N - 1);
	

	for (int i = 0; i < N; i++) {
		printf("%d %d\n", input[i].x, input[i].y);
	}
	return 0;
}