#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<stdlib.h>
#define SWAP(a,b,t) {t=a;a=b;b=t;}

typedef struct human{

	char name[101];
	int age;
}human;

human sorted[100000];

void merge(human list[], int left, int mid, int right) {
	int i, j, k, l;
	i = left;
	j = mid + 1;
	k = left;
	while (i <= mid && j <= right) {
		if (list[i].age <= list[j].age)
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

void merge_sort(human list[], int left, int right) {
	int mid;
	if (left < right) {
		mid = (left + right) / 2;
		merge_sort(list, left, mid);
		merge_sort(list, mid + 1, right);
		merge(list, left, mid, right);


	}

}




int main() {
	int N;
	scanf("%d", &N);
	human *input = calloc(N, sizeof(human));
	for (int i = 0; i < N; i++) {
		scanf("%d %s",&input[i].age ,&input[i].name);
		
	}
	merge_sort(input, 0, N - 1);
	
	
	for (int i = 0; i < N; i++) {
	
			printf("%d %s\n", input[i].age,input[i].name);
	}
	return 0;
}