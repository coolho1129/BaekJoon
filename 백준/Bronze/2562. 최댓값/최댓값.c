#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a[9];
	int i;

	for (i = 0; i < 9; i++)
	{
		scanf("%d", &a[i]);
	}

	int max = 0;
	int num = 0;
	
	for (i = 0; i < 9; i++)
	{
		if (a[i] > max)
		{
			max = a[i];
			num = i + 1;
		}

	}

	printf("%d\n%d", max, num);
	
	return 0;
}