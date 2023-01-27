#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>

int main() {
	int n;
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		

		for (int k = 1; k <= n; k++)
			printf("*");
		puts("");
	}


	return 0;
}