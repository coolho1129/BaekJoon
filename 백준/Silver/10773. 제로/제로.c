#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	int K,top=-1, x,stack[1000000] = { 0 },sum=0;
	scanf("%d", &K);
	
	for (int i = 0; i < K; i++)
	{
		scanf("%d", &x);
		
		if (x != 0)
			stack[++top] = x;
		
		else
			stack[top--];


	}
	if (top != -1)
	{	for(int i=0;i<=top;i++)
		sum+=stack[i];
		printf("%d\n", sum);
	}
	else
		printf("%d\n", top+1);
}