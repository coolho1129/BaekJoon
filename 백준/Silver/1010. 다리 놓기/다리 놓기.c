#include <stdio.h> 

void Combination(int N, int M)
{
	int n = 1, K = N;

	
		if (N >= M / 2)
		{
			K = M - N;

		}


		for (int i = 1; i <= K; i++)
		{
			n *= M;
			n /= i;
			M--;

		}
		printf("%d\n", n);

	}




int main()
{
	int T, N, M;

	scanf("%d", &T);

	for (int i = 0; i < T; i++)
	{
		scanf("%d %d", &N, &M);
		Combination(N, M);


	}
}