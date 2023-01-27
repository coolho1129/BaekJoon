#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 


int main()
{
	int N, num[1000] = { 0 },tmp;
	scanf("%d", &N);
	for(int i=0;i<N;i++)
	scanf("%d", &num[i]);

	for (int i = 0; i < N; i++)
	{
		for (int j = i + 1; j < N; j++)
		{
			if (num[i] > num[j])
			{
				tmp = num[i];
				num[i] = num[j];
				num[j] = tmp;
			}
		}
	}
	for (int i = 0; i < N; i++)
		printf("%d\n", num[i]);
	
	return 0;

}