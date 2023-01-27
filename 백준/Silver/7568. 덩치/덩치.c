#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 



int main()
{
	int N, x[50] = { 0 }, y[50] = { 0 }, grade;
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
	{
		scanf("%d %d", &x[i], &y[i]);
	}

	for (int i = 0; i < N; i++)
	{
		grade = 1;
		for (int j = 0; j < N; j++)
		{ 
			if (x[i] < x[j] && y[i] < y[j])
			{
				grade++;
			}
		}
		printf("%d ",grade);
	}



}