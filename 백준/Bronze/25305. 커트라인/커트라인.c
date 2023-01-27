#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#include <stdlib.h>

int main() {
	int temp,n, k; 
	
	scanf("%d %d", &n, &k);
    int *input = calloc(n, sizeof(int));
	for (int i = 0; i < n; i++) {
		scanf("%d", &input[i]);
	}

	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (input[i] < input[j]) {
				temp = input[i];
				input[i] = input[j];
				input[j] = temp;
			}
		}
	}

	printf("%d", input[k - 1]);
}