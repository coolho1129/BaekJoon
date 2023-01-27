#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include<math.h>
#define SWAP(a,b,t) {t=a;a=b;b=t;}



int num[500001] = { 0 },negative[4001] = { 0 }, positive[4001] = { 0 }, mode[500001];

void quicksort(int left, int right, int arry[]) {
	int i, j, pivot, temp;

	if (left < right) {
		i = left;
		j = right + 1;
		pivot = arry[left];

		do {
			do i++; while (arry[i] < pivot);
			do j--; while (arry[j] > pivot);

			if (i < j)
				SWAP(arry[i], arry[j], temp);

		} while (i < j);

		SWAP(arry[left], arry[j], temp);
		quicksort(left, j - 1, arry);
		quicksort(j + 1, right, arry);
	}

}



int findmode(int* postive, int* negative) {
	int index = 0, maxP, maxN, Max;

	maxP = postive[0];
	maxN = negative[1];

	for (int i = 0; i < 4001; i++) {
		if (maxP < postive[i]) {
			maxP = postive[i];
		}

		if (i!=0&&maxN < negative[i]) {

			maxN = negative[i];
		}
	}
	Max = (maxN > maxP ? maxN : maxP);

	for (int i = 0; i < 4001; i++) {
		if (Max == postive[i]) {
			mode[index++] = i;

		}
		if (i!=0&&Max == negative[i])
			mode[index++] = -i;
	}


	quicksort(0, index - 1, mode);

	if (index!=1) {
		if (mode[0] >= 0 && index == 2)
			return mode[0];
		
		return mode[1];
	}
	else
		return mode[0];






}


int main() {
	int N, n, sum = 0, range, mid, avg, Mode;
	scanf("%d", &N);

	for (int i = 0; i < N; i++) {
		scanf("%d", &num[i]);

		sum += num[i];
		if (num[i] < 0)
			negative[-num[i]]++;

		else
			positive[num[i]]++;
	}


	avg = round((double)sum / N);
	quicksort(0, N - 1, num);

	mid = num[N / 2];
	Mode = findmode(positive, negative);
	range = (num[N - 1] - num[0]);
	printf("%d\n%d\n%d\n%d", avg, mid, Mode, range);


	return 0;
}