#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>

int main() {
	int n;
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		for (int j = n - i; j > 0; j--)
			printf(" ");

		for (int k = 1; k <= i; k++)
			printf("*");


		for (int l = i - 1; l > 0; l--)
			printf("*");

		puts("");
	}

	return 0;
}