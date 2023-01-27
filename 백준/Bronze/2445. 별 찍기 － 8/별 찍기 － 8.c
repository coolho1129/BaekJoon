#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>

int main() {
	int n;
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		
		
		for (int j = 1; j <= i; j++)
			printf("*");
		for (int k = 2*n - 2*i; k >= 1; k--) {
			printf(" ");
		}
		for (int j = 1; j <= i; j++)
			printf("*");
		
		puts("");
	}

		for (int i = n-1; i >=1 ; i--) {
		

		for (int k = i; k >= 1; k--)
			printf("*");
		for (int j = 0; j < 2 * n - 2 * i; j++)
			printf(" ");
		
		for (int k = i; k >= 1; k--)
			printf("*");

		
		
		puts("");
	}


	return 0;
}