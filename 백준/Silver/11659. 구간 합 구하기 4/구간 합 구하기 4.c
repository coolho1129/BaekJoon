#include <stdio.h> 

int main()
{
	int input,N, M,start,end,result;
	scanf("%d %d",&N,&M);
	
	int *sum = calloc(N, sizeof(int));
	
	for (int i = 0; i < N; i++) {
		scanf("%d", &input);
		sum[i] = (i == 0)?input:sum[i-1]+input;
	}
	
	for (int i = 0; i < M; i++) {
		scanf("%d %d", &start, &end);
		result = (start == 1)? sum[end-1]:sum[end-1] - sum[start - 2];
		printf("%d\n", result);
	}
	return 0;
}





