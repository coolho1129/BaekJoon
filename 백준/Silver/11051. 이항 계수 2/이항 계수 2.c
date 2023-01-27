int Combination[1001][1001];
void  pascal_triangle(int N, int M)
{
	
	 int n,k;
	

	
	for (n = 0; n <= N; n++)
	{
	
		for (k = 0; k <= n&&k<=N; k++)
		{
			
			if (n == k || k == 0)
				Combination[n][k] = 1;
			else
				Combination[n][k] = (Combination[n - 1][k - 1] + Combination[n - 1][k]) % 10007;
		}
	}

	printf("%d", Combination[N][M]);
}
	









int main()
{
	int N,M;
	scanf("%d %d", &N,&M);
	
	 pascal_triangle(N, M);

}