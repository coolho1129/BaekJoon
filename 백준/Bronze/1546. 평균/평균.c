#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 


int main()
{
	int n;
	double score[1000] = { 0 }, M, new_score[1000] = { 0 }, sum = 0;
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%lf", &score[i]);
	}
	M = score[0];
	
	for (int i = 0; i < n; i++)
	{
		if (M < score[i])
			M = score[i];
	}
	for (int i = 0; i < n; i++)
	{
		new_score[i]=score[i]/M*100;
	}
	for (int i = 0; i < n; i++)
	{
		sum += new_score[i];
	}
	printf("%lf", sum / n);
}