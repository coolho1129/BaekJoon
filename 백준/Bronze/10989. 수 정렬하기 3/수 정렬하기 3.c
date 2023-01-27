#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>


int main() {
	int N,n,num[10001] = {0};
	scanf("%d", &N);
	
	for (int i = 0; i < N; i++) {
		scanf("%d", &n);
		num[n]++;
	}

	for (int i =0; i< 10001; i++) {
		if (num[i]) {
			printf("%d\n", i);
			num[i]--;
			i--;
		}
	}
	
	return 0;
}