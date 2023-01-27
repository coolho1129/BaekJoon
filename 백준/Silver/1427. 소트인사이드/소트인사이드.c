#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>


int main() {
	long long N;
	int num[10] = {0};
	scanf("%lld", &N);
	
	while (N) {
		num[N % 10]++;
		N /= 10;
	
	}

	for (int i = 9; i>=0; i--) {
		if (num[i]) {
			printf("%d", i);
			num[i]--;
			i++;
		}
	}
	
	return 0;
}