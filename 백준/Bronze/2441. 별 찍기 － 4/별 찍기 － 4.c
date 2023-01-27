#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
int main()
{
	int N, i, j;

	scanf("%d", &N);


	for (i = 1; i <= N; i++)
	{
		for (int k = 1; k < i; k++)
			printf(" ");
			
		for (j = N; j >= i; j--)
			printf("*");
		
		printf("\n");
	}
	return 0;



}