#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int countPrimenum(int num)
{
	int i;
	if (num ==1)
		return 0;
	
	for (i = 2; i < num; i++)
	{
		if(num% i == 0)
			return 0;
	}
	if (i == num)
		return 1;
}

int main()
{
	int N,result=0;
	scanf("%d", &N);
	int* num= (int*)malloc(sizeof(int)*N);
	for (int i = 0; i < N; i++)
	{
		scanf("%d", &num[i]);
		result+=countPrimenum(num[i]);
	}
	
	
	printf("%d", result);
}