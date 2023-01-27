#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>

#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	for (int i = n; i >= 1; i--) {

		for (int j = i; j <= n - 1; j++)
			printf(" ");

		for (int k = 1; k < i; k++)
			printf("*");

		for (int l = i; l >= 1; l--)
			printf("*");

		puts("");
	}
	
	for (int i = 2; i <= n; i++) {
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