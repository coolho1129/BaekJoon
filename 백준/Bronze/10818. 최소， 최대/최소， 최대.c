#include <stdio.h>
#include <math.h>

int main(void)
{
	int a[1000000];
	int i, N;
	 
	scanf("%d", &N);
	
	for (i = 0; i < N; i++)
	{
		scanf("%d", &a[i]);
	}

	int max = a[0];
	int min = a[0];
	
	for (i = 0; i < N; i++)
	{
		if (a[i] > max)
		{
			max = a[i];
		}

		if (a[i] < min)
		{
			min = a[i];
		}
	}

	printf("%d %d\n", min, max);
	
	return 0;
}