#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>

int main() {
	int n;
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		
		for (int j = n - i; j >= 1; j--) {
			printf(" ");
		}
		for (int k = 1; k <= i; k++)
			printf("*");
		puts("");
	}

	for (int i = n-1; i >=1 ; i--) {
		for (int j = i; j <= n - 1; j++)
			printf(" ");

		for (int k = i; k >= 1; k--)
			printf("*");
		puts("");
	}


	return 0;
}