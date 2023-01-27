#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 


int main()
{
	int N, M,arry[100],max=0,sum=0;
	scanf("%d %d",&N, &M);
	for (int i = 0; i < N; i++)
	{
		scanf("%d", &arry[i]);
	}

	for (int i = 0; i < N; i++)
	{
		for (int j = i + 1; j < N; j++)
		{
			for (int k = j + 1; k < N; k++)
			{		sum = arry[i] + arry[j] + arry[k];
			
				if (M >= sum && sum > max)
				{
					max = sum;
				}
			}
		}
	}
	printf("%d", max);
}