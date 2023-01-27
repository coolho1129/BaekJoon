#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#include <math.h>

int main()
{
	long N;
	double area = 0;
	scanf("%d", &N);
	long long* x = (long long*)malloc(sizeof(long long) * N);
	long long* y = (long long*)malloc(sizeof(long long) * N);

	for (int i = 0; i < N; i++)
		scanf("%lld %lld", &x[i], &y[i]);

	area= x[N - 1] * y[0] - y[N - 1] * x[0];
	for (int i = 0; i < N - 1; i++)
	{
		area += x[i] * y[i + 1];
		area -= y[i] * x[i + 1];
	}

	area = fabs(area / 2);


	if ((long long)((area - (long long)area) * 100) >= 5)
		printf("%0.1lf", ceil(area * 10) / 10);
	else
		printf("%0.1lf", floor(area * 10) / 10);

	return 0;
}