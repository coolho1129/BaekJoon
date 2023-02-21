#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 


void Combination(int N, int M)
{
	long n = 1,K = M;

	if (M >= N / 2)
	{
		K = N - M;
	}

	for (int i = 1; i <= K; i++)
	{
		n *= N;
		n /= i;
		N--;
	}
	printf("%ld\n", n);
}



int main()
{
	int  N, M;
	scanf("%d %d", &N, &M);
	
    Combination(N, M);
}