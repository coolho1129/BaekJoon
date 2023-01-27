#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 


int main(void) 
{
	int max=0, num[10], left[1000] = {0}, cnt = 0;
	
	for (int i = 0; i < 10; i++)
		scanf("%d", &num[i]);

	for (int i = 0; i < 10; i++)
	{
		left[num[i] % 42]++;
		if (max < num[i] % 42)
			max = num[i] % 42;
	}
	for (int i = 0; i <= max; i++)
	{
		if (left[i] != 0)
			cnt++;
	}

	printf("%d", cnt);

	
	
}