#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 

int main()
{
	long long x;
	int n, m,k = 1,sum=0;

	scanf("%lld", &x);
	if (x == 1)
		printf("1/1");
	else
	{
		for (int i = 1;; i++)
		{
			if (i * (i + 1) / 2 < x && x <=(i + 1) * (i + 2) / 2)
			{
				n = i;
				break;

			}
		}
		sum = (n+1) * n / 2;
		int L = x - sum;
		//printf("%d %d %d\n", n, sum, L);
		
		if (n % 2 == 1)
		{
			m = n + 1;
			
			for (int j = 1; j < L; j++)
			{
				k++, m--;
			}
			printf("%d/%d", k,m );
		}
		else
		{
			m = n + 1;
			for (int j = 1; j < L; j++)
			{
				k++, m--;
			}
			printf("%d/%d ", m,k);


		}

	}
}