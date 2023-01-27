#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#include<stdlib.h>




int main()
{
	int input,N, M,start,end,result;
	scanf("%d %d",&N,&M);
	
	int *sum = calloc(N, sizeof(int));
	
	for (int i = 0; i < N; i++) {
		scanf("%d", &input);
		if (i == 0)
			sum[i] = input;
		else
			sum[i] = sum[i - 1] + input;
	}
	
	for (int i = 0; i < M; i++) {
		scanf("%d %d", &start, &end);
		if (start == 1) {
			result = sum[end-1];
		}
		else
			result = sum[end-1] - sum[start - 2];
		
		
		printf("%d\n", result);
	}
	return 0;
}





