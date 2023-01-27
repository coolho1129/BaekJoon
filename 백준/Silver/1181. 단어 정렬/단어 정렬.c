#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include<math.h>
#define SWAP(a,b,t) {t=a;a=b;b=t;}

typedef struct str{

	char word[51];
	int len;
}str;

str sorted[100000];

void merge(str list[], int left, int mid, int right) {
	int i, j, k, l;
	i = left;
	j = mid + 1;
	k = left;
	while (i <= mid && j <= right) {
		if (list[i].len < list[j].len)
			sorted[k++] = list[i++];

		else if (list[i].len == list[j].len) {
			if (strcmp(list[i].word,list[j].word)<=0)
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

void merge_sort(str list[], int left, int right) {
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
	str *input = calloc(N, sizeof(str));
	for (int i = 0; i < N; i++) {
		scanf("%s", &input[i].word);
		input[i].len = strlen(input[i].word);
	}
	merge_sort(input, 0, N - 1);
	

	for (int i = 1; i <=N; i++) {
		if(strcmp(input[i-1].word,input[i].word)!=0)
			printf("%s\n", input[i-1].word);
	}
	return 0;
}