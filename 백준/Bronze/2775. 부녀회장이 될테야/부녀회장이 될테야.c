#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 


int main()
{
	int T, k, n, j,cnt=1;
	long num[1000][14] = { 0, };
	scanf("%d", &T);
	for (int i = 0; i < 14; i++)
		num[0][i] = i + 1;

	for (int i = 0; i < T; i++)
	{
		scanf("%d %d", &k, &n);

		for (int i = 1; i <= k; i++)
		{
			num[i][0] = 1;
			for (j = 1; j < n; j++)
			{
				num[i][j] = num[i - 1][j] + num[i][j- 1];
	
			}
		}
	
		printf("%ld\n", num[k][n-1]);
	}
}